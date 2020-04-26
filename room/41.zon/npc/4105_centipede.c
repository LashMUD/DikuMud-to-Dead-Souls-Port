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
    SetId( ({"centipede"}) );
    SetAdjectives(({"non-player","foul","leggy", "creepy"}));
    SetShort("A small harmless centipede");
    SetLong("Well it doesn't seem to pay any attention towards you.");
    SetRace("insect");
    SetLevel(6);
    SetMelee(1);
    SetGender("neuter");
    SetMorality(750);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : snake [R-Number122], In room [7104] V-Number [7006]
Short description: The slithering snake
Title: None
Long description: The snake slithers towards you
Monster Class: Normal   Level [4] Alignment[-500]
Birth : [1316471038]secs, Logon[1316471038]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [13] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[62/100+4]  Hit p.:[46/46+4]  Move p.:[50/50+4]
AC:[70/10], Coins: [1], Exp: [1000], Hitroll: [4], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SPEC ISNPC AGGRESSIVE ,Timer [0]
Mobile Special procedure : Exists
NPC Bare Hand Damage 1d9.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [16] [16] [16] [16] [16]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
