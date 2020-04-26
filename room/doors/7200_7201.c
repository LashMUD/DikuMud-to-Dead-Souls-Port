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

    SetSide("west", ([ "id" : ({"door leading west", "door", "west door", "stone door", "stone"}),
        "short" : "a stone door leading west",
        "long" : "This is the east side of a heavy black stone door. It looks very solid.",
        "lockable" : 1 ]) );

    SetSide("east", ([ "id" : ({"door leading east", "door", "east door", "stone door", "stone"}),
        "short" : "a door leading east",
        "long" : "This is the west side of a heavy black stone door. It looks very solid.",
        "lockable" : 1 ]) );

    SetClosed(1);
    SetLocked(1);
    SetKeys("west", ({ "key_7205" }));
    SetKeys("east", ({ "key_7205" }));
}

void init(){
    ::init();
}
