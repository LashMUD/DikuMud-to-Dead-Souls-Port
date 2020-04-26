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
    SetShort("Eastern end of Alley");
    SetLong(" You are standing at the eastern end of the alley, the city wall is just\n"+
        "east, blocking any further movement. An old three-storey warehouse is\n"+
        "directly south of here.");
    SetItems( ([
        "south" : "You see the warehouse.",
        "west" : "You see the alley.",
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/30.zon/rm_3050",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3045",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Eastern end of Alley, Of zone : 1. V-Number : 3046, R-number : 48
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are standing at the eastern end of the alley, the city wall is just
east, blocking any further movement.  An old three-storey warehouse is
directly south of here.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see the warehouse.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3050

Direction west . Keyword : (null)
Description:
  You see the alley.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3045
*/
