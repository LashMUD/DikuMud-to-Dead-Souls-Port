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
    SetShort("A small path through the light forest");
    SetLong("You are on a small path leading through the forest.  The trees are tall and\n"+
        "slender.  Paths lead north and south.");
    SetItems( ([ 
        "north" : "The path leads north through the young trees.",
        "south" : "The path leads south through the young trees.",
        ({"path", "paths"}) : "The narrow path is probably used by the animals living in the forest.",
        ({"tree", "trees"}) : "The trees are fairly young, not much more than a hundred years or so.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/60.zon/rm_6002",
        "south" : "/domains/diku-alfa/room/60.zon/rm_6008",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A small path through the light forest, Of zone : 11. V-Number : 6011,
R-number : 332
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are on a small path leading through the forest.  The trees are tall and
slender.  Paths lead north and south.
Extra description keywords(s): 
tree trees
path paths

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The path leads north through the young trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6002

Direction south . Keyword : (null)
Description:
  The path leads south through the young trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6008
*/
