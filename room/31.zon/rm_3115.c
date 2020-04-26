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
    SetShort("A path in the park");
    SetLong(" You are in the park. The paths lead north and east. Eastwards is the\n"+
        "park entrance and to the west you see a small pond.");
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/npc/3124_duck" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3109",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3116",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3114",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: A path in the park, Of zone : 2. V-Number : 3115, R-number : 73
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are in the park.  The paths lead north and east.  Eastwards is the
park entrance and to the west you see a small pond.

Extra description keywords(s): None
------- Chars present -------
duck(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3109

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3116

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3114
*/
