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
    SetShort("The Weaponsmith's Storage Room");
    SetLong("This is where the wares of the weaponsmith are kept.");
    SetInventory( ([        
        "/domains/diku-alfa/room/30.zon/weap/3020_dagger" : 100,
        "/domains/diku-alfa/room/30.zon/weap/3021_smallsword" : 100,
        "/domains/diku-alfa/room/30.zon/weap/3022_longsword" : 100,
        "/domains/diku-alfa/room/30.zon/weap/3023_woodenclub" : 100,
        "/domains/diku-alfa/room/30.zon/weap/3024_warhammer" : 100,
        ]) );
    SetNoClean(1);
    SetExits( ([
        "None" : "", 
        ]) );
}

void init(){
    ::init();
}
