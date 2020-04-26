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
    SetLong("   You stand at the small village street in Ofcol.\n"+
        "From here you see small houses and only few people.\n"+
        "North of here the village street continues up to the small\n"+
        "square where some people are gathered as always.");
    SetItems( ([ 
        "north" : "You look up the village street noticing nothing special at all.",
        "south" : "The wide road leads south here towards the T-crossing.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/55.zon/npc/5003_citizen_m" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/55.zon/rm_5551",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5014",
        ] ));
}

void init(){
   ::init();
}
