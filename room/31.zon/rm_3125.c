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
    SetLong("  You are on Emerald Avenue which continues north. The Concourse is south\n"+
        "of here.");
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3121",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3128",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Emerald Avenue, Of zone : 2. V-Number : 3125, R-number : 83
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are on Emerald Avenue which continues north.  The Concourse is south
of here.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3121

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3128
*/
