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

inherit LIB_SHOP;

static void create() {
    shop::create();

    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("Levee");
    SetLong(" You are at the levee. South of here you see the river gently flowing west.\n"+
        "The river bank is very low making it possible to enter the river.");
    SetItems( ([
        "north" : "You see the Alley.",
        "south" : "You see the river flowing west.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3006_captain" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3045",
        "south" : "/domains/diku-alfa/room/32.zon/rm_3203",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Levee, Of zone : 1. V-Number : 3049, R-number : 51
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
  You are at the levee.  South of here you see the river gently flowing west.
The river bank is very low making it possible to enter the river.

Extra description keywords(s): None
------- Chars present -------
cityguard guard(MOB)
esther madam(MOB)
captain(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the Alley.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3045

Direction south . Keyword : (null)
Description:
  You see the river flowing west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3203
*/
