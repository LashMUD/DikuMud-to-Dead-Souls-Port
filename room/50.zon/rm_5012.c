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
    SetShort("The path intersection");
    SetLong("   You are standing on an intersection between 3 path's.\n"+
	"To the west you can follow a long, narrow path through the foothills.\n"+
	"To the north a wide path leads to the Village of Ofcol and an\n"+
	"ancient path leads towards the south.");
    SetItems( ([ 
        "north" : "The wide road to Ofcol runs here.",
        "south" : "Here is a partially hidden, ancient looking path.",
        "west" : "You can see the long narrow path running through the foothills.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5013",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5032",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5011",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The path intersection, Of zone : 9. V-Number : 5012, R-number : 281
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on an intersection between 3 path's.
To the west you can follow a long, narrow path through the foothills.
To the north a wide path leads to the Village of Ofcol and an
ancient path leads towards the south.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The wide road to Ofcol runs here.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5013

Direction south . Keyword : (null)
Description:
  Here is a partially hidden, ancient looking path.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5032

Direction west . Keyword : (null)
Description:
  You can see the long narrow path running through the foothills.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5011
*/
