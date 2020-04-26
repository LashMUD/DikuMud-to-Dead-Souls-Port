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
    SetLong("   You are in the western part of the large cave, to the west you see\n"+
        "a damp tunnel.");
    SetItems( ([ 
        "east" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4002_small_centipede" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/40.zon/rm_4016",
        "west" : "/domains/diku-alfa/room/40.zon/rm_4022",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The large cave, Of zone : 7. V-Number : 4023, R-number : 186
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in the western part of the large cave, to the west you see
a damp tunnel.

Extra description keywords(s): None
------- Chars present -------
kobold(MOB)
centipede(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4016

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4022
*/
