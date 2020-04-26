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
        "old trees leave the forest in an unreal twilight illumination.  The forest\n"+
        "gradually lightens to the east.  Paths lead east, west and south.");
    SetItems( ([ 
        "east" : "You can barely make out a clearing to the east.",
        "south" : "The small path leads south through the trees.",
        "west" : "The small path leads west through the trees.",
        ({"path", "paths"}) : "The narrow path is probably used by the animals living in the forest.",
        ({"tree", "trees"}) : "The trees are mostly old beeches and oaks.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/60.zon/rm_6008",
        "south" : "/domains/diku-alfa/room/60.zon/rm_6012",
        "west" : "/domains/diku-alfa/room/60.zon/rm_6006",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: An intersection in the dense forest, Of zone : 11. V-Number : 6007,
R-number : 328
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are on a small path leading through the dense forest.  The crowns of the
old trees leave the forest in an unreal twilight illumination.  The forest
gradually lightens to the east.  Paths lead east, west and south.
Extra description keywords(s): 
tree trees
path paths

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You can barely make out a clearing to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6008

Direction south . Keyword : (null)
Description:
  The small path leads south through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6012

Direction west . Keyword : (null)
Description:
  The small path leads west through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6006
*/
