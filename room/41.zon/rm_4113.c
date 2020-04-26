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
    SetLong("   You are in a passage that leads towards the south. To the east \n"+
	"you see a tunnel.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "south" : "",
        ] ));
    SetInventory( ([
         "/domains/diku-alfa/room/41.zon/npc/4106_warrior" : 1,
         ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4107",
        "east" : "/domains/diku-alfa/room/41.zon/rm_4112",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4116",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The passage, Of zone : 8. V-Number : 4113, R-number : 233
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a passage that leads towards the south. To the east 
you see a tunnel.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4107

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4112

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4116
*/
