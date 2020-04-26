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
    SetLong("You are on a narrow path leading through the deep, dark forest.  Ancient,\n"+
        "grey trees loom everywhere.  The tree trunks here seem to be covered in some\n"+
        "sticky substance.  The path continues south and west.");
    SetItems( ([ 
        "south" : "The narrow path winds its way through the trees to the south.",
        "west" : "The narrow path winds its way through the trees to the west.",
        ({"substance", "rope", "ropes", "thread", "threads"}) :
            "The substance reminds you of giant threads covered with glue.  If it had not\n"+
            "been for the size you could have sworn it was part of a spider web.",
        ({"tree", "trees", "trunk", "trunks"}) :
            "The ancient grey giants seem to observe you silently.",
        "path" : "The path seems all too frail.  One of the giant roots could probably crush it\n"+
            "in a single blow.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/61.zon/rm_6110",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6130",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A small path in the deep, dark forest, Of zone : 12. V-Number : 6144, R-number : 385
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are on a narrow path leading through the deep, dark forest.  Ancient,
grey trees loom everywhere.  The tree trunks here seem to be covered in some
sticky substance.  The path continues south and west.
Extra description keywords(s): 
path
tree trees trunk trunks
substance rope ropes thread threads

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6110

Direction west . Keyword : (null)
Description:
  The narrow path winds its way through the trees to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6130
*/
