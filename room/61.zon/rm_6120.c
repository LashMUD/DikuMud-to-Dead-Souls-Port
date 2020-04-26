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
    SetShort("On the river bank in the deep, dark forest");
    SetLong("You are on a narrow path leading through the deep, dark forest.  To the south a\n"+
        "fast river is flowing westwards through the forest.  Ancient grey trees loom on\n"+
        "both banks.  The path continues north and west.");
    SetItems( ([ 
        "north" : "The narrow path winds its way through the trees to the north.",
        "west" : "The narrow path winds its way through the trees to the west.",
        "river" : "The river flows fast and strong.  It is black or looks so in the gloom.",
        ({"bank", "banks", "tree", "trees", "trunk", "trunks"}) : 
            "The ancient crowns of trees on both banks reach together forming a dense roof\n"+
            "above the dark river.",
        "path" : "The path seems all too frail.  One of the giant roots could probably crush it\n"+
            "in a single blow.",
        ] ));

    SetInventory( ([
        "domains/diku-alfa/room/61.zon/npc/6110_tree_ancient" : 1,
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/61.zon/rm_6119",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6121",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: On the river bank in the deep, dark forest, Of zone : 12. V-Number : 6120, R-number : 365
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are on a narrow path leading through the deep, dark forest.  To the south a
fast river is flowing westwards through the forest.  Ancient grey trees loom on
both banks.  The path continues north and west.
Extra description keywords(s): 
path
bank banks tree trees trunk trunks
river

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6119

Direction west . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6121
*/
