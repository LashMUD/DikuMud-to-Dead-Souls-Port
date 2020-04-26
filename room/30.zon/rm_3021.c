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
    SetShort("Entrance Hall to the Guild of Swordsmen");
    SetLong(" The entrance hall to the Guild of Swordsmen. A place where one has to be\n"+
        "careful not to say something wrong (or right). To the east is the bar and to\n"+
        "the north is the main street.");
    SetItems( ([
        "north" : "You see the main street.",
        "east" : "You see the swordsmen's bar, many noises comes from there.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3027_knight_guard" : 1,
        "/domains/diku-alfa/room/30.zon/npc/3060_cityguard" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3016",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3022",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Entrance Hall to the Guild of Swordsmen, Of zone : 1. V-Number : 3021, R-number : 27
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   The entrace hall to the Guild of Swordsmen.  A place where one has to be
careful not to say something wrong (or right).  To the east is the bar and to
the north is the main street.

Extra description keywords(s): None
------- Chars present -------
fido dog(MOB)
knight(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the main street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3016

Direction east . Keyword : (null)
Description:
  You see the swordsmen's bar, many noises comes from there.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3022
*/
