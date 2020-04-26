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
    SetAmbientLight(30);
    SetShort("The cave");
    SetLong("   You are in a light cave, from torches several feets abouve your\n"+
	"head fire lights the room. The cave continues to the west and south.\n"+
	"To the north a small hole leads to a tunnel.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4111",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4123",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4119",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The cave, Of zone : 8. V-Number : 4118, R-number : 238
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
   You are in a light cave, from torches several feets abouve your
head fire lights the room. The cave continues to the west and south.
To the north a small hole leads to a tunnel.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4111

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4123

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4119
*/
