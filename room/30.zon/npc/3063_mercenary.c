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
    
    SetKeyName("the Mercenary");
    SetId(({"mercenary"}));
    SetAdjectives(({"non-player", "non player"}));
    SetShort("a Mercenary");
    SetLong("Waiting for a job - he looks pretty mean.");
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/weap/3021_smallsword" : "wield sword",
        "/domains/diku-alfa/room/30.zon/armor/3072_jerkin_scalemail" : "wear jerkin",
        "/domains/diku-alfa/room/30.zon/armor/3073_coif_scalemail" : "wear coif",
        "/domains/diku-alfa/room/30.zon/armor/3077_sleeves_scalemail" : "wear sleeves",
        "/domains/diku-alfa/room/30.zon/armor/3074_skirt_scalemail" : "wear skirt",
        "/domains/diku-alfa/room/30.zon/armor/3072_jerkin_scalemail" : "wear jerkin",
        "/domains/diku-alfa/room/30.zon/armor/3082_boots_ironbound" : "wear boots",
        ] ));
    SetRace("human");
    SetClass("fighter");
    SetLevel(14);
    SetCanBite(0);
    SetMelee(1);
    SetGender("male");
    SetMorality(-500);
    AddCurrency("gold", 47);
    SetWander(5);
    SetAction(10, ( :Scavenge: ));
    SetProperty("STAY_ZONE",1);
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
            }
        }
    }
}

/* Extra Information Original Diku Output
MALE MOB - Name : mercenary [R-Number30], In room [3001] V-Number [3063]
Short description: the Mercenary
Title: None
Long description: A Mercenary waiting for a job.
Monster Class: Normal   Level [5] Alignment[-200]
Birth : [1317253924]secs, Logon [1317253924]secs, Played [0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+5]  Hit p.:[66/66+5]  Move p.:[50/50+5]
AC:[50/10], Coins: [47], Exp: [900], Hitroll: [4], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC , Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [15] [15] [15] [15] [15]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
