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
    SetShort("The Main Street");
    SetLong(" You are on Main Street crossing through town. To the north is the general\n"+
        "store, and the main street continues east. To the west you see and hear the\n"+
        "market place and to the south is the Jeweller's Shop.");
    SetItems( ([
        "north" : "You see the general store.",
        "east" : "You see Main Street.",
        "south" : "You see the Jeweller's Shop.",
        "west" : "You see the market square.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3010",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3016",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3034",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3014",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Main Street, Of zone : 1. V-Number : 3015, R-number : 21
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are on Main Street crossing through town.  To the north is the general
store, and the main street continues east.  To the west you see and hear the
market place and to the south is the Jeweller's Shop.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the general store.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3010

Direction east . Keyword : (null)
Description:
  You see Main Street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3016

Direction south . Keyword : (null)
Description:
  You see the Jeweller's Shop.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3034

Direction west . Keyword : (null)
Description:
  You see the market square.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3014
*/
