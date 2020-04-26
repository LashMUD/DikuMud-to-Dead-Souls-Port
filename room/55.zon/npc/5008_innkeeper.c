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

static void create(){
    vendor::create();

    SetKeyName("innkeeper");
    SetId(({"vendor", "keeper", "innkeeper", "owner"}));
    SetAdjectives(({"", ""}));
    SetShort("the Innkeeper");
    SetLong("An Innkeeper is here waiting for your order.");
    SetCanBite(0); 
    SetRace("human"); 
    SetClass("fighter");
    SetLevel(23);
    SetGender("male");
    SetMorality(-250);
    AddCurrency("gold" , 100);
    SetSkill("bargaining", 1);
    SetLocalCurrency("gold");
    SetStorageRoom("/domains/diku-alfa/room/55.zon/rm_5556-2");
    SetMaxItems(300);
    SetLanguage("common", 100);
    SetDefaultLanguage("common");
    SetProperty("no bump", 1);
    SetAttackable(0);
    SetVendorType(VT_DRINK);
    SetAttackable(0);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
MALE MOB - Name : keeper innkeeper [R-Number95], In room [3001] V-Number [5008]
Short description: the Innkeeper
Title: None
Long description: An Innkeeper is here waiting for your order.
Monster Class: Normal   Level [23] Alignment[-100]
Birth : [1313969469]secs, Logon[1313969469]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+23]  Hit p.:[30001/30001+23]  Move p.:[50/50+23]
AC:[0/10], Coins: [100], Exp: [80000], Hitroll: [20], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC SENTINEL ISNPC, Timer [0] 
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

