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
    SetShort("A junction in the deep, dark forest");
    SetLong("You are by a junction where three paths meet.  Ancient grey trees tower above\n"+
        "you on all sides.  Paths lead east, south and west.");
    SetItems( ([ 
        "east" : "The narrow path winds its way through the trees to the east.",
        "south" : "The narrow path winds its way through the trees to the south.",
        "west" : "The narrow path winds its way through the trees to the west.",
        ({"tree", "trees", "trunk", "trunks"}) : "The ancient grey giants seem to observe you silently.",
        ({"path", "paths"}) : "The path seems all too frail.  One of the giant roots could probably crush it\n"+
            "in a single blow.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/61.zon/rm_6105",
        "south" : "/domains/diku-alfa/room/61.zon/rm_6117",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6107",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: A junction in the deep, dark forest, Of zone : 12. 
V-Number : 6106, R-number : 351
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are by a junction where three paths meet.  Ancient grey trees tower above
you on all sides.  Paths lead east, south and west.
Extra description keywords(s): 
path paths
tree trees trunk trunks

------- Chars present -------
tree ancient(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6105

Direction south . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6117

Direction west . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6107
*/
