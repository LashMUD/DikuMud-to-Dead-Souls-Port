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

    SetSide("west", ([ "id" : ({"gate leading west", "gate", "west gate"}),
        "short" : "the Midgaard West Side gate",
        "long" : "It is a set of very big double doors made from hard wood. They have been\n"+
                 "reinforced with large iron bands to make them even more sturdy. One of the\n"+
                 "doors is equipped with a very big lock.",
        "lockable" : 1 ]) );

    SetSide("east", ([ "id" : ({"gate leading east", "gate", "west gate"}),
        "short" : "the Midgaard West Side gate",
        "long" : "It is a set of very big double doors made from hard wood. They have been\n"+
                 "reinforced with large iron bands to make them even more sturdy. One of the\n"+
                 "doors is equipped with a very big lock.",
        "lockable" : 1 ]) );

    SetClosed(0);
    SetLocked(0);
    SetKeys("west", ({ "key_3133" }));
    SetKeys("east", ({ "key_3133" }));
}

void init(){
    ::init();
}
