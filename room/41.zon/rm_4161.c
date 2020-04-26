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
    SetShort("The wet tunnel");
    SetLong("   You are in a north-south leading tunnel, the floor is fully\n"+
	"covered by water. To the west you notice a small passage.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4160_orc_large" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4157",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4165",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The wet tunnel, Of zone : 8. V-Number : 4161, R-number : 257
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a north-south leading tunnel, the floor is fully
covered by water. To the west you notice a small passage.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4157

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4165
*/
