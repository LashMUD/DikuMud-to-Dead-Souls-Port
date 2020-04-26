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
    
    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("The damp tunnel");
    SetLong("   You are in a damp tunnel, your clothes feel wet. The tunnel continues\n"+
	"to the north, to the west you see a hole in the floor and to the east\n"+
	"there is a large cave.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4005_large_orc" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4024",
        "east" : "/domains/diku-alfa/room/40.zon/rm_4023",
        "west" : "/domains/diku-alfa/room/40.zon/rm_4021",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The damp tunnel, Of zone : 7. V-Number : 4022, R-number : 185
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a damp tunnel, your clothes feel wet. The tunnel continues
to the north, to the west you see a hole in the floor and to the east
there is a large cave.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4024

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4023

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4021
*/
