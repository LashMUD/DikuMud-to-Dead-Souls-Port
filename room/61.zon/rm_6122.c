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
    SetShort("A small path in the deep, dark forest");
    SetLong("You are on a narrow path leading through the deep, dark forest.  Giant, grey\n"+
        "trees loom ominously all around.  The path continues east and south.");
    SetItems( ([ 
        "east" : "The narrow path winds its way through the trees to the east.",
        "south" : "The narrow path winds its way through the trees to the south.",
        ({"tree", "trees", "trunk", "trunks"}) : "The ancient grey giants seem to observe you silently.",
            "path" : "The path seems all too frail.  One of the giant roots could probably crush it\n"+
            "in a single blow.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/61.zon/meals/6106_toadstool" : 1,
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/61.zon/rm_6114",
        "south" : "/domains/diku-alfa/room/61.zon/rm_6123",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A small path in the deep, dark forest, Of zone : 12. V-Number : 6122, R-number : 367
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are on a narrow path leading through the deep, dark forest.  Giant, grey
trees loom ominously all around.  The path continues east and south.
Extra description keywords(s): 
path
tree trees trunk trunks

------- Chars present -------

--------- Contents ---------
toadstool

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6114

Direction south . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6123
*/
