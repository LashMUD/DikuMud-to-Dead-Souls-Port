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

    SetKeyName("the Drunk");
    SetId( ({"drunk", "the Drunk"}) );
    SetAdjectives(({"non-player", "non player"}));
    SetShort("a singing, happy Drunk");
    SetLong("A drunk who seems to be too happy, and to carry to much money.");
    SetRace("human");
    SetLevel(1);
    SetClass("fighter");
    SetCanBite(0);
    SetGender("male");
    SetMorality(1000);
    AddCurrency("gold", 85);
    SetWander(5);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
MALE MOB - Name : drunk [R-Number31], In room [3001] V-Number [3064]
Short description: the Drunk
Title: None
Long description: A singing, happy Drunk.
Monster Class: Normal   Level [2] Alignment[400]
Birth : [1317253971]secs, Logon [1317253971]secs, Played [0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+2]  Hit p.:[28/28+2]  Move p.:[50/50+2]
AC:[80/10], Coins: [85], Exp: [200], Hitroll: [1], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC , Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [18] [18] [18] [18] [18]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
