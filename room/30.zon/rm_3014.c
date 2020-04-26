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
    SetShort("Market Square");
    SetLong("  You are standing on the market square, the famous Square of Midgaard.\n"+
        "A large, pecualiar looking statue is standing in the middle of the square.\n"+
        "Roads lead in every direction, north to the temple square, south to the\n"+
        "common square, east and westbound is the main street.");
    SetItems( ([
        "statue" : "What you see is the Midgaard Worm, stretching around the Palace of Midgaard.",
        "north" : "You see the temple square.",
        "east" : "You see the main street.",
        "south" : "You see the common square.",
        "west" : "You see the main street.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3060_cityguard" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3005",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3015",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3025",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3013",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Market Square, Of zone : 1. V-Number : 3014, R-number : 20
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are standing on the market square, the famous Square of Midgaard.
A large, pecualiar looking statue is standing in the middle of the square.
Roads lead in every direction, north to the temple square, south to the
common square, east and westbound is the main street.

Extra description keywords(s): 
statue

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the temple square.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3005

Direction east . Keyword : (null)
Description:
  You see the main street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3015

Direction south . Keyword : (null)
Description:
  You see the common square.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3025

Direction west . Keyword : (null)
Description:
  You see the main street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3013
*/
