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
    SetShort("At the cliff");
    SetLong("   You are on a little cliff in the water, to the north you\n"+
	"see the end of the main tunnel.");
    SetItems( ([ 
        "north" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4168",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: At the cliff, Of zone : 8. V-Number : 4172, R-number : 268
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are on a little cliff in the water, to the north you
see the end of the main tunnel.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4168
*/
