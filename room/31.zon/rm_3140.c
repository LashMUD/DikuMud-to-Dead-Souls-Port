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
    SetShort("Penny Lane");
    SetLong("  You are on Penny Lane. The narrow road continues north and west.");
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3141",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3139",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Penny Lane, Of zone : 2. V-Number : 3140, R-number : 98
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are on Penny Lane.  The narrow road continues north and west.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3141

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3139
*/
