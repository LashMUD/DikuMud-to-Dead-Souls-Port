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
    SetLong(" You are walking next to the western city wall. The road continues further\n"+
        "south and the city gate is just north of here.");
    SetItems( ([
        "north" : "You see the city gate.",
        "south" : "The road continues further south.",
        "wall" : "It is built from large grey rocks that have been fastened to each other with\n"+
                 "some kind of mortar.  It is far too high to climb.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3040",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3043",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Wall Road, Of zone : 1. V-Number : 3042, R-number : 44
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are walking next to the western city wall.  The road continues further
south and the city gate is just north of here.

Extra description keywords(s): 
wall

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the city gate.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3040

Direction south . Keyword : (null)
Description:
  The road continues further south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3043
*/
