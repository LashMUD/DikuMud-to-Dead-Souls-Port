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
    SetShort("At the end of the trail through the deep, dark forest");
    SetLong("You are on a dusty trail leading through the deep, dark forest.  Ancient grey\n"+
        "trees loom all around you.  The only exit is east.");
    SetItems( ([ 
        "east" : "The dusty trail leads east through the trees.",
        ({"tree", "trees", "trunk", "trunks"}) : "The ancient grey giants seem to observe you silently.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/61.zon/rm_6136",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: At the end of the trail through the deep, dark forest, Of zone : 12. V-Number : 6137, R-number : 382
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are on a dusty trail leading through the deep, dark forest.  Ancient grey
trees loom all around you.  The only exit is east.
Extra description keywords(s): 
tree trees trunk trunks

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The dusty trail leads east through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6136
*/
