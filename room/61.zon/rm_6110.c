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
    SetLong("You are on a dusty trail winding its way between huge, ancient trees that stand\n"+
        "close on all sides.  The trail leads east and south.  To the north, a narrow\n"+
        "path leads away from the trail.");
    SetItems( ([ 
        "north" : "The narrow path leads west between the giant trees.",
        "east" : "The narrow, dusty trail leads east through the forest.",
        "south" : "The narrow, dusty trail leads south through the forest.",
        "trail" : "The dark and dusty trail seems fragile compared to the massive trunks, and in\n"+
            "some places, giant grey roots have broken up through its surface.",
        "path" : "The path seems fragile and unsafe compared to the enourmous trunks that loom\n"+
            "around it.",
        ({"tree", "trees", "trunk", "trunks"}) : "Some of the trunks to the west are covered in a thin, almost transparent\n"+
	    "substance.  It looks like small threads woven carefully together.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/61.zon/rm_6144",
        "east" : "/domains/diku-alfa/room/61.zon/rm_6109",
        "south" : "/domains/diku-alfa/room/61.zon/rm_6111",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A narrow trail through the deep, dark forest, Of zone : 12. 
V-Number: 6110, R-number : 355
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are on a dusty trail winding its way between huge, ancient trees that stand
close on all sides.  The trail leads east and south.  To the north, a narrow
path leads away from the trail.
Extra description keywords(s): 
tree trees trunk trunks
path
trail

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The narrow path leads west between the giant trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6144

Direction east . Keyword : (null)
Description:
  The narrow, dusty trail leads east through the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6109

Direction south . Keyword : (null)
Description:
  The narrow, dusty trail leads south through the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6111
*/
