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

    SetSide("south", ([ "id" : ({"doors leading south", "doors", "south doors"}),
        "short" : " a couple of doors",
        "long" : "This is the north side of a couple of doors leading south.",
        "lockable" : 0 ]) );

    SetSide("north", ([ "id" : ({"doors leading north", "doors", "north doors"}),
        "short" : "a couple of doors",
        "long" : "This is the south side of a couple of doors leading north.",
        "lockable" : 0 ]) );

    SetClosed(1);
    SetLocked(0);
}

void init(){
    ::init();
}
