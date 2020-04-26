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
    SetLong("  You are walking on a long path in the east-west direction.\n"+
	"The surroundings are green, vegitated foothills.\n"+
	"You are able to force your way through some dense plants to the north.");
    SetItems( ([ 
        "north" : "You can't really see much through the vegitation on the foothills.",
        "east" : "To the east you notice that the path continues towards a T-intersection.",
        "west" : "You just see the path through the foothills.",
        ] ));
    SetExits( ([
         "north" : "/domains/diku-alfa/room/50.zon/rm_5027",
         "east" : "/domains/diku-alfa/room/50.zon/rm_5011",
         "west" : "/domains/diku-alfa/room/50.zon/rm_5009",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Path in the foothills, Of zone : 9. V-Number : 5010, R-number : 279
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
  You are walking on a long path in the east-west direction.
The surroundings are green, vegitated foothills.
You are able to force your way through some dense plants to the north.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can't really see much through the vegitation on the foothills.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5027

Direction east . Keyword : (null)
Description:
  To the east you notice that the path continues towards a T-intersection.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5011

Direction west . Keyword : (null)
Description:
  You just see the path through the foothills.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5009
*/
