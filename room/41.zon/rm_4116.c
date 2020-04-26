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

    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("The passage");
    SetLong("   You are in a passage that leads north-south. You notice a small\n"+
	"light to the south.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "light" : "Well you can't see where it comes from..",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4113",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4120",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The passage, Of zone : 8. V-Number : 4116, R-number : 236
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a passage that leads north-south. You notice a small
light to the south.

Extra description keywords(s): 
light

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4113

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4120
*/
