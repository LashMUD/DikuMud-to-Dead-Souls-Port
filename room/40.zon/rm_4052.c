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
    SetShort("The tunnel");
    SetLong("   You are in an east-west leading tunnel.");
    SetItems( ([ 
        "east" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4054_white_centipede" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/41.zon/rm_4100",
        "west" : "/domains/diku-alfa/room/40.zon/rm_4051",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The tunnel, Of zone : 7. V-Number : 4052, R-number : 197
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in an east-west leading tunnel.

Extra description keywords(s): None
------- Chars present -------
centipede(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4100

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4051
*/
