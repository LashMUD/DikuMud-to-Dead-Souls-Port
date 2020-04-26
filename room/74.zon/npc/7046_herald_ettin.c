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

    SetKeyName("herald \"mouse killer\" ettin");
    SetId(({"herald", "ettin"}));
    SetAdjectives(({"", ""}));
    SetShort("Herald \"Mouse Killer\" the Ettin");
    SetLong("Herald is standing here looking confused at you.");
    SetRace("giant"); //check for appropriate race
    SetLevel(75);
    SetClass("npc_melee");
    SetGender("male");
    AddCurrency("gold" , 40);
    SetMorality(500);
    SetWander(5);
    SetAction(10, ( :Scavenge: ));
    //need ettin functions
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
MALE MOB - Name : herald mouse killer ettin [R-Number136], In room [7424] V-Number [7046]
Short description: Herald 'the mouse-killer' ettin
Title: None
Long description: Herald is standing here looking confused at you.
Monster Class: Normal   Level [6] Alignment[200]
Birth : [1313965304]secs, Logon[1313965304]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [4] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[34/100+6]  Hit p.:[76/76+6]  Move p.:[50/50+6]
AC:[40/10], Coins: [40], Exp: [1500], Hitroll: [6], Damroll: [0]
Position: Resting, Fighting: Nobody
Default position: Resting, NPC flags: SCAVENGER ISNPC, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [14] [14] [14] [14] [14]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
