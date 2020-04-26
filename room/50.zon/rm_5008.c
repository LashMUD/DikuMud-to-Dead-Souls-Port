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
    SetLong("   You are walking on a narrow path in the foothills.\n"+
	"You feel the strong winds blow through your hair as you study\n"+
	"the beautifull landscaping here. The path goes north and west.");
    SetItems( ([ 
        "north" : "The narrow path through the foothils turns left here.",
        "west" : "To the west you can see the path continues.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5009",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5007",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Path in the foothills, Of zone : 9. V-Number : 5008, R-number : 277
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are walking on a narrow path in the foothills.
You feel the strong winds blow through your hair as you study
the beautifull landscaping here. The path goes north and west.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The narrow path through the foothils turns left here.

Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5009

Direction west . Keyword : (null)
Description:
  To the west you can see the path continues.

Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5007
*/
