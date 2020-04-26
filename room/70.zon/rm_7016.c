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
    SetShort("The ordinary bend");
    SetLong("You are in the middle of a bend in the pipe system of the sewer system, \n"+
        "WHAT a place!!! The pipe leads to the south and the east.");
    SetItems( ([ 
        "east" : "East. What a quiet place you've found there. It's an intersection that have\n"+
            "pipeways going north and east.",
        "south" : "South. You see nothing at all in that direction it's too dark anyway.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/70.zon/rm_7021",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7017",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The ordinary bend, Of zone : 14. V-Number : 7016, R-number : 408
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in the middle of a bend in the pipe system of the sewer system, 
WHAT a place!!! The pipe leads to the south and the east.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  East. What a quiet place you've found there. It's an intersection that have
pipeways going north and east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7021

Direction south . Keyword : (null)
Description:
  South. You see nothing at all in that direction it's too dark anyway.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7017
*/
