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
    SetShort("Eastern Park Entrance");
    SetLong("  You are standing at the eastern end of the park. A small path leads west\n"+
        "into the park. Going east through the entrance you will reach Emerald Avenue.");
    SetExits( ([
        "west" : "/domains/diku-alfa/room/31.zon/rm_3115",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3117",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Eastern Park Entrance, Of zone : 2. V-Number : 3116, R-number : 74
Sector type : City Special procedure : No
Room flags: NO_MOB 
Description:
   You are standing at the eastern end of the park.  A small path leads west
into the park.  Going east through the entrance you will reach Emerald
Avenue.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3117

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3115
*/
