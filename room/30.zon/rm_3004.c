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
    SetShort("Entrance to the Cleric's Guild");
    SetLong("  The entrance hall is a small modest room, reflecting the true nature of\n"+
        "the Clerics. The exit leads east to the temple square. A small entrance to\n"+
        "the bar is in the northern wall.");
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3003",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3005",
        ]) );
    SetItems( ([
        "north" : "You see the bar, richly decorated with really stylish furniture.",
        "east" : "You see the Temple Square.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3025_templar_guard" : 1,
        "/domains/diku-alfa/room/30.zon/npc/3060_cityguard" : 1,
        ]) );
   
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Entrance to Cleric's Guild, Of zone : 1. V-Number : 3004, R-number : 10
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   The entrance hall is a small modest room, reflecting the true nature of
the Clerics.  The exit leads east to the temple square.  A small entrance to
the bar is in the northern wall.

Extra description keywords(s): None
------- Chars present -------
templar(MOB)
--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the bar, richly decorated with really stylish furniture.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3003

Direction east . Keyword : (null)
Description:
  You see the Temple Square.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3005
*/
