/* /lib/bonus.c
 * from the dead souls mudlib http://www.dead-souls.net
 *
 * modified by Lash (ccoker) for use in The Brass Ring
 * bug fix: bonus object wasn't being destructed
 * 2014-12-12
 * added functionality for setting resistances
 * 2015-12-28
 *
 */

#include <lib.h>
#include ROOMS_H
#include <damage_types.h>

inherit LIB_ITEM;

int SetBonuses();

mapping Skills = ([]);
mapping Stats = ([]);
mapping Points = ([]);
int Duration = 15;
string bonusname;
object whom;
string brl = " "; //bonus resistance level
int brt = 0; //bonus resistance type

void create(){
    item::create();
    AddSave( ({ "Skills", "Stats", "Points", "Duration", "bonusname" }) );
    SetInvis(1);
    SetId("bonus_object");
    SetShort("bonus");
    SetLong("A bonus");
}

void init(){
    item::init();
    set_heart_beat(1);
    if(environment(this_object()) && living(environment(this_object()))) 
        SetBonuses();
}

void heart_beat(){
    if(Duration){
        Duration--;
    }
    else {
        this_object()->eventDestruct();
    }
    if(whom && environment() != whom){
        this_object()->eventDestruct();
    }
}

mapping SetStats(mapping arg){
    Stats = copy(arg);
    if(environment(this_object()) && living(environment(this_object())))
        SetBonuses();
    return copy(Stats);
}

mapping GetStats(){
    return copy(Stats);
}

mapping SetSkills(mapping arg){
    Skills = copy(arg);
    return copy(Skills);
}

mapping GetSkills(){
    return copy(Skills);
}

mapping SetPoints(mapping arg){
    Points = copy(arg);
    return copy(Points);
}

mapping GetPoints(){
    return copy(Points);
}

int SetBonusDuration(int i){
    Duration = i;
}

int AddBonusDuration(int i){
    Duration += i;
    if(Duration < 0) Duration = 0;
    return Duration;
}

int GetBonusDuration(){
    return Duration;
}

int SetBonuses(){
    whom = environment();
    if(!whom || ! living(whom)) return 0;
    if(sizeof(Stats))
        foreach(string key, int val in Stats){
            whom->AddStatBonus(key, val);
        }
    if(sizeof(Skills))
        foreach(string key, int val in Skills){
            whom->AddSkillBonus(key, val);
        }
    if(sizeof(Points))
        foreach(string key, int val in Points){
            switch(key){
                case "HP" : whom->AddHP(val);break;
                case "XP" : whom->AddExperiencePoints(val);break;
                case "SP" : whom->AddStaminaPoints(val);break;
                case "MP" : whom->AddMagicPoints(val);break;
                case "poison" : whom->AddPoison(val);break;
                case "caffeine" : whom->AddCaffeine(val);break;
                case "food" : whom->AddFood(val);break;
                case "drink" : whom->AddDrink(val);break;
                default : break;
            }
        }
    /* see /lib/lib/genetics.c for definition
     * of the following function 
     * -lash (ccoker)
     */
    if(brt !=0 && brl !=0)
    whom->SetResistance(brt,brl);
    
    return 1;    
}

int RemoveBonuses(){
    if(!whom && environment()) whom = environment();
    if(!whom || !living(whom)) return 0;
    if(sizeof(Stats))
        foreach(string key, int val in Stats){
            whom->RemoveStatBonus(key);
        }
    if(sizeof(Skills))
        foreach(string key, int val in Skills){
            whom->RemoveSkillBonus(key);
        }
    whom->SetResistance(brt,"none");
    
    return 1;
}

int eventMove(mixed dest){
    int ret;
    if(whom && environment() == whom){
        RemoveBonuses();
        whom = 0;
    }
    ret = ::eventMove(dest);
    return ret;
}

int eventDestruct(){
    if(!valid_event(previous_object(), this_object())) return 0;
    RemoveBonuses();
    this_object()->eventMove(ROOM_FURNACE);
    return ::eventDestruct();
}

string GetBonusName(){
    return bonusname;
}

string SetBonusName(string name){
    return bonusname = name;
}

/* reference lib/body.c and genetics.c 
 * resistance to damage types (/lib/lib/body.c) in
 * varargs int eventReceiveDamage(mixed agent, int type,
 *      int x, int internal, mixed limbs)
 * resistance to damage (x) is defined by level: 
 * low - damage x = (3*x)/4
 * medium - damage x /= 2
 * high - damage x /= 4
 * immune - damage x = 0
 * types are defined in /lib/include/damage_types.h
 * -lash (ccoker)
 */

varargs string SetResistance(int type, string level){
    brt = type;
    brl = level;    
}

mixed CanGet(object who){ return 0; }
mixed CanGive(object who){ return 0; }
mixed CanSell(object who){ return 0; }
mixed CanDrop(object who){ return 0; }
mixed CanPut(object who){ return 0; }
