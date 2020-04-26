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

    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("Promenade");
    SetLong("  The river gently flows west just north of here. The promenade continues\n"+
        "further east and to the west you see the city wall. Park Road leads south\n"+
        "from here.");
    SetItems( ([
        "east" : "The promenade.",
        "south" : "Park Road leads south.",
        "west" : "You see the Concourse.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/obj/3134_bench" : 1,
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3102",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3131",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3100",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Promenade, Of zone : 2. V-Number : 3101, R-number : 59
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   The river gently flows west just north of here.  The promenade continues
further east and to the west you see the city wall.  Park Road leads south
from here.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
bench

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The promenade.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3102

Direction south . Keyword : (null)
Description:
  Park Road leads south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3131

Direction west . Keyword : (null)
Description:
  You see the Concourse.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3100
*/
