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
    SetAmbientLight(30);
    SetShort("The south end of the pool");
    SetLong("You standing in water up to you neck.\n"+
        "You can only see water.");
    SetItems( ([ 
        "north" : "You can see calm water.",
        "east" : "To dark to tell, but you can feel something nearby.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7041_hag_sea" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7442",
        "east" : "/domains/diku-alfa/room/74.zon/rm_7445",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The south end of the pool, Of zone : 17. V-Number : 7444, R-number : 568
Sector type : Mountains Special procedure : No
Room flags: INDOORS 
Description:
You standing in water up to you neck.
You can only see water.
Extra description keywords(s): None
------- Chars present -------
sea hag(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can see calm water.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7442

Direction east . Keyword : (null)
Description:
  To dark to tell, but you can feel something nearby.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7445
*/
