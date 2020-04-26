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
    SetShort("Alley at Levee");
    SetLong(" You are standing in the alley which continues east and west. South of\n"+
        "here you see the levee.");
    SetItems( ([
        "east" : "The alley leads east.",
        "south" : "You see the levee.",
        "west" : "The alley leads west.",
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/30.zon/rm_3046",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3049",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3026",
        "north" : "/domains/diku-alfa/room/30.zon/rm_3031"
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Alley at Levee, Of zone : 1. V-Number : 3045, R-number : 47
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are standing in the alley which continues east and west.  South of
here you see the levee.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The alley leads east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3046

Direction south . Keyword : (null)
Description:
  You see the levee.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3049

Direction west . Keyword : (null)
Description:
  The alley leads west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3026
*/
