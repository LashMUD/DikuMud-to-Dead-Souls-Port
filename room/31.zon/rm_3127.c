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
    SetShort("On the Concourse");
    SetLong("  You are at the southwest corner of the city wall. The Concourse leads\n"+
        "both north and east.");
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3100",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3128",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: On the Concourse, Of zone : 2. V-Number : 3127, R-number : 85
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are at the southwest corner of the city wall.  The Concourse leads
both north and east.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3100

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3128
*/
