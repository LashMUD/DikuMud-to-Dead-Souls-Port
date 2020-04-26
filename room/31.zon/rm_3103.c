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
        "both east and west. A small path leads south. Looking across the river you\n"+
        "see the levee.");
    SetItems( ([
        "east" : "You see the Concourse.",
        "south" : "The small path leads south.",
        "west" : "You see the promenade.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/obj/3134_bench" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3104",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3132",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3102",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Promenade, Of zone : 2. V-Number : 3103, R-number : 61
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   The river gently flows west just north of here.  The promenade continues
both east and west.  A small path leads south.  Looking across the river you
see the levee.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
bench

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see the Concourse.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3104

Direction south . Keyword : (null)
Description:
  The small path leads south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3132

Direction west . Keyword : (null)
Description:
  You see the promenade.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3102
*/
