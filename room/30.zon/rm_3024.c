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
    SetShort("Eastern End of Poor Alley");
    SetLong(" You are at the poor alley. South of here is the Grubby Inn and to the\n"+
        "east you see common square. The alley continues further west.");
    SetItems( ([
        "east" : "You see the common square",
        "south" : "You see the Inn.",
        "west" : "You see the poor alley.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3062_fido" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/30.zon/rm_3025",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3048",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3044",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Eastern End of Poor Alley, Of zone : 1. V-Number : 3024, R-number : 30
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are at the poor alley.  South of here is the Grubby Inn and to the
east you see common square.  The alley continues further west.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see the common square.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3025

Direction south . Keyword : (null)
Description:
  You see the Inn.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3048

Direction west . Keyword : (null)
Description:
  You see the poor alley.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3044
*/
