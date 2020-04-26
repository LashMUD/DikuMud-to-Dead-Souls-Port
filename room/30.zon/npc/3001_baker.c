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

    SetKeyName("the Baker");
    SetAdjectives( ({"baker", "cook"}) );
    SetId( ({ "baker", "vendor", "shopkeep", "shopkeeper", "owner", "keeper" }) );
    SetShort("a Baker");
    SetLong("A fat, nice looking baker is here looking at you calmly while wiping flour\n" +
            "from his face with one hand. He has many scars on his body.");
    SetCanBite(0);
    SetRace("human");
    SetClass("fighter");
    SetLevel(23);
    SetSkill("bargaining", 1);
    SetGender("male");
    SetMorality(2250);
    AddCurrency("gold", 2000);
    SetLocalCurrency("gold");
    SetStorageRoom("/domains/diku-alfa/room/30.zon/rm_3009-2");
    SetMaxItems(300);
    SetVendorType(VT_FOOD);
    SetProperty("no bump", 1);
    SetAttackable(0);
    SetLanguage("common", 100);
    SetDefaultLanguage("common");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
MALE MOB - Name : baker [R-Number2], In room [3001]
V-Number [3001]
Short description: the Baker
Title: None
Long description: The Baker looks at you calmly, wiping flour from his face with
one hand.

Monster Class: Normal   Level [23] Alignment[900]
Birth : [1313912134]secs, Logon[1313912134]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+23]  Hit p.:[30001/30001+23]  Move p.:[50/50+23]
AC:[20/10], Coins: [2000], Exp: [80000], Hitroll: [18], Damroll: [12]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SENTINEL ISNPC ,Timer [0] 

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

