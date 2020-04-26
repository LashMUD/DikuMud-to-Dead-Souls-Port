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

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("On a small, grassy field");
    SetLong("You are in a small, grassy field somewhere in the forest.  The tall grass\n"+
        "nearly reaches your waist, and the surrounding oaks and beeches form an almost\n"+
        "wall-like thicket on all sides of the field.  A small path leads south through\n"+
        "the trees.");
    SetItems( ([ 
        "south" : "The small path leads south in between the trees.",
        "grass" : "The tall grass makes a nice hiding place for animals.",
        "path" : "The narrow path is probably used by the animals living in the forest.",
        ({"tree", "trees", "thicket"}) : "The trees form a close thicket.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/60.zon/npc/6004_deer" : 1,
        "domains/diku-alfa/room/60.zon/meals/6010_blackberries" : 1,
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/60.zon/rm_6018",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: On a small, grassy field, Of zone : 11. V-Number : 6023, R-number : 344
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
You are in a small, grassy field somewhere in the forest.  The tall grass
nearly reaches your waist, and the surrounding oaks and beeches form an almost
wall-like thicket on all sides of the field.  A small path leads south through
the trees.
Extra description keywords(s): 
tree trees thicket
path
grass

------- Chars present -------
deer(MOB)

--------- Contents ---------
blackberries

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  The small path leads south in between the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6018
*/
