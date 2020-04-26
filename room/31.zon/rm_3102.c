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
    SetLong("  The river gently flows just north of here. The promenade continues\n"+
        "both east and west. South of here you see the entrance to the park, and a\n"+
        "small building seems to be just west of the entrance.");
    SetItems( ([
        "east" : "You see the promenade.",
        "south" : "You see the park entrance",
        "west" : "You see the promenade.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/obj/3134_bench" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3103",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3105",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3101",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Promenade, Of zone : 2. V-Number : 3102, R-number : 60
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   The river gently flows west just north of here.  The promenade continues
both east and west.  South of here you see the entrance to the park, and a
small building seems to be just west of the entrance.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
bench

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see the promenade.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3103

Direction south . Keyword : (null)
Description:
  You see the park entrance.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3105

Direction west . Keyword : (null)
Description:
  You see the promenade.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3101
*/
