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
    SetShort("The Dark hallway");
    SetLong("You can't see much of this, even with a light. The hallway goes into a\n"+
        "passageway to the south. A dorway leads west.");
    SetItems( ([ 
        "south" : "You can see nothing at all, because it's completely dark in that direction.",
        "west" : "You see a lot of light, bright as daylight, but nothing of interest.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/70.zon/rm_7057",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7052",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Dark hallway, Of zone : 14. V-Number : 7056, R-number : 439
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You can't see much of this, even with a light. The hallway goes into a
passageway to the south. A dorway leads west.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You can see nothing at all, because it's completely dark in that direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7057

Direction west . Keyword : (null)
Description:
  You see a lot of light, bright as daylight, but nothing of interest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7052
*/
