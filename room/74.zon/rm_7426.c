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
    room::create();
    SetClimate("indoors");
    SetAmbientLight(0);
    SetShort("The crossing");
    SetLong("You are standing in a crossing of hallways. You can leave this place\n"+
        "in every direction, except up and down. In the dust you notice strange\n"+
        "footprints.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "south" : "",
        "west" : "",
        ({"footprints", "foot"}) : "You have never seen this kind of footprints before!",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7431",
        "east" : "/domains/diku-alfa/room/74.zon/rm_7430",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7427",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7425",
        ] ));
}

void init(){
   ::init();
}
