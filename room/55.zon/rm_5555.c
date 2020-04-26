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

inherit LIB_SHOP;

static void create() {
    ::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Luxan's mixed shop");
    SetLong("   You are standing in a small shop, filled with all kinds of goods.\n"+
        "Here you might be able to find just the thing you're looking for.\n"+
        "The only exit is east to village square.");
    SetItems( ([
        "east" : "The village square is as usual not overcrowded.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/55.zon/npc/5006_luxan" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/55.zon/rm_5552",
        ]) );
}

void init(){
   ::init();
}
