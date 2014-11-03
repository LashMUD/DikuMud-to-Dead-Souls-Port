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

    SetSide("east", ([ "id" : ({"door leading east", "door", "east door"}),
        "short" : "a door leading east",
        "long" : "This is the west side of a door leading east.",
        "lockable" : 1 ]) );

    SetSide("west", ([ "id" : ({"door leading west", "door", "west door"}),
        "short" : "a door leading west",
        "long" : "This is the east side of a door leading west.",
        "lockable" : 1 ]) );

    SetClosed(1);
    SetLocked(1);
    SetKeys("east", ({ "key_3300" }));
    SetKeys("west", ({ "key_3300" }));
}

void init(){
    ::init();
}
