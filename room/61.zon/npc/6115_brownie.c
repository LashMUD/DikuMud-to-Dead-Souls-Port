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

    SetKeyName("shargugh");
    SetId(({"brownie", "Shargugh"}));
    SetAdjectives(({"", ""}));
    SetShort("Shargugh");
    SetLong("Shargugh the Forest Brownie is here, grinning broadly at you.");
    SetRace("gnome"); //possible new race 'brownie'
    SetClass("fighter");
    SetLevel(10);
    SetCanBite(0);
    SetInventory( ([
        "/domains/diku-alfa/room/61.zon/armor/6114_ring_iron" : 1,
        ] ));
    SetMorality(2500);
    AddCurrency("gold" , 1000);
    SetGender("male");
    SetWander(5);
    SetWimpy(30);
    SetInvis(1);
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
MALE MOB - Name : shargugh brownie [R-Number112], In room [3001] V-Number [6115]
Short description: Shargugh
Title: None
Long description: Shargugh the Forest Brownie is here, grinning broadly at you.
Monster Class: Normal   Level [10] Alignment[1000]
Birth : [1313905853]secs, Logon[1313905853]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[20/100+10]  Hit p.:[58/58+10]  Move p.:[50/50+10]
AC:[-100/10], Coins: [1000], Exp: [9000], Hitroll: [19], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC NICE-THIEF WIMPY, Timer[0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [10] [10] [10] [10] [10]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: INVISIBLE DETECT-INVISIBLE SNEAK 
*/
