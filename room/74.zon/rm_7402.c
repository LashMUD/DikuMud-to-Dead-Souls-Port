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

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Cave room");
    SetLong("You are standing in a room. It's much cooler now.\n"+
        "The walls are glowing.");
    SetItems( ([ 
        "east" : "To the east you see the tunnel going downwards.",
        "south" : "To the south you see a dark cave tunnel.",
        "west" : "",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7403",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7401",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7421",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Cave room, Of zone : 17. V-Number : 7402, R-number : 526
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
You are standing in a room. It's much cooler now.
The walls are glowing.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  To the east you see the tunnel going downwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7403

Direction south . Keyword : (null)
Description:
  To the south you see a dark cave tunnel.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7401

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7421
*/
