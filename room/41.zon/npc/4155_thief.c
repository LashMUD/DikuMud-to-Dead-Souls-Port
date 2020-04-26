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

inherit LIB_SENTIENT;
//inherit "/domains/diku-alfa/etc/sentient.c";

void NpcSteal(object ob);
void Scavenge();

static void create() {
    sentient::create();

    SetKeyName("thief");
    SetId( ({"thief"}) );
    SetAdjectives(({"non-player","evil", "mean"}));
    SetShort("A sneaky thief");
    SetLong("He looks quite professional.");
    SetRace("human");
    SetClass("thief");
    SetLevel(12);
    SetCanBite(0);
    SetMelee(1);
    SetGender("male");
    SetMorality(-1000);
    SetWander(5);
    AddCurrency("gold", 2000);
    SetInvis(1);
    SetActionsMap( ([ 
                        ( :Scavenge: ) : 10,
                        ( :NpcSteal: ) : 5,
                 ]) );
    SetProperty("STAY_ZONE", 1);
    SetSkill("stealth", 50);
    SetProperty("stealth", 1);
          
    //Special Procedures - sneaking
}

void init(){
    this_object()->eventForce("stealth on");
    ::init();
}

void NpcSteal(object ob){

    object env = environment(this_object());
    object *potvictims; 
    int n1, n2, gold, level;
    level = this_object()->GetLevel();

    potvictims = filter(get_livings(env), ( :living($1) && $1 != this_object() && playerp($1):) ); 
    
    foreach(object target in potvictims){
        if(playerp(target)){
            n1 = random(level);
            if(n1 ==0){
                tell_object(target, "You notice " + capitalize(this_object()->GetKeyName()) + " trying to steal from you!");
                break;
            }
        
            if(n1 > 0){
                n2 = random(level)+1;
                gold = target->GetCurrency("gold") * n2 /100;
                this_object()->AddCurrency("gold", gold);
                target->AddCurrency("gold", -gold);
            }
        }
    }
}

void Scavenge(){

    object env = environment(this_object());
    object *item, *cost;
    int s;
    
    item = filter(all_inventory(env), (: !living($1) && (inherits(LIB_ITEM, $1) || inherits(LIB_ARMOR, $1)):) );
    cost = sort_array(item->GetBaseCost(), -1);
    s = sizeof(cost);
    if(s>0){
        foreach(object thing in item){
            if(thing->GetBaseCost() == cost[0]){
                eventForce("get "+thing->GetKeyName());
                break;
            }
        }
    }
}

/* Extra Information Original Diku Output
MALE MOB - Name : thief [R-Number81], In room [3001] V-Number [4155]
Short description: the thief
Title: None
Long description: A sneaky thief is here.
Monster Class: Normal   Level [12] Alignment[400]
Birth : [1316472865]secs, Logon[1316472865]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+12]  Hit p.:[165/165+12]  Move p.:[50/50+12]
AC:[10/10], Coins: [2000], Exp: [14000], Hitroll: [13], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC SCAVENGER ISNPC STAY-ZONE, Timer [0]
Mobile Special procedure : Exists
NPC Bare Hand Damage 2d7.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [8] [8] [8] [8] [8]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: INVISIBLE SNEAK
*/
