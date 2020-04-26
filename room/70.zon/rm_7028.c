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
    SetShort("The sewer junction");
    SetLong("You stand in a junction of sewer pipes leading north, east and west.");
    SetItems( ([ 
        "north" : "",
        "east" : "To the east you can see a bend in the pipe going south.",
        "west" : "To the west you can just make out an old well.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7026",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7034",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7015",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sewer junction, Of zone : 14. V-Number : 7028, R-number : 416
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in a junction of sewer pipes leading north, east and west.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7026

Direction east . Keyword : (null)
Description:
  To the east you can see a bend in the pipe going south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7034

Direction west . Keyword : (null)
Description:
  To the west you can just make out an old well.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7015
*/
