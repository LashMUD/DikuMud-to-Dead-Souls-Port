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
    SetLong("   You are in a part of the maze where the floor is fully covered\n"+
	"by water. The maze continues to the north, east and south.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "south" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4162",
        "east" : "/domains/diku-alfa/room/41.zon/rm_4167",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4170",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The wet maze, Of zone : 8. V-Number : 4166, R-number : 262
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a part of the maze where the floor is fully covered
by water. The maze continues to the north, east and south.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4162

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4167

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4170
*/
