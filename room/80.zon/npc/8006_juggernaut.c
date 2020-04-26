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

void Scavenge();

static void create(){
    sentient::create();

    SetKeyName("juggernaut");
    SetId(({"", ""}));
    SetAdjectives(({"", ""}));
    SetShort("the Juggernaut");
    SetLong("A Juggernaut a working its way methodically through this area.");
    SetRace("golem"); //check for appropriate race
    SetLevel(8);
    SetMelee(1);
    SetGender("neuter");
    AddCurrency("gold" , 100);
    SetMorality(1000);
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
    SetAction(10, ( :Scavenge: ));
}

void init(){
    ::init();
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
NEUTRAL-SEX MOB - Name : juggernaut [R-Number146], In room [3001] V-Number [8006]
Short description: the Juggernaut
Title: None
Long description: A Juggernaut a working its way methodically through this area.
Monster Class: Normal   Level [8] Alignment[400]
Birth : [1313968760]secs, Logon[1313968760]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+8]  Hit p.:[152/152+8]  Move p.:[50/50+8]
AC:[0/10], Coins: [100], Exp: [10000], Hitroll: [8], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SCAVENGER ISNPC NICE-THIEF STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d5.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [12] [12] [12] [12] [12]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/

