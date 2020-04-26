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

    SetKeyName("john the Lumberjack");
    SetId(({"John", "lumberjack"}));
    SetAdjectives(({"", ""}));
    SetShort("John the Lumberjack");
    SetLong("John the Lumberjack is here, looking for some trees to chop down.");
    SetCanBite(0);
    SetRace("human");
    SetClass("fighter");
    SetLevel(5);
    SetMorality(875);
    AddCurrency("gold" , 50);
    SetGender("male");
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
    SetInventory( ([
        "/domains/diku-alfa/room/60.zon/weap/6000_axe" : "wield axe",
        "/domains/diku-alfa/room/60.zon/armor/6001_shirt" : "wear shirt",
        "/domains/diku-alfa/room/60.zon/armor/6002_boots" : "wear boots",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
MALE MOB - Name : john lumberjack [R-Number97], In room [3001] V-Number [6000]
Short description: John the Lumberjack
Title: None
Long description: John the Lumberjack is here, looking for some trees to chop
down.
Monster Class: Normal   Level [5] Alignment[350]
Birth : [1313902110]secs, Logon[1313902110]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+5]  Hit p.:[59/59+5]  Move p.:[50/50+5]
AC:[70/10], Coins: [50], Exp: [1000], Hitroll: [5], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [15] [15] [15] [15] [15]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/

