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
    SetShort("Grassy foothills");
    SetLong("   You walk in the grassy Foothills north of the plains. The wind is rough.\n"+
	"To the north you can see foothills and just behind them mountainpeaks\n"+
	"are visible.");
    SetItems( ([ 
        "north" : "The small foothills extend info foothills far to the north.",
        "east" : "East of here the foothills are lower, you notice a small pool.",
        "south" : "The small foothills extend into plains far to the south.",
        "west" : "The small foothills extend far to the west.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5024",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5026",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5020",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5030",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Grassy foothills, Of zone : 9. V-Number : 5022, R-number : 291
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
   You walk in the grassy Foothills north of the plains. The wind is rough.
To the north you can see foothills and just behind them mountainpeaks
are visible.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The small foothills extend info foothills far to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5024

Direction east . Keyword : (null)
Description:
  East of here the foothills are lower, you notice a small pool.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5026

Direction south . Keyword : (null)
Description:
  The small foothills extend into plains far to the south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5020

Direction west . Keyword : (null)
Description:
  The small foothills extend far to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5030
*/
