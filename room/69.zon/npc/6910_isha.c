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

static void create(){
    sentient::create();

    SetKeyName("isha");
    SetId(({"isha", "elf", "dark elf", "dark"}));
    SetAdjectives(({"", ""}));
    SetShort("Isha the Dark Elf");
    SetLong("Isha the Dark Elf is here, observing you silently.");
    SetRace("elf"); //possible new race 'dark elf'
    SetClass("fighter");
    SetLevel(20);
    SetCanBite(0);
    SetInventory( ([
        "/domains/diku-alfa/room/69.zon/armor/6910_shirt_dragonscale" : "wear shirt",
        "/domains/diku-alfa/room/69.zon/armor/6911_skirt_dragonscale" : "wear skirt",
        "/domains/diku-alfa/room/69.zon/armor/6912_cloak_black" : "wear cloak",
        "/domains/diku-alfa/room/69.zon/armor/6913_belt_silver" : "wear belt",
        "/domains/diku-alfa/room/69.zon/weap/6914_sword_slender" : "wield sword",
        ] ));
    SetMorality(-2500);
    SetWander(5);  //if mob is NOT a SENTINEL
    AddCurrency("gold" , 5000);
    SetGender("female");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
FEMALE MOB - Name : isha elf [R-Number114], In room [5031] V-Number [6910]
Short description: Isha the Dark Elf
Title: None
Long description: Isha the Dark Elf is here, observing you silently.
Monster Class: Normal   Level [20] Alignment[-1000]
Birth : [1313913450]secs, Logon[1313913450]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+20]  Hit p.:[257/257+20]  Move p.:[50/50+20]
AC:[0/10], Coins: [5000], Exp: [40000], Hitroll: [19], Damroll: [4]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC ISNPC, Timer [0] 
Mobile Special procedure : Exists
NPC Bare Hand Damage 3d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE SNEAK 
*/
