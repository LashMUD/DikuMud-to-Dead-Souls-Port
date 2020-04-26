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
    SetLong("You are on a dusty trail winding its way north-south between huge, ancient\n"+
        "trees that loom ominously above you.");
    SetItems( ([ 
        "north" : "The narrow, dusty trail leads north through the forest.",
        "south" : "The narrow, dusty trail leads south through the forest.",
        "trail" : "The dark and dusty trail seems fragile compared to the massive trunks, and in\n"+
            "some places, giant grey roots have broken up through its surface.",
        ({"tree", "trees", "trunk", "trunks"}) : "These ancient trees must have been here for many, many years.  It is impossible\n"+
	    "to catch even a glimpse of anything above the lowest branches.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/61.zon/meals/6106_toadstool" : 1,
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/61.zon/rm_6110",
        "south" : "/domains/diku-alfa/room/61.zon/rm_6112",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A narrow trail through the deep, dark forest, Of zone : 12. V-Number
: 6111, R-number : 356
Sector type : ForestSpecial procedure : No
Room flags: DARK INDOORS 
Description:
You are on a dusty trail winding its way north-south between huge, ancient
trees that loom ominously above you.
Extra description keywords(s): 
tree trees trunk trunks
trail

------- Chars present -------

--------- Contents ---------
toadstool

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The narrow, dusty trail leads north through the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6110

Direction south . Keyword : (null)
Description:
  The narrow, dusty trail leads south through the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6112
*/
