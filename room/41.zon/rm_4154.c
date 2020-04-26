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

    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(0);
    SetShort("The large tunnel");
    SetLong("   You are in a large east-west leading tunnel, the air is damp and\n"+
	"the floor is wet.");
    SetItems( ([ 
        "east" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/41.zon/rm_4155",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4153",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The large tunnel, Of zone : 8. V-Number : 4154, R-number : 250
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a large east-west leading tunnel, the air is damp and
the floor is wet.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4155

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4153
*/
