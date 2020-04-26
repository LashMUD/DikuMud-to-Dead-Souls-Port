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
    SetShort("The hole");
    SetLong("   You are at a small hole in the floor, you can either leave north\n"+
	"or try your luck and leave down into the unknown!");
    SetItems( ([ 
        "north" : "",
        "down" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4072",
        "down" : "/domains/diku-alfa/room/41.zon/rm_4171",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The hole, Of zone : 7. V-Number : 4074, R-number : 219
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are at a small hole in the floor, you can either leave north
or try your luck and leave down into the unknown!

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
To room (V-Number): 4072

Direction down . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4171
*/
