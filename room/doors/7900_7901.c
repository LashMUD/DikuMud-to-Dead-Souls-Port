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

    SetSide("north", ([ "id" : ({"gate", "door", "huge", "arched"}),
        "short" : "a gate",
        "long" : "You see a HUGE arched gate leading into this magnificent building.",
        "lockable" : 1 ]) );

    SetSide("south", ([ "id" : ({"trapdoor", "door leading down", "trapdoor down"}),
        "short" : "a gate",
        "long" : "Here you see a REAL door. It would be more proper to call this a\n"+
                 "\"GATE\", rather than a \"door\". It's really HUGE! On it hangs a large\n"+
                 "sign with very large letters spelling : \"EMERGENCY EXIT\".",
        "lockable" : 1 ]) );

    SetClosed(1);
    SetLocked(1);
    SetKeys("north", ({ "key_7901" }));
    SetKeys("south", ({ "key_7901" }));
}

void init(){
    ::init();
}
