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
    SetLong("You are on a dusty trail winding its way east-west between huge, ancient trees\n"+
        "that stand close on all sides.  Not a sound is to be heard - everything is\n"+
        "ominously quiet.");
    SetItems( ([ 
        "east" : "The narrow, dusty trail leads east through the forest.",
        "west" : "The narrow, dusty trail leads west through the forest.",
        "trail" : "The dark and dusty trail seems fragile compared to the massive trunks, and in\n"+
	"some places, giant grey roots have broken up through its surface.",
        "path" : "The path seems fragile and unsafe compared to the enourmous trunks that loom\n"+
            "around it.",
        ({"tree", "trees", "trunk", "trunks"}) : "These ancient trees must have been here for many, many years.  It is impossible\n"+
	    "to catch even a glimpse of anything above the lowest branches.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/61.zon/rm_6101",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6103",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A narrow trail through the deep, dark forest, Of zone : 12. 
V-Number: 6102, R-number : 347
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are on a dusty trail winding its way east-west between huge, ancient trees
that stand close on all sides.  Not a sound is to be heard - everything is
ominously quiet.
Extra description keywords(s): 
tree trees trunk trunks
path
trail

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The narrow, dusty trail leads east through the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6101

Direction west . Keyword : (null)
Description:
  The narrow, dusty trail leads west through the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6103
*/
