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
    SetSide("north", ([ "id" : ({"grate leading north", "grate", "north door"}),
        "short" : "an iron grate leading north",
        "long" : "This is the south side of an iron grate leading north.",
        "lockable" : 1 ]) );
    
    SetSide("south", ([ "id" : ({"grate leading south", "grate", "south door"}),
        "short" : "an iron grate leading south",        
        "long" : "This is the north side of an iron grate leading south. It looks heavy.",
        "lockable" : 1 ]) );
    SetClosed(1);
    SetLocked(1);
    SetKeys("north", ({ "key_3121" }));
    SetKeys("south", ({ "key_3121" }));

}
void init(){
    ::init();
}