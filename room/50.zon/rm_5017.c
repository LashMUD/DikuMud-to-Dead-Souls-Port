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
    SetLong("   You walk in the grassy plains among the herbs which grow here. The wind is\n"+
	"strong and rough. Far to the north you can see the foothills and further on\n"+
	"mountainpeaks are visible. City of Midgaard is to the south but so are some\n"+
	"VERY steep slopes.");
    SetItems( ([ 
        "north" : "The plains extend far to the north.",
        "east" : "The plains extend far to the east.",
        "south" : "Some VERY steep slopes prevent you from going this way, it might kill you.",
        "west" : "A small path is running through the plains.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5021",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5038",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5045",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5003",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Grassy plains, Of zone : 9. V-Number : 5017, R-number : 286
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
   You walk in the grassy plains among the herbs which grow here. The wind is
strong and rough. Far to the north you can see the foothills and further on
mountainpeaks are visible. City of Midgaard is to the south but so are some
VERY steep slopes.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The plains extend far to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5021

Direction east . Keyword : (null)
Description:
  The plains extend far to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5038

Direction south . Keyword : (null)
Description:
  Some VERY steep slopes prevent you from going this way, it might kill you.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5045

Direction west . Keyword : (null)
Description:
  A small path is running through the plains.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5003
*/
