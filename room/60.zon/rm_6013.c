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
    SetLong("You are on a small path leading through the dense forest.  The crowns of the\n"+
        "old trees leave the forest in an unreal twilight illumination.  The path\n"+
        "continues east and west.");
    SetItems( ([ 
        "east" : "The small path leads east through the trees.",
        "west" : "The small path leads west through the trees.",
        ({"path", "paths"}) : "The narrow path is probably used by the animals living in the forest.",
        ({"tree", "trees"}) : "The trees are mostly old beeches and oaks.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/60.zon/meals/6011_mushroom" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/60.zon/rm_6014",
        "west" : "/domains/diku-alfa/room/60.zon/rm_6012",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A small path in the dense forest, Of zone : 11. V-Number : 6013,
R-number : 334
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are on a small path leading through the dense forest.  The crowns of the
old trees leave the forest in an unreal twilight illumination.  The path
continues east and west.
Extra description keywords(s): 
tree trees
path paths

------- Chars present -------
fox(MOB)

--------- Contents ---------
mushroom

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The small path leads east through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6014

Direction west . Keyword : (null)
Description:
  The small path leads west through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6012
*/
