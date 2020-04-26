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
    SetShort("The large cave");
    SetLong("   You are in the east end of the large cave.");
    SetItems( ([ 
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4002_small_centipede" : 1,
        ]) );
SetExits( ([
        "west" : "/domains/diku-alfa/room/40.zon/rm_4016",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The large cave, Of zone : 7. V-Number : 4017, R-number : 180
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in the east end of the large cave.

Extra description keywords(s): None
------- Chars present -------
centipede(MOB)

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4016
*/
