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
    SetShort("The small maze");
    SetLong("   You are in a small maze, where the air is damp. Exits\n"+
	"leads to the north and east.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4159",
        "east" : "/domains/diku-alfa/room/41.zon/rm_4164",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The small maze, Of zone : 8. V-Number : 4163, R-number : 259
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a small maze, where the air is damp. Exits
leads to the north and east.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4159

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4164
*/
