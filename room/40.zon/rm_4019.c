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
    SetLong("   You are in a north-south leading tunnel.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4026",
        "south" : "/domains/diku-alfa/room/40.zon/rm_4015",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The tunnel, Of zone : 7. V-Number : 4019, R-number : 182
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a north-south leading tunnel.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4026

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4015
*/
