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

static void create() {
    sentient::create();

    SetKeyName("the hobgoblin");
    SetId( ({"hobgoblin", "small"}) );
    SetAdjectives(({"non-player", "non player", "small"}));
    SetShort("a small hobgoblin");
    SetLong("The hobgoblin looks quite lost.");
    SetRace("goblin");
    SetClass("fighter");
    SetLevel(7);
    SetGender("male");
    SetMorality(-1500);
    AddCurrency("gold", 100);
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
MALE MOB - Name : hobgoblin [R-Number63], In room [3001] V-Number [4052]
Short description: the hobgoblin
Title: None
Long description: A small hobgoblin stands here.
Monster Class: Normal   Level [6] Alignment[-300]
Birth : [1316450005]secs, Logon[1316450005]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+6]  Hit p.:[84/84+6]  Move p.:[50/50+6]
AC:[60/10], Coins: [100], Exp: [2000], Hitroll: [8], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC STAY-ZONE ,Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [14] [14] [14] [14] [14]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
