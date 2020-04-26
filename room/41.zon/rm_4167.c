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
    SetShort("The wet maze");
    SetLong("   You are in a small maze, the floor is covered by water, the\n"+
	"maze continues east, west and south.");
    SetItems( ([ 
        "east" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4157_mage" : 1,
        //add second mage with staff of harming
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/41.zon/rm_4168",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4171",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4166",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The wet maze, Of zone : 8. V-Number : 4167, R-number : 263
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a small maze, the floor is covered by water, the
maze continues east, west and south.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4168

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4171

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4166
*/
