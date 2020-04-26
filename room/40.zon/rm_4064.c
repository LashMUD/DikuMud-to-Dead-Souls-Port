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
    SetLong("   You are in a tunnel, only exit is west - Only exit, well there is \n"+
      "also a hole in the ceiling.");
    SetItems( ([ 
        "west" : "",
        "up" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4055_large_hobgoblin" : 1,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/40.zon/rm_4063",
        "up" : "/domains/diku-alfa/room/40.zon/rm_4020",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The tunnel, Of zone : 7. V-Number : 4064, R-number : 209
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a tunnel, only exit is west - Only exit, well there is 
also a hole in the ceiling.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4063

Direction up . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4020
*/
