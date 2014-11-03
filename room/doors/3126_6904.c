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

    SetSide("west", ([ "id" : ({"door leading west", "door", "west door", "front door", "front"}),
        "short" : "a door leading west",
        "long" : "This is the east side of a door leading west.",
        "lockable" : 1 ]) );

    SetSide("east", ([ "id" : ({"door leading east", "door", "east door", "heavy oaken door", "oaken"}),
        "short" : "a heavy oaken door leading east",
        "long" : "This is the west side of a heavy oaken door leading east.",
        "lockable" : 1 ]) );

    SetClosed(1);
    SetLocked(1);
    SetKeys("west", ({ "key_3301" }));
    SetKeys("east", ({ "key_3301" }));
}

void init(){
    ::init();
}
