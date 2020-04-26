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
    SetShort("A Gravel Road on the Graveyard");
    SetLong(" You are on a well-kept gravel road that leads north-south through the\n"+
        "graveyard. On both sides of the road grow dark evergreen trees.");
    SetItems( ([
        "north" : "The gravel road continues northwards.",
        "south" : "The gravel road continues southwards to an open space before a small\n"+
            "building.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/34.zon/rm_3402",
        "south" : "/domains/diku-alfa/room/34.zon/rm_3404",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: A Gravel Road on the Graveyard, Of zone : 5. V-Number : 3403, R-number : 120
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
  You are on a well-kept gravel road that leads north-south through the
graveyard.  On both sides of the road grow dark evergreen trees.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The gravel road continues northwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3402

Direction south . Keyword : (null)
Description:
  The gravel road continues southwards to an open space before a small
building.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3404
*/
