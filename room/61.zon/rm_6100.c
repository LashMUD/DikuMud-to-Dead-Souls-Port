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
    SetLong("You are on a narrow trail winding its way between the enormous, grey trunks.\n"+
        "The crowns of the trees must be very dense, as they leave the forest floor in\n"+
        "utter darkness.  The trail leads east and west.");
    SetItems( ([ 
        "east" : "The narrow trail leads east to a somewhat lighter part of the forest.",
        "west" : "The narrow, dusty trail leads west through the forest.",
        "trail" : "The dark and dusty trail seems fragile compared to the massive trunks, and in\n"+
            "some places, giant grey roots have broken up through its surface.",
        ({"tree", "trees", "trunk", "trunks"}) : "These ancient trees must have been here for many, many years.  It is impossible\n"+
	    "to catch even a glimpse of anything above the lowest branches.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/61.zon/npc/6115_brownie" : 1,
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/60.zon/rm_6004",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6101",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A narrow trail through the deep, dark forest, Of zone : 12. 
V-Number: 6100, R-number : 345
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are on a narrow trail winding its way between the enormous, grey trunks.
The crowns of the trees must be very dense, as they leave the forest floor in
utter darkness.  The trail leads east and west.
Extra description keywords(s): 
tree trees trunk trunks
trail

------- Chars present -------
shargugh brownie(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The narrow trail leads east to a somewhat lighter part of the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6004

Direction west . Keyword : (null)
Description:
  The narrow, dusty trail leads west through the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6101
*/
