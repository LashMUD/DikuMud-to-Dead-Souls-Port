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
    SetShort("A trail through the light forest");
    SetLong("You are on a narrow trail leading east and west through the forest.  To the\n"+
        "west, the forest gradually becomes more dense.  A small forest path leads\n"+
        "south.");
    SetItems( ([ 
        "east" : "The trail continues eastwards through the young trees.",
        "south" : "The small path leads south through the young trees.",
        "west" : "You see the narrow forest trail winding westwards into the dense forest.",
        ({"path", "paths"}) : "The narrow path is probably used by the animals living in the forest.",
            "trail" : "The forest trail winds east-west through the trees.",
        ({"tree", "trees"}) : "The young, slender trees look beautiful, their fresh, green leaves moving\n"+
	    "lightly in the wind.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/60.zon/rm_6001",
        "south" : "/domains/diku-alfa/room/60.zon/rm_6011",
        "west" : "/domains/diku-alfa/room/60.zon/rm_6003",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A trail through the light forest, Of zone : 11. V-Number : 6002,
R-number : 323
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are on a narrow trail leading east and west through the forest.  To the
west, the forest gradually becomes more dense.  A small forest path leads
south.
Extra description keywords(s): 
tree trees
trail
path paths

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The trail continues eastwards through the young trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6001

Direction south . Keyword : (null)
Description:
  The small path leads south through the young trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6011

Direction west . Keyword : (null)
Description:
  You see the narrow forest trail winding westwards into the dense forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6003
*/
