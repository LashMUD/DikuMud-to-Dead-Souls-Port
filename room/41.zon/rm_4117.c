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
    SetShort("The secret tunnel");
    SetLong("   You are in a secret tunnel that leads north, to the south you see\n"+
	"a small chamber.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4114",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4122",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The secret tunnel, Of zone : 8. V-Number : 4117, R-number : 237
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a secret tunnel that leads north, to the south you see
a small chamber.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4114

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4122
*/
