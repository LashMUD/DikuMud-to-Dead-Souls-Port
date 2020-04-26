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
    SetShort("The wet tunnel");
    SetLong("   You are in a wet, north-south leading tunnel, the floor is\n"+
	"partly covered by water.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4151_red_bat" : 1,
        "/domains/diku-alfa/room/41.zon/npc/4154_black_bat" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4153",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4161",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The wet tunnel, Of zone : 8. V-Number : 4157, R-number : 253
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a wet, north-south leading tunnel, the floor is
partly covered by water.

Extra description keywords(s): None
------- Chars present -------
bat black(MOB)
bat red(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4153

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4161
*/
