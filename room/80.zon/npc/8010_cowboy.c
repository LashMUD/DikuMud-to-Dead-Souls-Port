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

    SetKeyName("cowboy");
    SetId(({"cowboy", "dude"}));
    SetAdjectives(({"", ""}));
    SetShort("the cowboy");
    SetLong("A hard-eyed cowboy is here, going about his business.");
    SetRace("human"); //check for appropriate race
    SetClass("fighter");
    SetLevel(5);
    SetCanBite(0); 
    SetGender("male");
    AddCurrency("gold" , 40);
    SetMorality(1000);
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/obj/8121_satchel_leather" : 1,
        "/domains/diku-alfa/room/80.zon/weap/8520_whip_electrowhip" : "wield whip",
        ] ));
    SetWander(5);  //if mob is NOT a SENTINEL
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
MALE MOB - Name : cowboy [R-Number148], In room [3001] V-Number [8010]
Short description: the cowboy
Title: None
Long description: A hard-eyed cowboy is here, going about his business.
Monster Class: Normal   Level [5] Alignment[400]
Birth : [1313968853]secs, Logon[1313968853]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+5]  Hit p.:[61/61+5]  Move p.:[50/50+5]
AC:[60/10], Coins: [40], Exp: [2000], Hitroll: [10], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [15] [15] [15] [15] [15]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
