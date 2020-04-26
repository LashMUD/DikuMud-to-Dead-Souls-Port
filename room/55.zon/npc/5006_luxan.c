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
#include <vendor_types.h>

inherit LIB_VENDOR;

void Scavenge();

static void create() {
    vendor::create();

    SetKeyName("luxan");
    SetId(({"vendor", "Luxan", "shopkeeper", "shopkeep", "owner"}));
    SetAdjectives(({"", ""}));
    SetShort("Luxan");
    SetLong("Luxan the Shopkeeper is here, eager to sell you anything.");
    SetCanBite(0); 
    SetRace("human"); 
    SetClass("fighter");
    SetLevel(23);
    SetSkill("bargaining", 1);
    SetMorality(1000);
    AddCurrency("gold" , 8000);
    SetLocalCurrency("gold");
    SetGender("male");
    SetStorageRoom("/domains/diku-alfa/room/55.zon/rm_5555-2");
    SetMaxItems(300);
    SetProperty("no bump", 1);
    SetAttackable(0);
    SetVendorType(VT_FOOD);
    SetLanguage("common", 100);
    SetDefaultLanguage("common");
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
MALE MOB - Name : luxan shopkeeper [R-Number93], In room [5031] V-Number [5006]
Short description: Luxan
Title: None
Long description: Luxan the Shopkeeper is here, eager to sell you anything.
Monster Class: Normal   Level [23] Alignment[400]
Birth : [1313889509]secs, Logon[1313889509]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+23]  Hit p.:[30001/30001+23]  Move p.:[50/50+23]
AC:[0/10], Coins: [8000], Exp: [80000], Hitroll: [20], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SPEC SENTINEL SCAVENGER ISNPC ,Timer [0]
Mobile Special procedure : Exists
NPC Bare Hand Damage 2d10.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/

