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
	"You feel the strong winds blow through your hair as you watch the\n"+
	"beautifull landscaping here. To the east and west you see the grassy plains.\n"+
	"The path extends into small foothills to the north and also continues south.");
    SetItems( ([ 
        "north" : "The path continues into the small foothills.",
        "east" : "You see the grassy plains here.",
        "south" : "The path continues towards Midgaard.",
        "west" : "You see the grassy plains here.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5006",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5021",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5004",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5020",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Path in the plains, Of zone : 9. V-Number : 5005, R-number : 274
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are walking on a path situated in the rough plains.
You feel the strong winds blow through your hair as you watch the
beautifull landscaping here. To the east and west you see the grassy plains.
The path extends into small foothills to the north and also continues south.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The path continues into the small foothills.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5006

Direction east . Keyword : (null)
Description:
  You see the grassy plains here.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5021

Direction south . Keyword : (null)
Description:
  The path continues towards Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5004

Direction west . Keyword : (null)
Description:
  You see the grassy plains here.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5020
*/
