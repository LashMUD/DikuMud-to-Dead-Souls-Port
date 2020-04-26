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
    SetLong("   You are in a small maze, exits leads off to the east,  south\n"+
	"and west. The floor is partly covered by water.");
    SetItems( ([ 
        "east" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4155_thief" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/41.zon/rm_4159",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4162",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4157",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The small maze, Of zone : 8. V-Number : 4158, R-number : 254
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a small maze, exits leads off to the east,  south
and west. The floor is partly covered by water.

Extra description keywords(s): None
------- Chars present -------
thief(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4159

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4162

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4157
*/
