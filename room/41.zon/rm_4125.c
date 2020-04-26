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
    SetShort("The passage");
    SetLong("   You are in a passage, to the east you see a cave. Light from the\n"+
	"cave lights up the passage. To the north the passage leads into\n"+
	"the darkness..");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4120",
        "east" : "/domains/diku-alfa/room/41.zon/rm_4124",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The passage, Of zone : 8. V-Number : 4125, R-number : 245
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a passage, to the east you see a cave. Light from the
cave lights up the passage. To the north the passage leads into
the darkness..

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4120

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4124
*/
