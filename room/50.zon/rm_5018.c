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

    SetAmbientLight(30);
    SetShort("Grassy plains");
    SetLong("   You walk in the beautifull grassy plains. The wind is strong and rough.\n"+
	"Far to the north you can see the foothills and further on mountainpeaks\n"+
	"are visible.");
    SetItems( ([ 
        "north" : "The plains extend far to the north.",
        "east" : "The plains extend far to the east.",
        "south" : "The plains extend far to the south.",
        "west" : "The plains is gradually replaced with light forrest in this direction.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/50.zon/npc/6001_rabbit" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5019",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5015",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5016",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Grassy plains, Of zone : 9. V-Number : 5018, R-number : 287
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
   You walk in the beautifull grassy plains. The wind is strong and rough.
Far to the north you can see the foothills and further on mountainpeaks
are visible.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The plains extend far to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5019

Direction east . Keyword : (null)
Description:
  The plains extend far to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5015

Direction south . Keyword : (null)
Description:
  The plains extend far to the south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5016

Direction west . Keyword : (null)
Description:
  The plains is gradually replaced with light forrest in this direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
