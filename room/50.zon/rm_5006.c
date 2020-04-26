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
    SetShort("Path in foothills");
    SetLong("  You are on the path leading through the small foothills.\n"+
	"The wind blow through your hair as you study the beautifull\n"+
	"landscaping here. From the north you sense a certain freshness.\n"+
	"The path continues east and south. You smell freshness from north.");
    SetItems( ([ 
        "north" : "You see grassy plains and perhaps some crystal clear water.",
        "east" : "The path continues towards east here.",
        "south" : "The path in the plains wind through the small foothills.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5026",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5007",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5005",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Path in foothills, Of zone : 9. V-Number : 5006, R-number : 275
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
  You are on the path leading through the small foothills.
The wind blow through your hair as you study the beautifull
landscaping here. From the north you sense a certain freshness.
The path continues east and south. You smell freshness from north.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see grassy plains and perhaps some crystal clear water.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5026

Direction east . Keyword : (null)
Description:
  The path continues towards east here.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5007

Direction south . Keyword : (null)
Description:
  The path in the plains wind through the small foothills.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5005
*/
