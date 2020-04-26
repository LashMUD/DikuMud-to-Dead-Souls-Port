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
    SetShort("Dusty tunnel");
    SetLong("You are standing in dust. This place has not been\n"+
        "touched for a long time. Otherwise it is quite boring\n"+
        "here, looks like a place to rest! To the west you see\n"+
        "the outline of a door. A tunnel leads to the east.");
    SetItems( ([ 
        "east" : "You see a tunnel which leads downwards. It is quite\n"+
            "dark.",
        "west" : "You can see the outline of a door. Just like in the\n"+
            "description!",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7426",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7424",
        ] ));
    SetDoor("west", "/domains/diku-alfa/room/doors/7424_7425");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Dusty tunnel, Of zone : 17. V-Number : 7425, R-number : 549
Sector type : City Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
You are standing in dust. This place has not been
touched for a long time. Otherwise it is quite boring
here, looks like a place to rest! To the west you see
the outline of a door. A tunnel leads to the east.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see a tunnel which leads downwards. It is quite
dark.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7426

Direction west . Keyword : door
Description:
  You can see the outline of a door. Just like in the
description!
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7424
*/
