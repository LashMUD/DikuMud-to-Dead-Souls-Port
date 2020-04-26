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
#include <terrain_types.h>

inherit LIB_ROOM;

static void create() {
    room::create();

    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("Village street");
    SetLong("   You are standing on the village street of Ofcol.\n"+
        "East from here is a small alley and north you enter the village\n"+
        "square. Towards the south you can leave Ofcol.");
    SetItems( ([ 
        "north" : "The village square is as usual not overcrowded.",
        "east" : "The small alley looks relative peacefull.",
        "south" : "You see the village street eventually becoming the wide road.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/55.zon/rm_5552",
        "east" : "/domains/diku-alfa/room/55.zon/rm_5553",
        "south" : "/domains/diku-alfa/room/55.zon/rm_5550",
        ] ));
}

void init(){
   ::init();
}
