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
    SetLong("  You are at Emerald Avenue which continues north and south. To the west is\n"+
        "the park entrance and to the east is the not very big Town Hall of Midgaard.");
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3132",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3137",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3119",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3116",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Emerald Avenue, Of zone : 2. V-Number : 3117, R-number : 75
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are at Emerald Avenue which continues north and south.  To the west is
the park entrance and to the east is the not very big Town Hall of Midgaard.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3132

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3137

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3119

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3116
*/
