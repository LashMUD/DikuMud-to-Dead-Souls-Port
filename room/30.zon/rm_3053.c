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
    SetShort("Outside the East Gate of Midgaard");
    SetLong(" You are by two small towers that have been built into the city wall and\n"+
        "connected with a footbridge across the heavy wooden gate. To the east the\n"+
        "plains stretch out in the distance. To the north a small dusty trail follow\n"+
        "the city wall.");
    SetItems( ([
        "north" : "The trail continues around the City of Midgaard.",
        "east" : "You see the plains.",
        "west" : "You see the city gate.",
        ({ "bridge", "footbridge" }) :
            "It is too high up to reach but it looks as if one could walk across it\n"+
            "from one tower to the other.",
        ({ "tower", "towers" }) :
            "Both of the towers are built from large grey rocks that have been fastened to\n"+
            "each other with some kind of mortar, just like the city wall.",
        ({ "wall", "walls"}) :
            "It is built from large grey rocks that have been fastened to each other with\n"+
            "some kind of mortar. It is far too high to climb.",
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/30.zon/rm_3041",
        "north" : "/domains/diku-alfa/room/39.zon/rm_3908",
        "east" : "/domains/diku-alfa/room/35.zon/rm_3503",
        ]) );
    SetDoor("west", "/domains/diku-alfa/room/doors/3041_3053");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Outside the East Gate of Midgaard, Of zone : 1. V-Number : 3053, R-number : 55
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are by two small towers that have been built into the city wall and
connected with a footbridge across the heavy wooden gate.  To the east the
plains stretch out in the distance. To the north a small dusty trail follow
the city wall.

Extra description keywords(s): 
wall
tower towers
gate
bridge footbridge

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The trail continues around the City of Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3908

Direction east . Keyword : (null)
Description:
  You see the plains.Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3503

Direction west . Keyword : gate
Description:
  You see the city gate.
Exit flag: IS-DOOR  
Key no: 3133
To room (V-Number): 3041
*/
