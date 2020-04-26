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
    SetShort("The large tunnel");
    SetLong("   You are in a large tunnel leading from the south to the east. The\n"+
	"air is damp in the area.");
    SetItems( ([ 
        "east" : "",
        "south" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4159_troll_small" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/41.zon/rm_4154",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4157",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The large tunnel, Of zone : 8. V-Number : 4153, R-number : 249
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a large tunnel leading from the south to the east. The
air is damp in the area.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4154

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4157
*/
