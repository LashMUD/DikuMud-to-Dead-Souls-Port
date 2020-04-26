// Based on Diku MUD Alfa.  Program and Concept created by
// Sebastian Hammer, Michael Seifert, Hans Henrik Staerfeldt,
// Tom Madsen, and Katja Nyboe.
// http://www.dikumud.com
//
// Modified by Lash (Christopher Coker) for use with:
//
// The Dead Souls Mud Library version 2
// developed by Cratylus
// http://www.dead-souls.net

#include <lib.h>
#include <position.h>
#include <damage_types.h>

inherit LIB_SENTIENT;

void CheckNPC();
int GasBreath(object victim);

static void create() {
    sentient::create();

    SetKeyName("green bat");
    SetId( ({"green bat", "bat", "green"}) );
    SetAdjectives(({"non-player","evil", "green"}));
    SetShort("a green bat");
    SetLong("It looks poisonous.");
    SetPosition(POSITION_FLYING);
    SetRace("bat");
    SetLevel(7);
    SetMelee(1);
    SetGender("neuter");
    SetMorality(-250);
    SetEncounter( (:CheckNPC:) ); //Aggressive
    SetCombatAction(25, ( :GasBreath: ));
}

void init(){
    ::init();
}

/*Do not attack other NPC's*/
void CheckNPC(object ob){
 
 object env=environment(this_object());
 if(ob && !inherits(LIB_NPC, ob)){
         eventForce("kill " +ob->GetKeyName());
 }
}

int GasBreath(object victim){

    object env = environment(this_object());
    object *target = filter(get_livings(env), (:livings($1) && $1 !=this_object():));
    int dam, s_throw, save;
            
    if(!target) return 0;
    if(!env) return 0;
    
    if(env && target){ 
         
        tell_room(env, "\n"+capitalize(this_object()->GetShort())+" breathes %^BOLD%^%^GREEN%^%^gas.%^RESET%^\n");

        if(this_object()->GetHealthPoints() >=10)
            dam = this_object()->GetHealthPoints()/10;
        else
            dam = 2;

        foreach(victim in target){
            tell_room(env, "\n"+victim->GetShort()+" is a victim.\n");
            save = victim->GetMagicResistance();
            s_throw = random(99)+1;
                if(s_throw <= save){
                    tell_room(env, "\n"+capitalize(victim->GetShort())+" partially resists the gas attack!\n", ({ victim }));
                    tell_object(victim, "\nYou partially resist the gas attack!\n");
                    dam = dam/2;
                    victim->eventTrainSkill("magic defense",save,s_throw,1);
                }
            victim->eventReceiveDamage(this_object(), MAGIC | GAS, dam, 1);
            return 1;
        }
    }
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : bat green [R-Number78], In room [3001] V-Number [4152]
Short description: the green bat
Title: None
Long description: A green bat is here.
Monster Class: Normal   Level [7] Alignment[-100]
Birth : [1316472526]secs, Logon[1316472526]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+7]  Hit p.:[79/79+7]  Move p.:[50/50+7]
AC:[40/10], Coins: [0], Exp: [2200], Hitroll: [5], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC SENTINEL ISNPC AGGRESSIVE, Timer [0] 
Mobile Special procedure : Exists
NPC Bare Hand Damage 1d7.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [13] [13] [13] [13] [13]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/

 
