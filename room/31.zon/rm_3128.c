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
    SetLong("  The Concourse continues both east and west. Emerald avenue is north of\n"+
        "here.");
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3125",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3129",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3127",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: On the Concourse, Of zone : 2. V-Number : 3128, R-number : 86
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   The Concourse continues both east and west.  Emerald Avenue is north of
here.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3125

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3129

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3127
*/
