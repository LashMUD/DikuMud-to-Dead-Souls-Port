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

    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("The dark passage.");
    SetLong("   You are in a dark passage, that leads east. In the ceiling you notice\n"+
	"a small hole, just big enough to pass through.");
    SetItems( ([ 
        "east" : "",
        "up" : "",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/41.zon/rm_4114",
        "up" : "/domains/diku-alfa/room/40.zon/rm_4021",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The dark passage., Of zone : 8. V-Number : 4115, R-number : 235
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a dark passage, that leads east. In the ceiling you notice
a small hole, just big enough to pass through.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4114

Direction up . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4021
*/
