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
    SetShort("The small alley");
    SetLong("   You are in a small, quiet alley.\n"+
        "From here you see the village street to the west and a small\n"+
        "reception lies to the south.");
    SetItems( ([ 
        "south" : "It looks as a reception for storing goods.",
        "west" : "You notice nothing but the village street.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/55.zon/npc/5004_citizen_f" : 1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/55.zon/rm_5554",
        "west" : "/domains/diku-alfa/room/55.zon/rm_5551",
        ] ));
}

void init(){
   ::init();
}
