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
    SetShort("Inside the East Gate of Midgaard");
    SetLong(" You are by two small towers that have been built into the city wall and\n"+
        "connected with a footbridge across the heavy wooden gate. Main Street leads\n"+
        "west from here.");
    SetItems( ([
        "east" : "You see the city gate.",
        "west" : "You see Main Street.",
        ({ "bridge", "footbridge" }) :
            "It is too high up to reach but it looks as if one easily could walk across it\n"+
            "from tower to tower.",
        ({ "tower", "towers" }) :
            "Both of the towers are built from large grey rocks that have been fastened to\n"+
            "each other with some kind of mortar, just like the city wall.",
        ({ "wall", "walls"}) :
            "It is built from large grey rocks that have been fastened to each other with\n"+
            "some kind of mortar. It is far too high to climb.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3067_cityguard" : 2,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/30.zon/rm_3053",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3016",
        ]) );
    SetDoor("east", "/domains/diku-alfa/room/doors/3041_3053");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Inside the East Gate of Midgaard, Of zone : 1. V-Number : 3041, R-number : 43
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are by two small towers that have been built into the city wall and
connected with a footbridge across the heavy wooden gate.  Main Street leads
west from here.

Extra description keywords(s): 
wall
tower towers
gate
bridge footbridge

------- Chars present -------
cityguard guard(MOB)
cityguard guard(MOB)
cityguard guard(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : gate
Description:
  You see the city gate.
Exit flag: IS-DOOR  
Key no: 3133
To room (V-Number): 3053

Direction west . Keyword : (null)
Description:
  You see Main Street.Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3016
*/
