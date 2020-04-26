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

    SetSide("down", ([ "id" : ({"trapdoor leading down", "trapdoor", "entrance"}),
        "short" : "a secret trapdoor leading down",
        "long" : "A secret trapdoor leading down.",
        "lockable" : 0 ]) );

    SetSide("up", ([ "id" : ({"trapdoor leading up", "trapdoor", "secret"}),
        "short" : "a secret trapdoor leading up",
        "long" : "A secret trapdoor leading up.",
        "lockable" : 0 ]) );

    SetClosed(1);
    SetLocked(0);
}

void init(){
    ::init();
}
