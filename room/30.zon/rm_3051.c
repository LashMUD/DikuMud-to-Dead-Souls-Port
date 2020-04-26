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
    SetShort("On the Bridge");
    SetLong(" You are standing on the stone bridge crosses the river. The bridge is\n"+
        "built out from the western city wall and the river flows west through an\n"+
        "opening in the wall ten feet below the bridge.");
    SetItems( ([
        "north" : "You see the road.",
        "south" : "You see the Concourse.",
        "bridge" : "It is built from large grey rocks that have been fastened to each other with\n"+
                   "some kind of mortar, just like the wall.",
        "opening" : "You cannot really see it from here as it is somewhere beneath your feet.",
        ({ "wall", "walls" }) : "It is built from large grey rocks that have been fastened to each other with\n"+
                                "some kind of mortar. It is far too high to climb.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3047",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3100",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: On the Bridge, Of zone : 1. V-Number : 3051, R-number : 53
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are standing on the stone bridge crosses the river.  The bridge is
built out from the western city wall and the river flows west through an
opening in the wall ten feet below the bridge.

Extra description keywords(s): 
wall
opening
bridge

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the road.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3047

Direction south . Keyword : (null)
Description:
  You see the Concourse.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3100
*/
