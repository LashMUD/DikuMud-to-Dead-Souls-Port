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
    SetShort("In front of the Chapel");
    SetLong(" You are on an open space before a small chapel. A gravel road leads north\n"+
        "through the graveyard and the chapel entrance is to the south.");
    SetItems( ([
        "north" : "The gravel road continues northwards.",
        "south" : "The chapel door is made of dark wood.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/34.zon/rm_3403",
        "south" : "/domains/diku-alfa/room/34.zon/rm_3405",
        ]) );
    SetDoor("south", "/domains/diku-alfa/room/doors/3404_3405");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: In front of the Chapel, Of zone : 5. V-Number : 3404, R-number : 121
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
  You are on an open space before a small chapel.  A gravel road leads north
through the graveyard and the chapel entrance is to the south.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The gravel road continues northwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3403

Direction south . Keyword : door
Description:
  The chapel door is made of dark wood.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 3405
*/
