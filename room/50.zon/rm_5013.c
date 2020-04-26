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
    SetShort("Road to Ofcol");
    SetLong("   You are walking on a wide road with trail marks on it.\n"+
	"To the north you can the the village of Ofcol and to the south\n"+
	"there is the T-intersection. You can enter the foothills towards\n"+
	"west, as the foothills to your east are way to steep for you to climb.");
    SetItems( ([ 
        "north" : "The road continues towards Ofcol.",
        "south" : "You can see the T-intersection in the souther direction.",
        "west" : "You think you can climb these foothills.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5014",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5012",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5027",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Road to Ofcol, Of zone : 9. V-Number : 5013, R-number : 282
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are walking on a wide road with trail marks on it.
To the north you can the the village of Ofcol and to the south
there is the T-intersection. You can enter the foothills towards
west, as the foothills to your east are way to steep for you to climb.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The road continues towards Ofcol.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5014

Direction south . Keyword : (null)
Description:
  You can see the T-intersection in the souther direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5012

Direction west . Keyword : (null)
Description:
  You think you can climb these foothills.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5027
*/
