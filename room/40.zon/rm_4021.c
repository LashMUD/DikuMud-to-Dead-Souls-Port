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
    SetLong("   You are by a hole in the floor, exits are down or east.");
    SetItems( ([ 
        "east" : "",
        "down" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4003_kobolt" : 2,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/40.zon/rm_4022",
        "down" : "/domains/diku-alfa/room/41.zon/rm_4115",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The hole, Of zone : 7. V-Number : 4021, R-number : 184
Sector type : Forest Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
   You are by a hole in the floor, exits are down or east.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4022

Direction down . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4115
*/
