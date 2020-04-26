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
    SetShort("Village square");
    SetLong("   The village square is a place where inhabitants of Ofcol gather\n"+
        "to talk, trade and sell items and just have a good time.\n"+
        "You see a small shop to the west and the local inn to the north.\n"+
        "If you leave south you go to village street.");
    SetItems( ([ 
        "north" : "You see a local inn called 'The Ofcol Local Inn'. Looks nice.",
        "south" : "You see the village street of Ofcol.",
        "west" : "A small shop with the sign 'Luxan's Mixed goods' hanging in front of it.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/55.zon/npc/5004_citizen_f" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/55.zon/rm_5556",
        "south" : "/domains/diku-alfa/room/55.zon/rm_5551",
        "west" : "/domains/diku-alfa/room/55.zon/rm_5555",
        ] ));
}

void init(){
   ::init();
}
