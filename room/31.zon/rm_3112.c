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

    SetTerrainType(T_OUTDOORS);
    SetAmbientLight(30);
    SetShort("Western Park Entrance");
    SetLong(" You are standing at the western end of the park. A small path leads east\n"+
        "into the park and going west through the entrance you will reach Park Road.");
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3113",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3111",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Western Park Entrance, Of zone : 2. V-Number : 3112, R-number : 70
Sector type : City Special procedure : No
Room flags: NO_MOB 
Description:
   You are standing at the western end of the park.  A small path leads east
into the park and going west through the entrance you will reach Park Road.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3113

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3111
*/
