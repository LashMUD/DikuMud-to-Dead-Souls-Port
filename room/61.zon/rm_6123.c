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
    SetAmbientLight(0);
    SetShort("A junction on the river bank in the deep, dark forest");
    SetLong("You are by a junction where three paths meet.  Ancient, grey trees seem to\n"+
        "observe you silently you from all around.  To the south a dark river flows from\n"+
        "east to west through the forest.  Paths lead north, east and west.");
    SetItems( ([ 
        "north" : "The narrow path winds its way through the trees to the north.",
        "east" : "The narrow path winds its way through the trees to the east.",
        "west" : "The narrow path winds its way through the trees to the west.",
        "river" : "The river flows fast and strong.  It is black or looks so in the gloom.",
        ({"bank", "banks", "tree", "trees", "trunk", "trunks"}) :
            "The ancient crowns of trees on both banks reach together forming a dense roof\n"+
            "above the dark river.",
        ({"path", "paths"}) : "The path seems all too frail.  One of the giant roots could probably crush it\n"+
            "in a single blow.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/61.zon/npc/6110_tree_ancient" : 1,
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/61.zon/rm_6122",
        "east" : "/domains/diku-alfa/room/61.zon/rm_6124",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6125",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A junction on the river bank in the deep, dark forest, Of zone : 12. V-Number : 6123, R-number : 368
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are by a junction where three paths meet.  Ancient, grey trees seem to
observe you silently you from all around.  To the south a dark river flows from
east to west through the forest.  Paths lead north, east and west.
Extra description keywords(s): 
path paths
bank banks tree trees trunk trunks
river

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6122

Direction east . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6124

Direction west . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6125
*/
