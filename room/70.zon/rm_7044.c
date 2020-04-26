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
    SetShort("The junction going three ways");
    SetLong("You are in a passageway in the pipes of the sewer system leading north, east\n"+
        "and west.");
    SetItems( ([ 
        "north" : "You see a sewer pipe leading north.",
        "east" : "",
        "west" : "West. You see another junction very similar to this one that leads north\n"+
            "and west.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7043",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7049",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7031",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The junction going three ways, Of zone : 14. V-Number : 7044, R-number : 428
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a passageway in the pipes of the sewer system leading north, east
and west.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see a sewer pipe leading north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7043

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7049

Direction west . Keyword : (null)
Description:
  West. You see another junction very similar to this one that leads north
and west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7031
*/
