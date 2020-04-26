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
    SetLong("  You are standing on the north end of Emerald Avenue. To the north is the\n"+
        "promenade and to the east is the small street Penny Lane.");
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3103",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3139",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3117",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Emerald Avenue, Of zone : 2. V-Number : 3132, R-number : 90
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are standing on the north end of Emerald Avenue.  To the north is the
promenade and to the east is the small street Penny Lane.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3103

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3139

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3117
*/
