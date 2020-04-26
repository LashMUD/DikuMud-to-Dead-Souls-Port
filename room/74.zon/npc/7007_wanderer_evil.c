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

    SetKeyName("evil wanderer");
    SetId(({"evil", "wanderer", "man"}));
    SetAdjectives(({"", ""}));
    SetShort("The Evil Wanderer");
    SetLong("The Evil Wanderer stares at you.");
    SetRace("human");
    SetClass("fighter");
    SetLevel(25);
    SetCanBite(0);
    SetWimpy(30);
    SetGender("male");
    AddCurrency("gold" , 300);
    SetMorality(-2500);
    SetWander(5);
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
MALE MOB - Name : wanderer [R-Number123], In room [7424] V-Number [7007]
Short description: The evil wanderer
Title: None
Long description: The evil wanderer stares at you
Monster Class: Normal   Level [10] Alignment[-1000]
Birth : [1313965304]secs, Logon[1313965304]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [13] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[100/100+10]  Hit p.:[114/114+10]  Move p.:[50/50+10]
AC:[20/10], Coins: [300], Exp: [9500], Hitroll: [9], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC WIMPY, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [10] [10] [10] [10] [10]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
