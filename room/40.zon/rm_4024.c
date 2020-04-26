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
    SetShort("The damp tunnel");
    SetLong("   You are in a damp tunnel, that leads west.");
    SetItems( ([ 
        "south" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/40.zon/rm_4022",
        "west" : "/domains/diku-alfa/room/40.zon/rm_4059",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The damp tunnel, Of zone : 7. V-Number : 4024, R-number : 187
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a damp tunnel, that leads west.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4022

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4059
*/
