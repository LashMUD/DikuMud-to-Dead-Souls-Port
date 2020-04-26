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
    SetShort("A junction in the deep, dark forest");
    SetLong("You are by a junction where three paths meet.  Ancient, grey trees seem to\n"+
        "observe you silently you from all sides.  Paths lead north, east and west.");
    SetItems( ([ 
        "north" : "The narrow path winds its way through the trees to the north.",
        "east" : "The narrow path winds its way through the trees to the east.",
        "west" : "The narrow path winds its way through the trees to the west.",
        ({"tree", "trees", "trunk", "trunks"}) : "The ancient grey giants seem to observe you silently.",
        ({"path", "paths"}) : "The path seems all too frail.  One of the giant roots could probably crush it\n"+
            "in a single blow.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/61.zon/rm_6106",
        "east" : "/domains/diku-alfa/room/61.zon/rm_6118",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6116",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A junction in the deep, dark forest, Of zone : 12. V-Number : 6117, R-number : 362
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are by a junction where three paths meet.  Ancient, grey trees seem to
observe you silently you from all sides.  Paths lead north, east and west.
Extra description keywords(s): 
path paths
tree trees trunk trunks

------- Chars present -------
warg vicious(MOB)
wolf black(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6106

Direction east . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6118

Direction west . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6116
*/
