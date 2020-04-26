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

static void create() {
    sentient::create();

    SetKeyName("centipede");
    SetId( ({"centipede", "white"}) );
    SetAdjectives(({"non-player", "non player", "white"}));
    SetShort("a white centipede");
    SetLong("The centipede doesn't really seem to notice you.");
    SetRace("insect");
    SetClass("fighter");
    SetLevel(5);
    SetGender("neuter");
    SetMorality(-250);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
NEUTRAL-SEX MOB - Name : centipede [R-Number65], In room [3001] V-Number [4054]
Short description: the centipede
Title: None
Long description: A white centipede is here.
Monster Class: Normal   Level [5] Alignment[-100]
Birth : [1316450172]secs, Logon[1316450172]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+5]  Hit p.:[59/59+5]  Move p.:[50/50+5]
AC:[50/10], Coins: [0], Exp: [1300], Hitroll: [3], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SENTINEL ISNPC ,Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d7.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [15] [15] [15] [15] [15]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
