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
    SetLong("   You are walking in a narrow tunnel. The walls are only roughly shaped,\n"+
	"sharp rocks protruding everywhere, even from the floor making you stumble in\n"+
	"the flickering light. To the south the tunnel narrows even more making it\n"+
	"almost impossible to pass. To the north it slowly widens into a cave. There\n"+
	"is a branch of the tunnel going west.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetExits( ([
         "north" : "/domains/diku-alfa/room/40.zon/rm_4018",
         "south" : "/domains/diku-alfa/room/40.zon/rm_4011",
         "west" : "/domains/diku-alfa/room/40.zon/rm_4013",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The tunnel, Of zone : 7. V-Number : 4014, R-number : 177
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are walking in a narrow tunnel. The walls are only roughly shaped,
sharp rocks protruding everywhere, even from the floor making you stumble in
the flickering light. To the south the tunnel narrows even more making it
almost impossible to pass. To the north it slowly widens into a cave. There
is a branch of the tunnel going west.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4018

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4011

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4013
*/
