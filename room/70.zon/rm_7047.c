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
    SetAmbientLight(30);
    SetShort("The Pool in the sewer");
    SetLong("You stand in water to your waste. To the north is the entrance to this room.\n"+
        "A single door leads east.");
    SetItems( ([ 
        "north" : "To the north you see the entrance to this room.",
        "east" : "You can see an enormous hall through the doorway.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7047",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7053",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Pool in the sewer, Of zone : 14. V-Number : 7047, R-number : 431
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
You stand in water to your waste. To the north is the entrance to this room.
A single door leads east.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north you see the entrance to this room.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7047

Direction east . Keyword : (null)
Description:
  You can see an enormous hall through the doorway.
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7053
*/
