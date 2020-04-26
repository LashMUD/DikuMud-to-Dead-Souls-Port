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
    SetLong(" The main street, to the north is the weaponshop and to the south is the\n"+
        "Guild of Swordsmen. To the east you leave town and to the west the street\n"+
        "leads to market square.");
    SetItems( ([
        "north" : "You see the weapon shop.",
        "east" : "You see the city gate.",
        "south" : "You see the swordsmen's guild.",
        "west" : "You see the main street leading to the market square.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3011",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3041",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3021",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3015",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3062_fido" : 1,
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Main Street, Of zone : 1. V-Number : 3016, R-number : 22
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   The main street, to the north is the weapon shop and to the south is the
Guild of Swordsmen.  To the east you leave town and to the west the street
leads to the market square.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the weapon shop.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3011

Direction east . Keyword : (null)
Description:
  You see the city gate.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3041

Direction south . Keyword : (null)
Description:
  You see the swordsmen's guild.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3021

Direction west . Keyword : (null)
Description:
  You see the main street leading to the market square.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3015
*/
