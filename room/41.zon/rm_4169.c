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
    SetShort("In the water");
    SetLong("   You are standning in the water, exits leads both north and\n"+
	"east.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4158_snake" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4165",
        "east" : "/domains/diku-alfa/room/41.zon/rm_4170",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: In the water, Of zone : 8. V-Number : 4169, R-number : 265
Sector type : Water Swim Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are standning in the water, exits leads both north and
east.

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
To room (V-Number): 4165

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4170
*/
