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
    SetLong("   You are in a small maze, exits leads off only to the south\n"+
	"and west. The air is damp in this maze.");
    SetItems( ([ 
        "south" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4151_red_bat" : 1,
        "/domains/diku-alfa/room/41.zon/npc/4152_green_bat" : 1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/41.zon/rm_4163",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4158",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The small maze, Of zone : 8. V-Number : 4159, R-number : 255
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a small maze, exits leads off only to the south
and west. The air is damp in this maze.

Extra description keywords(s): None
------- Chars present -------
mage(MOB)
bat green(MOB)
bat red(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4163

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4158
*/
