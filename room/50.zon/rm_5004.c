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

    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("Path in the plains");
    SetLong("   You are walking on a path situated in the rough plains.\n"+
	"You feel the strong winds blow through your hair as you study\n"+
	"the beautifull landscaping here. The Path leads north and south.");
    SetItems( ([ 
        "north" : "The path continues north as small foothills begins to appear.",
        "south" : "The path leads south towards the town.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5005",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5003",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Path in the plains, Of zone : 9. V-Number : 5004, R-number : 273
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are walking on a path situated in the rough plains.
You feel the strong winds blow through your hair as you study
the beautifull landscaping here. The Path leads north and south.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The path continues north as small foothills begins to appear.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5005

Direction south . Keyword : (null)
Description:
  The path leads south towards the town.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5003
*/
