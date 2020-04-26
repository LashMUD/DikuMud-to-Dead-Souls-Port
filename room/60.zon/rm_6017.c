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

    SetTerrainType(T_WOODS); 
    SetAmbientLight(30);
    SetShort("A small path in the dense forest");
    SetLong("You are on a small path leading through the dense forest.  The forest seems to\n"+
        "become lighter to the west.  The path continues north and west.");
    SetItems( ([ 
        "north" : "The small path leads north through the trees.",
        "west" : "The small path leads west through the trees to a lighter part of the forest.",
        ({"path", "paths"}) : "The narrow path is probably used by the animals living in the forest.",
        ({"tree", "trees"}) : "The crowns of the old trees leave the forest in an unreal twilight\n"+
	    "illumination.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/60.zon/npc/6001_rabbit" : 1,
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/60.zon/rm_6016",
        "west" : "/domains/diku-alfa/room/60.zon/rm_6018",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A small path in the dense forest, Of zone : 11. V-Number : 6017,
R-number : 338
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are on a small path leading through the dense forest.  The forest seems to
become lighter to the west.  The path continues north and west.
Extra description keywords(s): 
tree trees
path paths

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The small path leads north through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6016

Direction west . Keyword : (null)
Description:
  The small path leads west through the trees to a lighter part of the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6018
*/
