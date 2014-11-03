#include <lib.h>

inherit LIB_DOOR;

static void create() {
    door::create();

    SetSide("down", ([ "id" : ({"tombstone leading down", "tombstone"}),
        "short" : "a tombstone leading down",
        "long" : "The tombstone leads down into darkness.",
        "lockable" : 1 ]) );

    SetSide("up", ([ "id" : ({"tombstone leading up", "tombstone"}),
        "short" : "a tombstone leading up",
        "long" : "The tombstone leads up out of the tomb.",
        "lockable" : 1 ]) );
    SetClosed(1);
    SetLocked(0);
    

}

void init(){
    ::init();
}