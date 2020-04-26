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
	"the beautifull landscaping here. The path leads north and south.\n"+
	"To the east and the west you have the grassy plains.");
    SetItems( ([ 
        "north" : "You notice nothing special, except that the path in the plains continues.",
        "east" : "To the east you notice the grassy plains.",
        "south" : "You notice nothing special, except that the path in the plains continues.",
        "west" : "To the west you can see more of the beautifull grassy plains.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5004",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5017",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5002",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5015",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Path in the plains, Of zone : 9. V-Number : 5003, R-number : 272
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are walking on a path situated in the rough plains.
You feel the strong winds blow through your hair as you study
the beautifull landscaping here. The path leads north and south.
To the east and the west you have the grassy plains.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You notice nothing special, except that the path in the plains continues.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5004

Direction east . Keyword : (null)
Description:
  To the east you notice the grassy plains.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5017

Direction south . Keyword : (null)
Description:
  You notice nothing special, except that the path in the plains continues.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5002

Direction west . Keyword : (null)
Description:
  To the west you can see more of the beautifull grassy plains.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5015
*/
