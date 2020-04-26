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

    SetKeyName("the kobold");
    SetId( ({"kobold", "ugly"}) );
    SetAdjectives(({"non-player", "non player", "ugly"}));
    SetShort("a ugly kobold");
    SetLong("It looks ugly.");
    SetRace("kobold");
    SetClass("fighter");
    SetLevel(5);
    SetMelee(1);
    SetGender("male");
    SetMorality(-250);
    AddCurrency("gold", 50);
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
NEUTRAL-SEX MOB - Name : kobold [R-Number58], In room [3005] V-Number [4003]
Short description: the kobold
Title: None
Long description: A ugly kobold.
Monster Class: Normal   Level [4] Alignment[-100]
Birth : [1316449538]secs, Logon[1316449538]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+4]  Hit p.:[46/46+4]  Move p.:[50/50+4]
AC:[50/10], Coins: [50], Exp: [1000], Hitroll: [4], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC STAY-ZONE ,Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [16] [16] [16] [16] [16]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
