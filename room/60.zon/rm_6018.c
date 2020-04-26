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
    SetShort("An intersection in the light forest");
    SetLong("You are on a small path leading through the forest.  A path leads north to a\n"+
        "small field and other paths lead east and west into the dense forest.");
    SetItems( ([ 
        "north" : "The path leads north to a small, grassy field.",
        "east" : "The path leads east to a dense part of the forest.",
        "west" : "The path leads west to a dense part of the forest.",
        ({"path", "paths"}) : "The narrow path is probably used by the animals living in the forest.",
        ({"tree", "trees"}) : "The tall trees are young and slender, not much more than a hundred years or so.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/60.zon/rm_6023",
        "east" : "/domains/diku-alfa/room/60.zon/rm_6017",
        "west" : "/domains/diku-alfa/room/60.zon/rm_6019",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: An intersection in the light forest, Of zone : 11. V-Number : 6018,
R-number : 339
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are on a small path leading through the forest.  A path leads north to a
small field and other paths lead east and west into the dense forest.
Extra description keywords(s): 
tree trees
path paths

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The path leads north to a small, grassy field.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6023

Direction east . Keyword : (null)
Description:
  The path leads east to a dense part of the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6017

Direction west . Keyword : (null)
Description:
  The path leads west to a dense part of the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6019
*/
