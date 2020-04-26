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
    
    SetKeyName("Grand Knight of Paladins");
    SetId(({"knight", "paladin", "grand knight"}));
    SetAdjectives(({"", ""}));
    SetShort("the Grand Knight of Paladins");
    SetLong("The Grand Knight is standing here, waiting for someone to help.");
    SetRace("human");
    SetClass("fighter");
    SetLevel(100);
    SetInventory( ([
        "/domains/diku-alfa/room/79.zon/weap/7212_sword_bastard" : "wield sword",
        "/domains/diku-alfa/room/79.zon/armor/7217_plate_breast" : "wear plate",
        "/domains/diku-alfa/room/79.zon/armor/7218_plates_leg" : "wear leg plates",
        "/domains/diku-alfa/room/79.zon/armor/7219_gloves" : "wear gloves",
        "/domains/diku-alfa/room/79.zon/armor/7220_helmet" : "wear helmet",
        "/domains/diku-alfa/room/79.zon/armor/7221_shield" : "wear shield",
        "/domains/diku-alfa/room/79.zon/armor/7222_boots" : "wear boots",
        "/domains/diku-alfa/room/79.zon/armor/7223_plates_arm" : "wear arm plates",
        "/domains/diku-alfa/room/79.zon/armor/7224_cloak_white" : "wear cloak",
        "/domains/diku-alfa/room/79.zon/obj/key_7911" : 1,
        ] ));
    SetCanBite(0); 
    SetGender("male");
    SetStat("strength", 100);
    SetMorality(2500);
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
MALE MOB - Name : grand knight paladin [R-Number125], In room [5031] V-Number [7009]
Short description: The Grand Knight of Paladins
Title: None
Long description: The Grand Knight is standing here, waiting for someone to
help.
Monster Class: Normal   Level [29] Alignment[1000]
Birth : [1313913898]secs, Logon[1313913898]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+29]  Hit p.:[813/813+29]  Move p.:[50/50+29]
AC:[-90/10], Coins: [0], Exp: [500000], Hitroll: [20], Damroll: [14]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE SANCTUARY 
*/
