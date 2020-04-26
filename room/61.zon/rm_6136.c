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
    SetShort("A dusty trail in the deep, dark forest"); 
    SetLong("You are on a dusty trail leading through the deep, dark forest.  Ancient,\n"+
        "grey trees loom everywhere.  The trail continues south and west.  A broad\n"+
        "irregular path leads eastwards away from the trail.");
    SetItems( ([ 
        "east" : "The trees standing on the sides of the path have scratch marks on them.",
        "south" : "The dusty trail leads south through the trees.",
        "west" : "The dusty trail leads west through the trees.",
        ({"tree", "trees", "trunk", "trunks"}) :
            "To the east the ancient grey giants have many marks as if something with huge\n"+
            "claws has been tearing at them in rage.",
        "path" : "The trees standing on the sides of the path have scratch marks on them.",
        "trail" : "The dark and dusty trail seems fragile compared to the massive trunks, and in\n"+
            "some places, giant grey roots have broken up through its surface.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/61.zon/rm_6142",
        "south" : "/domains/diku-alfa/room/61.zon/rm_6135",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6137",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A dusty trail in the deep, dark forest, Of zone : 12. V-Number : 6136, R-number : 381
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are on a dusty trail leading through the deep, dark forest.  Ancient,
grey trees loom everywhere.  The trail continues south and west.  A broad
irregular path leads eastwards away from the trail.
Extra description keywords(s): 
trail
path
tree trees trunk trunks

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The trees standing on the sides of the path have scratch marks on them.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6142

Direction south . Keyword : (null)
Description:
  The dusty trail leads south through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6135

Direction west . Keyword : (null)
Description:
  The dusty trail leads west through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6137
*/
