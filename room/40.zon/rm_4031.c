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
    
    SetTerrainType(T_OUTDOORS);
    SetAmbientLight(30);
    SetShort("The valley");
    SetLong("   You are in a small valley, surrounded by hills and a mountain to \n"+
	"the south. In the mountain there is a cave.");
    SetItems( ([ 
        "south" : "",
        "cave" : "Well it doesn't look nice, but it's the only way out..",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/40.zon/rm_4029",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The valley, Of zone : 7. V-Number : 4031, R-number : 194
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are in a small valley, surrounded by hills and a mountain to 
the south. In the mountain there is a cave.

Extra description keywords(s): 
cave

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4029
*/
