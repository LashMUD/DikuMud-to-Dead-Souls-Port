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
    SetLong("   You are standing in water, the tunnel continues both to the\n"+
	"north and south.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4161",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4169",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: In the water, Of zone : 8. V-Number : 4165, R-number : 261
Sector type : Water Swim Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are standing in water, the tunnel continues both to the
north and south.

Extra description keywords(s): None
------- Chars present -------
orc(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4161

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4169
*/
