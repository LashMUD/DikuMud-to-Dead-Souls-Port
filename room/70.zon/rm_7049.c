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
    SetShort("The junction");
    SetLong("You stand in a junction leading north, west and east.");
    SetItems( ([ 
        "north" : "",
        "east" : "Darkness has closed in on that part of the sewer system, you can't see\n"+
            "a thing in that direction.",
        "west" : "West. You see another junction very similar to this one that leads north\n"+
            "and west.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/70.zon/npc/7002_rat_sewer" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7048",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7060",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7044",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The junction, Of zone : 14. V-Number : 7049, R-number : 433
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in a junction leading north, west and east.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7048

Direction east . Keyword : (null)
Description:
  Darkness has closed in on that part of the sewer system, you can't see
a thing in that direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7060

Direction west . Keyword : (null)
Description:
  West. You see another junction very similar to this one that leads north
and west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7044
*/
