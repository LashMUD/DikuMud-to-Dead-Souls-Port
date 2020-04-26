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
    SetShort("The tunnel");
    SetLong("   You are in a narrow tunnel, which leads both to the east and the\n"+
	"south. There is also an exit towards the west, where you see a large\n"+
	"cave.");
    SetItems( ([ 
        "east" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/40.zon/rm_4073",
        "south" : "/domains/diku-alfa/room/40.zon/rm_4074",
        "west" : "/domains/diku-alfa/room/40.zon/rm_4071",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The tunnel, Of zone : 7. V-Number : 4072, R-number : 217
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a narrow tunnel, which leads both to the east and the
south. There is also an exit towards the west, where you see a large
cave.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4073

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4074

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4071
*/
