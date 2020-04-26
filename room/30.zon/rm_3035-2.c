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
    SetShort("The Leather Worker's Storage Room");
    SetLong("  This is a small, bare room where the leather Worker keeps his goods.");
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/armor/3060_jerkin_leather" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3061_cap_leather" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3062_pants_leather" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3063_boots_leather" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3064_gloves_leather" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3065_sleeves_leather" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3066_jerkin_studded_leather" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3067_cap_leather_hard" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3068_pants_studded_leather" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3069_boots_hard_leather" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3070_gloves_hard_leather" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3071_sleeves_studded_leather" : 15,
        ]) );
    SetNoClean(1);
    SetExits( ([
        "None" : "",
      ]) );
}

void init(){
    ::init();
}
