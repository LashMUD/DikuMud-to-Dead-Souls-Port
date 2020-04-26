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

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Entrance Hall to the Guild of Thieves");
    SetLong(" The entrace hall to the thieves' and assassins' guild. A place where you\n"+
        "can lose both your life and your money, if you are not careful. To the north\n"+
        "is the dark alley and to the east is the thieves' bar.");
    SetItems( ([
        "north" : "You see the dark alley.",
        "east" : "You see the thieves bar, where everything disappears.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3026_assassin_guard" : 1,
        "/domains/diku-alfa/room/30.zon/npc/3060_cityguard" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3026",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3028",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Entrance Hall to the Guild of Thieves, Of zone : 1. V-Number : 3027, R-number : 33
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   The entrace hall to the thieves' and assassins' guild.  A place where you
can lose both your life and your money, if you are not careful.  To the north
is the dark alley and to the east is the thieves' bar.

Extra description keywords(s): None
------- Chars present -------
cityguard guard(MOB)
assassin(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the alley.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3026

Direction east . Keyword : (null)
Description:
  You see the thieves bar, where everything disappears.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3028
*/
