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
    SetShort("Wall Road");
    SetLong(" You are standing on the road next to the western city wall, which\n"+
        "continues north. South of here is a bridge across the river.");
    SetItems( ([
        "north" : "You see the road.",
        "south" : "You see the bridge.",
        "wall" : "It is built from large grey rocks that have been fastened to each other with\n"+
        "some kind of mortar. It is far too high to climb.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3043",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3051",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Wall Road, Of zone : 1. V-Number : 3047, R-number : 49
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are standing on the road next to the western city wall which
continues north.  South of here is a bridge across the river.

Extra description keywords(s): 
wall

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the road.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3043

Direction south . Keyword : (null)
Description:
  You see the bridge.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3051
*/
