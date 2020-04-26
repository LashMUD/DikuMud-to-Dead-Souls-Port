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
    SetShort("Inside the West Gate of Midgaard");
    SetLong("  You are by two small towers that have been built into the city wall and\n"+ 
        "connected with a footbridge across the heavy wooden gate. Main Street leads\n"+ 
        "east and Wall Road leads south from here.");
    SetItems( ([
        ({ "bridge", "footbridge" }) :
            "It is too high up to reach but it looks as if one could easily walk across it\n"+
            "from one tower to the other.",
        ({ "tower" , "towers" }) :
            "Both of the towers are built from large grey rocks that have been fastened to\n"+
            "each other with some kind of mortar, just like the city wall.",
        ({ "wall", "walls" }) :
            "It is built from large grey rocks that have been fastened to each other with\n"+
            "some kind of mortar. It is far too high to climb.",
        "east" : "You see Main Street.",
        "south" : "You see the road running along the inner side of the city wall. You notice\n"+
            "that it is called Wall Road.",
        "west" : "The city gate is to the west.",     
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3067_cityguard" : 2,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/30.zon/rm_3012",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3042",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3052",
        ]) );
    SetDoor("west", "/domains/diku-alfa/room/doors/3040_3052");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Inside the West Gate of Midgaard, Of zone : 1. V-Number : 3040, R-number : 42
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are by two small towers that have been built into the city wall and
connected with a footbridge across the heavy wooden gate.  Main Street leads
east and Wall Road leads south from here.

Extra description keywords(s): 
wall
tower towers
gate
bridge footbridge

------- Chars present -------
cityguard guard(MOB)
cityguard guard(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see Main Street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3012

Direction south . Keyword : (null)
Description:
  You see the road running along the inner side of the city wall.  You notice
that it is called Wall Road.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3042

Direction west . Keyword : gate
Description:
  The city gate is to the west.
Exit flag: IS-DOOR  
Key no: 3133
To room (V-Number): 3052
*/
