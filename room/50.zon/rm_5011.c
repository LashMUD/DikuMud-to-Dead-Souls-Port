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
    SetLong("   You are walking on the long, narrow path through the foothills.\n"+
	"To your east you see a T-intersection and to the west the path\n"+
	"continues far.");
    SetItems( ([ 
        "east" : "You can go to the T-intersection this way.",
        "west" : "You can see the long path through the plains.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5012",
        "west" : "/domains/diku-alfa/room/50.zonrm_/5010",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Path in the foothills, Of zone : 9. V-Number : 5011, R-number : 280
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are walking on the long, narrow path through the foothills.
To your east you see a T-intersection and to the west the path
continues far.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You can go to the T-intersection this way.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5012

Direction west . Keyword : (null)
Description:
  You can see the long path through the plains.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5010
*/
