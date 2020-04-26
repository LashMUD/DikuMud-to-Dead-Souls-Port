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
    SetShort("Small path in the park");
    SetLong("  You are standing on a small path inside the park. The park entrance is\n"+
        "just north of here, and Park cafe is just east of the entrance. The path\n"+
        "leads further east and west.");
    SetItems( ([
        "north" : "You see the northern park entrance.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3105",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3107",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3109",
      ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Small path in the park, Of zone : 2. V-Number : 3108, R-number : 66
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are standing on a small path inside the park.  The park entrance is
just north of here, and Park Cafe is just east of the entrance.  The path
leads further east and west.

Extra description keywords(s): None
------- Chars present -------
sparrow(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the northern park entrance.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3105

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3109

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3107
*/
