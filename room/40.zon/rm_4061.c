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
    
    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(30);
    SetShort("The light cave");
    SetLong("   You are in the south end of a light cave, tunnels leads of to the\n"+
	"south and west.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4056",
        "south" : "/domains/diku-alfa/room/40.zon/rm_4065",
        "west" : "/domains/diku-alfa/room/40.zon/rm_4060",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The light cave, Of zone : 7. V-Number : 4061, R-number : 206
Sector type : Field Special procedure : No
Room flags: INDOORS 
Description:
   You are in the south end of a light cave, tunnels leads of to the
south and west.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4056

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4065

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4060
*/
