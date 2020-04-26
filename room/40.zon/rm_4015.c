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
    SetLong("   You are in a small tunnel, the tunnel continues west.");
    SetItems( ([ 
        "north" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4001_green_snake" : 1,
        "/domains/diku-alfa/room/40.zon/npc/4004_orc" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4019",
        "west" : "/domains/diku-alfa/room/40.zon/rm_4014",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The tunnel, Of zone : 7. V-Number : 4015, R-number : 178
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a small tunnel, the tunnel continues west.

Extra description keywords(s): None
------- Chars present -------
snake(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4019

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4014
*/
