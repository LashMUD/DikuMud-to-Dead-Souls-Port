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

static void create() {
    vendor::create();

    SetKeyName("filthy");
    SetAdjectives( ({"bartender"}) );
    SetId( ({"bartender", "vendor", "shopkeep", "shopkeeper", "owner"}) );
    SetShort("Filthy");
    SetLong("Filthy looks real, ehm, dirty. He likes to keep his costumers happy,\n"+
        "but do not mess with him or else he'll get upset. Otherwise he is eager to\n"+
        "to get you a special drink.");
    SetCanBite(0);
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/weap/3022_longsword" : "wield sword",
        ] ));
    SetRace("human");
    SetClass("fighter");
    SetLevel(23);
    SetSkill("bargaining", 1);
    SetGender("male");
    SetMorality(1500);
    AddCurrency("gold", 2000);
    SetLocalCurrency("gold");
    SetStorageRoom("/domains/diku-alfa/room/30.zon/rm_3048-2");
    SetMaxItems(300);
    SetVendorType(VT_DRINK);
    SetProperty("no bump", 1);
    SetAttackable(0);
    SetLanguage("common", 100);
    SetDefaultLanguage("common");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
MALE MOB - Name : filthy [R-Number26], In room [3001] V-Number [3046]
Short description: Filthy
Title: None
Long description: Filthy is standing here, eager to serve you a special drink.
Monster Class: Normal   Level [23] Alignment[600]
Birth : [1317253752]secs, Logon [1317253752]secs, Played [0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+23]  Hit p.:[30001/30001+23]  Move p.:[50/50+23]
AC:[20/10], Coins: [2000], Exp: [80000], Hitroll: [19], Damroll: [12]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL ISNPC , Timer [0]
Mobile Special procedure : Exists
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
