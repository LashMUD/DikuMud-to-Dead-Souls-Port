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
    SetAmbientLight(30);
    SetShort("The village reception");
    SetLong("   This is a reception where you feel that you confidently can store\n"+
        "your loved belongings, for a price of course.\n"+
        "The only exit is north leading to the small alley.");
    SetItems( ([ 
        "north" : "You are able to see the small alley, really not very interresting.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/55.zon/npc/5007_matty" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/55.zon/rm_5553",
        ] ));
}

void init(){
   ::init();
}
