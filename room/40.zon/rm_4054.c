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
    SetAmbientLight(30);
    SetShort("The light cave");
    SetLong("   You are in a cave, to south from you there is a large fire that lights\n"+
	"the entire cave, to the east and west tunnels leads off.");
    SetItems( ([ 
        "east" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/40.zon/rm_4055",
        "south" : "/domains/diku-alfa/room/40.zon/rm_4056",
        "west" : "/domains/diku-alfa/room/40.zon/rm_4053",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The light cave, Of zone : 7. V-Number : 4054, R-number : 199
Sector type : Field Special procedure : No
Room flags: INDOORS 
Description:
   You are in a cave, to south from you there is a large fire that lights
the entire cave, to the east and west tunnels leads off.

Extra description keywords(s): None
------- Chars present -------
warrior(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4055

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4056

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4053
*/
