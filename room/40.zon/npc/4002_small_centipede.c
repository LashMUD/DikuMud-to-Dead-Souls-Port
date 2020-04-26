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
#include <position.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();

    SetKeyName("the small centipede");
    SetId( ({"centipede", "small"}) );
    SetAdjectives(({"non-player", "non player", "small"}));
    SetShort("a small centipede");
    SetLong("It looks complete harmless.");
    SetRace("insect");
    SetClass("fighter");
    SetLevel(3);
    SetGender("neuter");
    SetMorality(250);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
NEUTRAL-SEX MOB - Name : centipede [R-Number57], In room [3001] V-Number [4002]
Short description: the centipede
Title: None
Long description: A small centipede.
Monster Class: Normal   Level [3] Alignment[100]
Birth : [1316449471]secs, Logon[1316449471]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+3]  Hit p.:[31/31+3]  Move p.:[50/50+3]
AC:[60/10], Coins: [0], Exp: [500], Hitroll: [0], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SENTINEL ISNPC ,Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [17] [17] [17] [17] [17]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/


