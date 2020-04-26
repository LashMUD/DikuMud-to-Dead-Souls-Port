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
    SetShort("A dead end path on the river bank in the deep, dark forest");
    SetLong("You are on a narrow path leading through the deep, dark forest.  The ancient\n"+
        "trees stand so close that the path disappears between the dusty roots.  To the\n"+
        "south a dark river flows from east to west.  The only exit appears to be east.");
    SetItems( ([ 
        "east" : "The narrow path winds its way through the trees to the east.",
        "river" : "The river flows fast and strong.  It is black or looks so in the gloom.",
        ({"bank", "banks", "tree", "trees", "trunk", "trunks"}) :
            "The ancient crowns of trees on both banks reach together forming a dense roof\n"+
            "above the dark river.",
        "path" : "The path seems all too frail.  One of the giant roots could probably crush it\n"+
            "in a single blow.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/61.zon/rm_6120",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A dead end path on the river bank in the deep, dark forest, Of zone : 12. V-Number : 6121, R-number : 366
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are on a narrow path leading through the deep, dark forest.  The ancient
trees stand so close that the path disappears between the dusty roots.  To the
south a dark river flows from east to west.  The only exit appears to be east.
Extra description keywords(s): 
path
bank banks tree trees trunk trunks
river

------- Chars present -------
tree ancient(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6120
*/
