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
    SetShort("The secret chamber");
    SetLong("   You are in a secret chamber, the room is filled with an evil\n"+
	"feeling.");
    SetItems( ([ 
        "north" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4101_troll" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4117",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The secret chamber, Of zone : 8. V-Number : 4122, R-number : 242
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a secret chamber, the room is filled with an evil
feeling.

Extra description keywords(s): None
------- Chars present -------
troll(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4117
*/
