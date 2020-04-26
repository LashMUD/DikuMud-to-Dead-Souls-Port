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

    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("A boring drain.");
    SetLong("You are in yet another sewer drain.");
    SetItems( ([ 
        "north" : "You see a sewer drain continuing to the north.",
        "east" : "You can see another drain to the east.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/72.zon/rm_7219",
        "east" : "/domains/diku-alfa/room/72.zon/rm_7221",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A boring drain., Of zone : 16. V-Number : 7220, R-number : 502
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in yet another sewer drain.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see a sewer drain continuing to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7219

Direction east . Keyword : (null)
Description:
  You can see another drain to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7221
*/
