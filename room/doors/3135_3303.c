#include <lib.h>

inherit LIB_DOOR;

static void create() {
    door::create();

    SetSide("south", ([ "id" : ({"portal leading south", "portal", "south", "cliffs", "wall"}),
        "short" : "a portal in the wall leading south",
        "long" : "You are surprised to find the outlines of a portal in the wall, although it\n"+
                 "is hardly perceivable..",
        "lockable" : 1 ]) );

    SetSide("north", ([ "id" : ({"door leading north", "door", "north door"}),
        "short" : "a door leading north",
        "long" : "This is the south side of a door leading north.",
        "lockable" : 1 ]) );

    SetClosed(1);
    SetLocked(1);
    SetKeys("south", ({ "key_3307" }));
    SetKeys("north", ({ "key_3307" }));
}

void init(){
    ::init();
}
