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
    SetShort("The T-crossing");
    SetLong("   You are standing at a T-crossing, the main tunnel continues\n"+
	"to the south and west, to the north a small passage leads off into\n"+
	"the darkness. The air is damp and your clothes wet.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "west" : "",
        ] ));

    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4151",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4160",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4155",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The T-crossing, Of zone : 8. V-Number : 4156, R-number : 252
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are standing at a T-crossing, the main tunnel continues
to the south and west, to the north a small passage leads off into
the darkness. The air is damp and your clothes wet.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4151

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4160

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4155
*/
