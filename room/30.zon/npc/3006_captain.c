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
#include "/domains/diku-alfa/etc/vendor_types.h"

inherit LIB_VENDOR;

static void create() {
    vendor::create();

    SetKeyName("the Captain");
    SetAdjectives( ({"captain", "old salt"}) );
    SetId( ({"captain", "vendor", "shopkeep", "shopkeeper", "owner"}) );
    SetShort("a retired Captain");
    SetLong("This Captain has eaten more sharks than you have killed peas.");
    SetCanBite(0);
    SetRace("human");
    SetClass("fighter");    
    SetLevel(23);
    SetGender("male");
    SetSkill("bargaining", 100);
    SetMorality(2250);    
    AddCurrency("gold", 2000);
    SetLocalCurrency("gold");
    SetStorageRoom("/domains/diku-alfa/room/30.zon/rm_3049-2");
    SetMaxItems(50);
    SetVendorType(VT_BOAT);
    SetProperty("no bump", 1);
    SetAttackable(0);
    SetLanguage("common", 100);
    SetDefaultLanguage("common");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
MALE MOB - Name : captain [R-Number7], In room [3001]
V-Number [3006]
Short description: the Captain
Title: None
Long description: A retired Captain stands here, selling boats.

Monster Class: Normal   Level [23] Alignment[900]
Birth : [1313912471]secs, Logon[1313912471]secs, Played[0]secs
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

