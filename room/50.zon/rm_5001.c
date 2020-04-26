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
	"the beautifull landscaping here. The path continues east and west.");
    SetItems( ([ 
        "east" : "You notice nothing special, except that the path in the plains continues.",
        "west" : "You notice nothing special, except that the path in the plains continues.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5002",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5000",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Path in the plains, Of zone : 9. V-Number : 5001, R-number : 270
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are walking on a path situated in the rough plains.
You feel the strong winds blow through your hair as you study
the beautifull landscaping here. The path continues east and west.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You notice nothing special, except that the path in the plains continues.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5002

Direction west . Keyword : (null)
Description:
  You notice nothing special, except that the path in the plains continues.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5000
*/
