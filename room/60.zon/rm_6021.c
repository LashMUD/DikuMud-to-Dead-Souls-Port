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
    SetLong("You are on a small path leading through the dense forest.  To the west there is\n"+
        "a cave entrance.  The path continues north and east.");
    SetItems( ([ 
        "north" : "The small path leads north through the trees.",
        "east" : "The small path leads east through the trees.",
        "west" : "The cave is very dark.",
        ({"path", "paths"}) : "The narrow path is probably used by the animals living in the forest.",
        ({"tree", "trees"}) : "The crowns of the old trees leave the forest in an unreal twilight\n"+
	    "illumination.",
        ({"cave", "entrance"}) : "The irregular opening is eight feet wide and six feet tall.  An acrid smell\n"+
	    "emanates from within.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/60.zon/rm_6012",
        "east" : "/domains/diku-alfa/room/60.zon/rm_6020",
        "west" : "/domains/diku-alfa/room/60.zon/rm_6022",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A small path in the dense forest, Of zone : 11. V-Number : 6021,
R-number : 342
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are on a small path leading through the dense forest.  To the west there is
a cave entrance.  The path continues north and east.
Extra description keywords(s): 
cave entrance
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
To room (V-Number): 6012

Direction east . Keyword : (null)
Description:
  The small path leads east through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6020

Direction west . Keyword : (null)
Description:
  The cave is very dark.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6022
*/
