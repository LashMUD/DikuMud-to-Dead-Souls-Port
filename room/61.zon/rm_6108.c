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

    SetClimate("indoors");
    SetTerrainType(T_WOODS);
    SetAmbientLight(0);
    SetShort("A narrow trail through the deep, dark forest");
    SetLong("You are on a dusty trail winding its way between huge, ancient trees\n"+
        "standing close on all sides.  The trail leads north and west and to the south,\n"+
        "a frail path leads away from the trail.");
    SetItems( ([ 
        "north" : "The narrow, dusty trail leads north through the forest.",
        "south" : "The path leads south - away from the trail.",
        "west" : "The narrow, dusty trail leads west through the forest.",
        "trail" : "The dark and dusty trail seems fragile compared to the massive trunks, and in\n"+
            "some places, giant grey roots have broken up through its surface.",
        "path" : "The path seems fragile and unsafe compared to the enourmous trunks that loom\n"+
            "around it.",
        ({"tree", "trees", "trunk", "trunks"}) : "These ancient trees must have been here for many, many years.  It is impossible\n"+
	    "to catch even a glimpse of anything above the lowest branches.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/61.zon/npc/6102_wolf_grey" : 2,
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/61.zon/rm_6103",
        "south" : "/domains/diku-alfa/room/61.zon/rm_6107",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6109",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A narrow trail through the deep, dark forest, Of zone : 12. 
V-Number : 6108, R-number : 353
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are on a dusty trail winding its way between huge, ancient trees
standing close on all sides.  The trail leads north and west and to the south,
a frail path leads away from the trail.
Extra description keywords(s): 
tree trees trunk trunks
path
trail

------- Chars present -------
tree ancient(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The narrow, dusty trail leads north through the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6103

Direction south . Keyword : (null)
Description:
  The path leads south - away from the trail.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6107

Direction west . Keyword : (null)
Description:
  The narrow, dusty trail leads west through the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6109
*/
