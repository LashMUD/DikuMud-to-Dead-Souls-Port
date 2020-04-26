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
    SetShort("The Temple Square");
    SetLong("  You are standing on the temple square. Huge marble steps lead up to the\n"+
        "temple gate. The entrance to the Clerics Guild is to the west, and the old\n"+
        "Grunting Boar Inn, is to the east. Just south of here you see the market\n"+
        "square, the center of Midgaard.");
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3001",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3006",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3014",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3004",
      ]) );
    SetItems( ([
        "north" : "You see the temple.",
        "east" : "You see the good old Grunting Boar Inn.",
        "south" : "You see the Market Square.",
        "west" : "You see the entrance to the Clerics Guild.",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Temple Square, Of zone : 1. V-Number : 3005, R-number : 11
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are standing on the temple square.  Huge marble steps lead up to the
temple gate.  The entrance to the Clerics Guild is to the west, and the old
Grunting Boar Inn, is to the east.  Just south of here you see the market
square, the center of Midgaard.

Extra description keywords(s): None
------- Chars present -------
cityguard guard(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the temple.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3001

Direction east . Keyword : (null)
Description:
  You see the good old Grunting Boar Inn.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3006

Direction south . Keyword : (null)
Description:
  You see the Market Square.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3014

Direction west . Keyword : (null)
Description:
  You see the entrance to the Clerics Guild.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3004
*/
