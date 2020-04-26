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
    SetShort("Poor Alley");
    SetLong(" You are in narrow and dirty alley leading east and west. The leather shop\n"+
        "is to the north.");
    SetItems( ([
        "north" : "The leather shop is to the north.",
        "east" : "The alley leads east.",
        "west" : "The alley leads west.",
        ]) );   
   SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3035",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3024",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3043",
        "south": "/domains/diku-alfa/room/30.zon/rm_3056",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3065_beggar" : 1,
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Poor Alley, Of zone : 1. V-Number : 3044, R-number : 46
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are in narrow and dirty alley leading east and west.  The leather shop
is to the north.

Extra description keywords(s): None
------- Chars present -------
beggar(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The leather shop is to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3035

Direction east . Keyword : (null)
Description:
  The alley leads east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3024

Direction west . Keyword : (null)
Description:
  The alley leads west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3043
*/
