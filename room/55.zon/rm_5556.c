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
    SetShort("The Local Inn");
    SetLong("   You are in the local inn, where the peacefull citizens of Ofcol\n"+
        "gather to have a drink or 5 if they have dry throats.\n"+
        "You can't help thinking that Ofcol is a dry city, when you see the\n"+
        "many people here.\n"+
        "The only exit is south to the village square.");
    SetItems( ([ 
        "south" : "The village square is as usual not overcrowded.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/55.zon/npc/5003_citizen_m" : 1,
        "/domains/diku-alfa/room/55.zon/npc/5008_innkeeper" : 1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/55.zon/rm_5552",
        ] ));
}

void init(){
   ::init();
}
