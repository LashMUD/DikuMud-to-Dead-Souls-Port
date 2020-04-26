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
    SetShort("The entrace to the small maze");
    SetLong("   You are in a north-south leading tunnel, and the air is damp.\n"+
	"To the west you see a small maze.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4153_white_bat" : 1,
        "/domains/diku-alfa/room/41.zon/npc/4154_black_bat" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4160",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4168",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4163",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The entrace to the small maze, Of zone : 8. V-Number : 4164, R-number : 260
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a north-south leading tunnel, and the air is damp.
To the west you see a small maze.

Extra description keywords(s): None
------- Chars present -------
orc(MOB)
bat black(MOB)
bat white(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4160

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4168

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4163
*/
