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
    SetShort("The end of the tunnel");
    SetLong("   The tunnel suddenly stops here, only exit is back to the\n"+
	"north. The air is damp here.");
    SetItems( ([ 
        "north" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4159_troll_small" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4164",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The end of the tunnel, Of zone : 8. V-Number : 4168, R-number : 264
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   The tunnel suddenly stops here, only exit is back to the
north. The air is damp here.

Extra description keywords(s): None
------- Chars present -------
orc(MOB)
mage(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4164
*/
