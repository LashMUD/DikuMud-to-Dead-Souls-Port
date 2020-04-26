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
    SetLong("  You walk in some grassy plains. The wind is strong and rough. To the\n"+
	"north you can see the foothills and further on mountainpeaks are visible.");
    SetItems( ([ 
        "north" : "The plains extend into small foothills to the north.",
        "east" : "East of here you see a winding path in the plains.",
        "south" : "The plains extend far to the south.",
        "west" : "The plains extend far to the west.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5022",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5005",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5015",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5019",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Grassy plains, Of zone : 9. V-Number : 5020, R-number : 289
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
  You walk in some grassy plains. The wind is strong and rough. To the
north you can see the foothills and further on mountainpeaks are visible.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The plains extend into small foothills to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5022

Direction east . Keyword : (null)
Description:
  East of here you see a winding path in the plains.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5005

Direction south . Keyword : (null)
Description:
  The plains extend far to the south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5015

Direction west . Keyword : (null)
Description:
  The plains extend far to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5019
*/
