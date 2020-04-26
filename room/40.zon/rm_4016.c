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
    SetShort("The large cave");
    SetLong("   You are in a large cave, the cave continues east and west, to the south\n"+
	"you notice a small tunnel.");
SetItems( ([ 
        "east" : "",
        "south" : "",
        "west" : "",
        ] ));
SetExits( ([
         "east" : "/domains/diku-alfa/room/40.zon/rm_4017",
         "south" : "/domains/diku-alfa/room/40.zon/rm_4012",
         "west" : "/domains/diku-alfa/room/40.zon/rm_4023",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The large cave, Of zone : 7. V-Number : 4016, R-number : 179
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a large cave, the cave continues east and west, to the south
you notice a small tunnel.

Extra description keywords(s): None
------- Chars present -------
kobold(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4017

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4012

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4023
*/
