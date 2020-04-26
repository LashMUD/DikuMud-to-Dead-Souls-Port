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
    SetShort("The Common Square");
    SetLong(" The common square, people pass you, talking to each other. To the west is\n"+
        "alley and to the east is the dark alley. To the north, this square\n"+
        "is connected to the market square. From the south you notice a nasty smell.");
    SetItems( ([
        "north" : "You see the market square.",
        "east" : "You see the dark alley.",
        "south" : "You see the city dump.",
        "west" : "You see the poor alley.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3062_fido" : 1,
        "/domains/diku-alfa/room/30.zon/npc/7012_m_esther" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3014",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3026",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3030",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3024",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Common Square, Of zone : 1. V-Number : 3025, R-number : 31
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   The common square, people pass you, talking to each other.  To the west is
the poor alley and to the east is the dark alley.  To the north, this square
is connected to the market square.  From the south you notice a nasty smell.

Extra description keywords(s): None
------- Chars present -------
fido dog(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the market square.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3014

Direction east . Keyword : (null)
Description:
  You see the dark alley.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3026

Direction south . Keyword : (null)
Description:
  You see the city dump.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3030

Direction west . Keyword : (null)
Description:
  You see the poor alley.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3024
*/
