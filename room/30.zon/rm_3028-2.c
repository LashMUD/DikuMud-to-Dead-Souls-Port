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
    SetShort("The Thief waiter's Storage Room");
    SetLong("  This is a small, bare room where the thief waiter keeps his goods.");
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/meals/3002_dk_bottle" : 100,
	"/domains/diku-alfa/room/30.zon/meals/3004_local_bottle" : 100,
        ]) );
    SetNoClean(1);
    SetExits( ([
        "None" : "",
        ]) );
}

void init(){
    ::init();
}
