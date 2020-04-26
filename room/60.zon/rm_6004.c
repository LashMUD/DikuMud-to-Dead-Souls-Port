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
    SetShort("A trail through the dense forest");
    SetLong("You are on a trail leading east and west through the dense forest.  To the\n"+
        "west, the trees are so huge and their crowns so dense that forest remains in\n"+
        "total darkness.  A small path leads south through the trees.");
    SetItems( ([ 
        "east" : "The trail continues eastwards through the dense forest.",
        "south" : "The small path leads south through the trees.",
        "west" : "The narrow trail almost seems to disappear between the enourmous trunks.",
        ({"path", "paths"}) : "The narrow path is probably used by the animals living in the forest.",
            "trail" : "The forest trail seems almost fragile compared to the massive trunks.",
        ({"tree", "trees"}) : "The crowns of the old trees almost cut out all light.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/60.zon/rm_6003",
        "south" : "/domains/diku-alfa/room/60.zon/rm_6005",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6100",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A trail through the dense forest, Of zone : 11. V-Number : 6004,
R-number : 325
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are on a trail leading east and west through the dense forest.  To the
west, the trees are so huge and their crowns so dense that forest remains in
total darkness.  A small path leads south through the trees.
Extra description keywords(s): 
tree trees
trail
path paths

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The trail continues eastwards through the dense forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6003

Direction south . Keyword : (null)
Description:
  The small path leads south through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6005

Direction west . Keyword : (null)
Description:
  The narrow trail almost seems to disappear between the enourmous trunks.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6100
*/
