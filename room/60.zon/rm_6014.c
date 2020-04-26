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
    SetShort("An intersection in the dense forest");
    SetLong("You are on a small path leading through the dense forest.  The forest gradually\n"+
        "lightens to the north.  Paths lead north, east and west.");
    SetItems( ([ 
        "north" : "The path leads north to a lighter part of the forest.",
        "east" : "The small path leads east through the trees.",
        "west" : "The small path leads west through the trees.",
        ({"path", "paths"}) : "The narrow path is probably used by the animals living in the forest.",
        ({"tree", "trees"}) : "The crowns of the old trees leave the forest in an unreal twilight\n"+
	    "illumination.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/60.zon/npc/6005_fox" : 1,
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/60.zon/rm_6009",
        "east" : "/domains/diku-alfa/room/60.zon/rm_6015",
        "west" : "/domains/diku-alfa/room/60.zon/rm_6013",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: An intersection in the dense forest, Of zone : 11. V-Number : 6014,
R-number : 335
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are on a small path leading through the dense forest.  The forest gradually
lightens to the north.  Paths lead north, east and west.
Extra description keywords(s): 
tree trees
path paths

------- Chars present -------
fox(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The path leads north to a lighter part of the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6009

Direction east . Keyword : (null)
Description:
  The small path leads east through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6015

Direction west . Keyword : (null)
Description:
  The small path leads west through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6013
*/
