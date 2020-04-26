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
    SetShort("Path in the foothills");
    SetLong("   You are walking on a path situated in foothills.\n"+
	"To the west you sense a certain freshness and the path continues\n"+
	"south and east.");
    SetItems( ([ 
        "east" : "You see the path continues in the foothills.",
        "south" : "You see the path continues in the foothills.",
        "west" : "You see grassy plains and perhaps some crystal clear water.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5010",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5008",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5026",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Path in the foothills, Of zone : 9. V-Number : 5009, R-number : 278
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are walking on a path situated in foothills.
To the west you sense a certain freshness and the path continues
south and east.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see the path continues in the foothills.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5010

Direction south . Keyword : (null)
Description:
  You see the path continues in the foothills.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5008

Direction west . Keyword : (null)
Description:
  You see grassy plains and perhaps some crystal clear water.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5026
*/
