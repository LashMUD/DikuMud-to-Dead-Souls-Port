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
    SetShort("Main Street");
    SetLong(" You are on the main street passing through the City of Midgaard. South of\n"+
        "here is the entrance to the Armoury, and the bakery is to the north. East of\n"+
        "here is the market square.");
    SetItems( ([
        "north" : "You see the bakery.",
        "east" : "You see the market square.",
        "south" : "You see the armoury.",
        "west" : "You see the main street.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3009",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3014",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3020",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3012",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Street, Of zone : 1. V-Number : 3013, R-number : 19
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are on the main street passing through the City of Midgaard.  South of
here is the entrance to the Armoury, and the bakery is to the north.  East of
here is the market square.

Extra description keywords(s): None
------- Chars present -------
cityguard guard(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the bakery.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3009

Direction east . Keyword : (null)
Description:
  You see the market square.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3014

Direction south . Keyword : (null)
Description:
  You see the armoury.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3020

Direction west . Keyword : (null)
Description:
  You see the main street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3012
*/
