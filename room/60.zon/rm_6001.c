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
    SetLong("You are on a trail leading through the forest.  To the east is the forest edge\n"+
        "and to the west, the trail leads further into the forest.");
    SetItems( ([ 
        "east" : "The trail continues eastwards out of the forest.",
        "west" : "You see the narrow forest trail winding westwards in between the trees.",
        "trail" : "The forest trail winds east-west through the trees.",
        ({"tree", "trees"}) : "The trees here are quite young and fresh.  They seem to accommodate many kinds\n"+
	    "of birds, insects and other small animals.",
        ({"birds", "insects", "animals"}) : "Very cute little creatures, they seem to enjoy life.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/60.zon/rm_6000",
        "west" : "/domains/diku-alfa/room/60.zon/rm_6002",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A trail through the light forest, Of zone : 11. V-Number : 6001,
R-number : 322
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are on a trail leading through the forest.  To the east is the forest edge
and to the west, the trail leads further into the forest.
Extra description keywords(s): 
birds insects animals
tree trees
trail

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The trail continues eastwards out of the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6000

Direction west . Keyword : (null)
Description:
  You see the narrow forest trail winding westwards in between the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6002
*/
