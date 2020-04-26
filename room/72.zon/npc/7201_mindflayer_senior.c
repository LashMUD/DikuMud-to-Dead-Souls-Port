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

    SetKeyName("the senior mindflayer");
    SetId(({"senior", "mind", "mindflayer"}));
    SetAdjectives(({"", ""}));
    SetShort("The Senior Mindflayer");
    SetLong("The Senior mindflayer walks around here, looking for something useful.");
    SetRace("troll"); //possible new 'mindflayer' race
    SetClass("fighter");
    SetLevel(16);
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/weap/7201_mace_large" : "wield mace",
        ] ));
    SetGender("neuter");
    AddCurrency("gold" , 400);
    SetMorality(-1500);
    SetWander(5);
    SetAction(10, ( :Scavenge: ));
    //need Mindflayer functions
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
NEUTRAL-SEX MOB - Name : senior mind mindflayer [R-Number138], In room [3001] V-Number [7201]
Short description: The senior mindflayer
Title: None
Long description: The senior mindflayer walks around here, looking for something
useful.
Monster Class: Normal   Level [8] Alignment[-600]
Birth : [1313932359]secs, Logon[1313932359]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+8]  Hit p.:[103/103+8]  Move p.:[50/50+8]
AC:[20/10], Coins: [400], Exp: [3750], Hitroll: [7], Damroll: [3]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [12] [12] [12] [12] [12]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/

