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
#include <terrain_types.h>

inherit LIB_ROOM;

static void create() {
    room::create();

    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("Main Street");
    SetLong("  You are at the end of the main street of Midgaard. South of here is the\n"+
        "entrance to the Guild of Magic Users. The street continues east towards the\n"+
        "market square. The magic shop is to the north and to the west is the city\n"+
        "gate.");
    SetItems( ([
        "north" : "You see the magic shop.",
        "east" : "You see the main street.",
        "south" : " see the entrance to the Guild of Magic Users.",
        "west" : "You see the city gate.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3062_fido" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3033",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3013",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3017",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3040",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Street, Of zone : 1. V-Number : 3012, R-number : 18
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are at the end of the main street of Midgaard.  South of here is the
entrance to the Guild of Magic Users.  The street continues east towards the
market square.  The magic shop is to the north and to the west is the city
gate.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the magic shop.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3033

Direction east . Keyword : (null)
Description:
  You see the main street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3013

Direction south . Keyword : (null)
Description:
  You see the entrance to the Guild of Magic Users.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3017

Direction west . Keyword : (null)
Description:
  You see the city gate.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3040
*/
