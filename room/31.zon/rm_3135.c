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
    SetShort("Park Road");
    SetLong("  You are at a bend on Park Road. To the north the road goes on and to the\n"+
        "east is the Road Crossing. To the south, the ancient cliffs rise from deep\n"+
        "under the ground, forming a wall.");
    SetItems( ([
        ({"portal", "door", "wall", "portal wall", "cliffs"}) : 
            "You are surprised to find the outlines of a portal in the wall, although it\n"+
            "is hardly perceivable.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3118",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3120",
        "south" : "/domains/diku-alfa/room/33.zon/rm_3303",
        ]) );
    SetDoor("south", "/domains/diku-alfa/room/doors/3135_3303");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Park Road, Of zone : 2. V-Number : 3135, R-number : 93
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are at a bend on Park Road.  To the north the road goes on and to the
east is the Road Crossing.  To the south, the ancient cliffs rise from deep
under the ground, forming a wall.

Extra description keywords(s): 
wall

------- Chars present -------
crier(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3118

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3120

Direction south . Keyword : portal wall
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3307
To room (V-Number): 3303
*/
