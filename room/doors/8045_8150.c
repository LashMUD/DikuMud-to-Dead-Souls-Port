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

    SetSide("up", ([ "id" : ({"trapdoor", "trapdoor leading up", "trapdoor up"}),
        "short" : "a trapdoor",
        "long" : "Looking up the shaft, you see a trapdoor some four or five yards up,\n"+ 
                 "with a heavy lock on it.",
        "lockable" : 1 ]) );

    SetSide("down", ([ "id" : ({"trapdoor", "door leading down", "trapdoor down"}),
        "short" : "a trapdoor",
        "long" : "There is a small square trapdoor in the pattern here. It doesn't\n"+
                 "change shape at all, as opposed to the rest of the pattern.",
        "lockable" : 1 ]) );

    SetClosed(1);
    SetLocked(1);
    SetKeys("up", ({ "key_8100" }));
    SetKeys("down", ({ "key_8100" }));
}

void init(){
    ::init();
}
