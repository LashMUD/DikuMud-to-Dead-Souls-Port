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
    SetShort("A triple junction");
    SetLong("You stand in a junction with pipes leading west, north and east.");
    SetItems( ([ 
        "north" : "To the north there's a ENORMOUS quadruple sewer junction, all lit up by\n"+
            "an odd light.",
        "east" : "East. You can just make out a triple junction leading north and east.",
        "west" : "West. You can just make out a triple junction leading north and west.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/70.zon/npc/7002_rat_sewer" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7030",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7044",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7018",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A triple junction, Of zone : 14. V-Number : 7031, R-number : 419
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in a junction with pipes leading west, north and east.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north there's a ENORMOUS quadruple sewer junction, all lit up by
an odd light.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7030

Direction east . Keyword : (null)
Description:
  East. You can just make out a triple junction leading north and east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7044

Direction west . Keyword : (null)
Description:
  West. You can just make out a triple junction leading north and west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7018
*/
