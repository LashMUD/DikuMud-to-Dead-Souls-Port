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
    SetShort("The hole");
    SetLong("   You are by a hole in the floor, you can leave down, or north.");
    SetItems( ([ 
        "north" : "",
        "down" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4002_small_centipede" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4027",
        "down" : "/domains/diku-alfa/room/40.zon/rm_4064",
        ] ) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The hole, Of zone : 7. V-Number : 4020, R-number : 183
Sector type : Forest Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
   You are by a hole in the floor, you can leave down, or north.

Extra description keywords(s): None
------- Chars present -------
centipede(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4027

Direction down . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4064
*/
