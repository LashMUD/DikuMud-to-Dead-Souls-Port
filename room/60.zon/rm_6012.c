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
    SetLong("You are on a small path leading through the dense forest.  The crowns of the\n"+
        "old trees leave the forest floor in an unreal twilight illumination.  Paths\n"+
        "lead north, east and south.");
    SetItems( ([ 
        "north" : "The small path leads north through the trees.",
        "east" : "The small path leads east through the trees.",
        "south" : "The small path leads south through the trees.",
        ({"path", "paths"}) : "The narrow path is probably used by the animals living in the forest.",
        ({"tree", "trees"}) : "The trees are mostly old beeches and oaks.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/60.zon/npc/6001_rabbit" : 1,
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/60.zon/rm_6007",
        "east" : "/domains/diku-alfa/room/60.zon/rm_6013",
        "south" : "/domains/diku-alfa/room/60.zon/rm_6021",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: An intersection in the dense forest, Of zone : 11. V-Number : 6012,
R-number : 333
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are on a small path leading through the dense forest.  The crowns of the
old trees leave the forest floor in an unreal twilight illumination.  Paths
lead north, east and south.
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
To room (V-Number): 6007

Direction east . Keyword : (null)
Description:
  The small path leads east through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6013

Direction south . Keyword : (null)
Description:
  The small path leads south through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6021
*/
