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
    SetShort("In a dusty Tomb");
    SetLong(" You are in a dark burial chamber beneath a large tomb stone.\n"+
      "The only exit appears to be up.");
    SetInventory( ([
        "/domains/diku-alfa/room/36.zon/npc/3601_zombie" : 1,
      ]) );
    SetExits( ([
        "up" : "/domains/diku-alfa/room/36.zon/rm_3644",
        ]) );
    SetDoor("up", "/domains/diku-alfa/room/doors/3644_3645");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: In a dusty Tomb, Of zone : 6. V-Number : 3645, R-number : 154
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
  You are in a dark burial chamber beneath a large tomb stone.
The only exit appears to be up.

Extra description keywords(s): None
------- Chars present -------
corpse zombie(MOB)

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : tomb stone
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 3644
*/
