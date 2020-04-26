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
    SetLong("You are on a narrow path leading through the deep, dark forest.  You feel as\n"+
        "if the ancient trees observe you in watchful silence.  The path continues north\n"+
        "and west.");
    SetItems( ([ 
        "north" : "The narrow path winds its way through the trees to the north.",
        "west" : "The narrow path winds its way through the trees to the west.",
        ({"tree", "trees", "trunk", "trunks"}) : "The ancient grey giants seem to observe you silently.",
            "path" : "The path seems all too frail.  One of the giant roots could probably crush it\n"+
            "in a single blow.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/61.zon/rm_6116",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6114",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A small path in the deep, dark forest, Of zone : 12. V-Number : 6115, R-number : 360
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are on a narrow path leading through the deep, dark forest.  You feel as
if the ancient trees observe you in watchful silence.  The path continues north
and west.
Extra description keywords(s): 
path
tree trees trunk trunks

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6116

Direction west . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6114
*/
