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

inherit LIB_DOOR;

static void create() {
    door::create();

    SetSide("north", ([ "id" : ({"door leading north", "door", "north door"}),
        "short" : "a door",
        "long" : "This is the south side of the front foyer door leading north.",
        "lockable" : 0 ]) );

    SetSide("south", ([ "id" : ({"door leading south", "door", "front door", "south door"}),
        "short" : "a door",
        "long" : "This is the north side of the front door leading south.",
        "lockable" : 0 ]) );

    SetClosed(1);
    SetLocked(0);
}

void init(){
    ::init();
}
