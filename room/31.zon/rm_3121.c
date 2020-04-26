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
    SetShort("Emerald Avenue");
    SetLong(" You are standing at a bend on Emerald Avenue. The road leads south and\n"+
        "east.");
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3134",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3125",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Emerald Avenue, Of zone : 2. V-Number : 3121, R-number : 79
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are standing at a bend on Emerald Avenue.  The road leads south and
east.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3134

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3125
*/
