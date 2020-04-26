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
    SetShort("The sewer");
    SetLong("You are in a sewer with more scrates on the walls. And ofcouse a whole lot\n"+
        "of decay. The drain runs east and north.");
    SetItems( ([ 
        "north" : "You see yet another sewer line.",
        "east" : "You see a sewer pipe.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/72.zon/rm_7233",
        "east" : "/domains/diku-alfa/room/72.zon/rm_7231",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sewer, Of zone : 16. V-Number : 7232, R-number : 511
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a sewer with more scrates on the walls. And ofcouse a whole lot
of decay. The drain runs east and north.
Extra description keywords(s): None
------- Chars present -------
wererat rat were(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see yet another sewer line.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7233

Direction east . Keyword : (null)
Description:
  You see a sewer pipe.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7231
*/
