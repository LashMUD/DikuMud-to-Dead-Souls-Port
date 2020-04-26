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

    SetKeyName("the junior mindflayer");
    SetId(({"junior", "mind", "mindflayer"}));
    SetAdjectives(({"", ""}));
    SetShort("The Junior Mindflayer");
    SetLong("The Junior Mindflayer is here, watching you carefully from the corner.");
    
    SetRace("troll"); //possible new'mindflayer' race
    SetClass("fighter");
    SetLevel(14);
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/weap/7202_mace_small" : "wield mace",
        ] ));
    SetGender("neuter");
    AddCurrency("gold" , 200);
    SetMorality(-875);
    SetWander(5);
    SetAction(10, ( :Scavenge: ));
    SetWimpy(30);
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
NEUTRAL-SEX MOB - Name : junior mind mindflayer [R-Number139], In room [3001] V-Number [7202]
Short description: The junior mindflayer
Title: None
Long description: The junior mindflayer is here, watching you carefully from the
corner.
Monster Class: Normal   Level [6] Alignment[-350]
Birth : [1313932551]secs, Logon[1313932551]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+6]  Hit p.:[81/81+6]  Move p.:[50/50+6]
AC:[40/10], Coins: [200], Exp: [1500], Hitroll: [5], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC WIMPY, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [14] [14] [14] [14] [14]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/
