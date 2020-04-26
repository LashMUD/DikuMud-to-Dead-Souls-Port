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
    
    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(0);
    SetShort("The cave");
    SetLong("   You are in the south end of a cave, to the south you see a tunnel. You\n"+
	"notice a large pile of bones in the corner.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        ({"pile", "bones"}) : "Well you better watch out - some of the bones are human !",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4025",
        "south" : "/domains/diku-alfa/room/40.zon/rm_4014",
        ] ));
}

void init(){
   ::init();
}
/* Extra Information Original Diku Output 
Room name: The cave, Of zone : 7. V-Number : 4018, R-number : 181
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in the south end of a cave, to the south you see a tunnel. You
notice a large pile of bones in the corner.

Extra description keywords(s): 
pile bones

------- Chars present -------
orc(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4025

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4014
*/
