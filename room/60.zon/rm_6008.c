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
    SetShort("The forest clearing");
    SetLong("You are in a clearing in the forest.  Lots of fresh stumps of varying sizes\n"+
        "protrude from the ground and heavy logs are stacked neatly in a big pile\n"+
        "supported by stakes set into the ground.  Paths lead north, east and west.");
    SetItems( ([ 
        "north" : "The small path leads north through the trees.",
        "east" : "The small path leads east through the trees.",
        "west" : "The small path leads west through the trees.",
        ({"log", "logs"}) : "Even though the logs have been chopped to shorter pieces, they are quite heavy\n"+
	    "as they are fresh and still filled with sap.",
        ({"path", "paths"}) : "The narrow path is probably used by the animals living in the forest.",
        ({"stake", "stakes"}) : "The stakes keep the logs from rolling down.",
        ({"stump", "stumps"}) : "There are more stumps than logs and some of the stumps are partly covered in\n"+
	    "moss.",
        ({"tree", "trees"}) : "The trees are mostly old beeches and oaks.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/60.zon/rm_6011",
        "east" : "/domains/diku-alfa/room/60.zon/rm_6009",
        "west" : "/domains/diku-alfa/room/60.zon/rm_6007",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: The forest clearing, Of zone : 11. V-Number : 6008, R-number : 329
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are in a clearing in the forest.  Lots of fresh stumps of varying sizes
protrude from the ground and heavy logs are stacked neatly in a big pile
supported by stakes set into the ground.  Paths lead north, east and west.
Extra description keywords(s): 
tree trees
stump stumps
stake stakes
path paths
log logs

------- Chars present -------
john lumberjack(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The small path leads north through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6011

Direction east . Keyword : (null)
Description:
  The small path leads east through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6009

Direction west . Keyword : (null)
Description:
  The small path leads west through the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6007
*/
