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
    SetLong("   You are in a tunnel, only exit is to the east. You sense that the\n"+
        "tunnel leads slightly down.");
    SetItems( ([ 
        "east" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4052_hobgoblin" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/40.zon/rm_4060",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The tunnel, Of zone : 7. V-Number : 4059, R-number : 204
Sector type : Forest Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
   You are in a tunnel, only exit is to the east. You sense that the
tunnel leads slightly down.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4060
*/
