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
    SetShort("Northeast end of Concourse");
    SetLong("  You are at the Concourse. The city wall is just east and a small\n"+
        "promenade goes west. Looking across the river you see a building that\n"+
        "resembles a warehouse. The Concourse continues south along the city wall.");
    SetItems( ([
        "south" : "The Concourse continues south.",
        "west" : "You see the promenade.",
        ({"wall", "walls"}) : "It is built from large grey rocks that have been fastened to each other with\n"+
            "some kind of mortar. It is far too high to climb.",
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/31.zon/rm_3130",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3103",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Northeast end of Concourse, Of zone : 2. V-Number : 3104, R-number : 62
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are at the Concourse.  The city wall is just east and a small
promenade goes west.  Looking across the river you see a building that
resembles a warehouse.  The Concourse continues south along the city wall.

Extra description keywords(s): 
wall

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  The Concourse continues south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3130

Direction west . Keyword : (null)
Description:
  You see the promenade.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3103
*/
