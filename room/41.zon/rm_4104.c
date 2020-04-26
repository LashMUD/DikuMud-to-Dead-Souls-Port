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
    SetShort("The long tunnel");
    SetLong("   You are in a long east-west leading tunnel. The tunnel starts sloping\n"+
	"down towards the west.");
    SetItems( ([ 
        "east" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/41.zon/rm_4103",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4152",
        ] ));
}

void init(){
   ::init();
}
/* Extra Information Original Diku Output 
Room name: The long tunnel, Of zone : 8. V-Number : 4104, R-number : 224
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a long east-west leading tunnel. The tunnel starts sloping
down towards the west.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4103

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4152
*/
