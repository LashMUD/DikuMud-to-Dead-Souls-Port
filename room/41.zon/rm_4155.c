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
    SetLong("   You are in a large tunnel, the tunnel leads west, and to the east\n"+
	"you notice a T-crossing. The air is damp in this area.");
    SetItems( ([ 
        "east" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4150_blue_bat" : 1,
        "/domains/diku-alfa/room/41.zon/npc/4152_green_bat" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/41.zon/rm_4156",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4154",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The large tunnel, Of zone : 8. V-Number : 4155, R-number : 251
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a large tunnel, the tunnel leads west, and to the east
you notice a T-crossing. The air is damp in this area.

Extra description keywords(s): None
------- Chars present -------
troll(MOB)
bat green(MOB)
bat blue(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4156

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4154
*/
