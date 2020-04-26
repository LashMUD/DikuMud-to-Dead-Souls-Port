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
    SetLong("You are where the dusty trail bends, as to avoid conflict with a colossal\n"+
        "trunk to the west.  Not a sound is to be heard - everything is ominously quiet.\n"+
        "The trail leads east and south.");
    SetItems( ([ 
        "east" : "The narrow, dusty trail leads east through the forest.",
        "south" : "The narrow, dusty trail leads south through the forest.",
        "trail" : "The dark and dusty trail seems fragile compared to the massive trunks, and in\n"+
	"some places, giant grey roots have broken up through its surface.",
        ({"trees", "trunks"}) : "These ancient trees must have been here for many, many years.  It is impossible\n"+
            "to catch even a glimpse of anything above the lowest branches.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/61.zon/obj/6102_tree_hollow" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/61.zon/rm_6102",
        "south" : "/domains/diku-alfa/room/61.zon/rm_6108",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A narrow trail through the deep, dark forest, Of zone : 12. 
V-Number: 6103, R-number : 348
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are where the dusty trail bends, as to avoid conflict with a colossal
trunk to the west.  Not a sound is to be heard - everything is ominously quiet.
The trail leads east and south.
Extra description keywords(s): 
trees trunks
trail

------- Chars present -------

--------- Contents ---------
tree opening

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The narrow, dusty trail leads east through the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6102
Direction south . Keyword : (null)
Description:
  The narrow, dusty trail leads south through the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6108
*/
