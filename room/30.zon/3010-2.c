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

inherit LIB_ROOM;

static void create() {
    ::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Grocer's Storage Room");
    SetLong("You are inside the general store storage room.");
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/obj/3030_torch" : 20,
        "/domains/diku-alfa/room/30.zon/obj/3031_lantern" : 20,
        "/domains/diku-alfa/room/30.zon/obj/3032_bag" : 20,
        "/domains/diku-alfa/room/30.zon/obj/3033_box" : 20,
        ]) );
    SetExits( ([ 
        "None" : "",
        ]) );
    SetNoClean(1);
}

void init(){
    ::init();
}
