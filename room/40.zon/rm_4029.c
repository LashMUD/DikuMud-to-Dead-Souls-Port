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
    SetShort("The cave");
    SetLong("   You are in a cave that is filled with fresh air, you sense the\n"+
	"wind blowing from the north. To the south you see a small tunnel\n"+
	"continue into the mountain.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4031",
        "south" : "/domains/diku-alfa/room/40.zon/rm_4027",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The cave, Of zone : 7. V-Number : 4029, R-number : 192
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a cave that is filled with fresh air, you sense the
wind blowing from the north. To the south you see a small tunnel
continue into the mountain.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4031

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4027
*/
