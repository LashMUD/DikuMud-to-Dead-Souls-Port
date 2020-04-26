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
        "east, the forest gradually seems to become lighter.");
     SetItems( ([ 
        "east" : "The trail continues eastwards to the younger part of the forest.",
        "west" : "You see the narrow trail winding westwards through the dense forest.",
        "trail" : "The forest trail seems almost fragile compared to the massive trunks.",
        ({"tree", "trees"}) : "The dense crowns of the mature trees leave only a fraction of the sky to be\n"+
	    "seen through the leaves.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/60.zon/rm_6002",
        "west" : "/domains/diku-alfa/room/60.zon/rm_6004",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A trail through the dense forest, Of zone : 11. V-Number : 6003,
R-number : 324
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are on a trail leading east and west through the dense forest.  To the
east, the forest gradually seems to become lighter.
Extra description keywords(s): 
tree trees
trail

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The trail continues eastwards to the younger part of the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6002

Direction west . Keyword : (null)
Description:
  You see the narrow trail winding westwards through the dense forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6004
*/
