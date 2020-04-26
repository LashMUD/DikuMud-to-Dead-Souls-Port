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
    
    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(0);
    SetShort("The cave");
    SetLong("   You are in the north end of a cave. To the east you see some tunnels\n"+
      "which leads in many directions.");
    SetItems( ([ 
        "east" : "",
        "south" : "",
      ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4001_green_snake" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/40.zon/rm_4026",
        "south" : "/domains/diku-alfa/room/40.zon/rm_4018",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The cave, Of zone : 7. V-Number : 4025, R-number : 188
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in the north end of a cave. To the east you see some tunnels
which leads in many directions.

Extra description keywords(s): None
------- Chars present -------
snake(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4026

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4018
*/
