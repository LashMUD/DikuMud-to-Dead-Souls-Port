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
   
    SetKeyName("ofcal citizen");
    SetId(({"man", "citizen", "male"}));
    SetAdjectives(({"", ""}));
    SetShort("the citizen");
    SetLong("There is a citizen of Ofcol here glaring at you.. stranger!");
    SetCanBite(0);
    SetInventory( ([" " : " "] ));
    SetRace("human");
    SetClass("fighter");
    SetLevel(5);
    SetMorality(0);
    AddCurrency("gold" , 200);
    SetGender("male");
    SetWander(5);
    SetAction(10, ( :Scavenge: ));
    SetProperty("STAY_ZONE", 1);
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
MALE MOB - Name : citizen [R-Number90], In room [5031] V-Number [5003]
Short description: the citizen
Title: None
Long description: There is a citizen of Ofcol here glaring at you.. stranger!
Monster Class: Normal   Level [5] Alignment[0]
Birth : [1313889333]secs, Logon[1313889333]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+5]  Hit p.:[62/62+5]  Move p.:[50/50+5]
AC:[50/10], Coins: [200], Exp: [2800], Hitroll: [4], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [15] [15] [15] [15] [15]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/


