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
    SetAmbientLight(30);
    SetShort("The Grand Sewer");
    SetLong("You are in a Grand Sewer Pipe. This stretches toward the south. It's large \n"+
        "indeed! A doorway leads to the east from here.");
    SetItems( ([ 
        "north" : "To the north you can see a doorway.",
        "east" : "You can't see anything in that darkness.",
        "south" : "In the south end of the pipe the \"floor\" is completely covered with water.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7051",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7056",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7053",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Grand Sewer, Of zone : 14. V-Number : 7052, R-number : 436
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
You are in a Grand Sewer Pipe. This stretches toward the south. It's large 
indeed! A doorway leads to the east from here.
Extra description keywords(s): None
------- Chars present -------
spider(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north you can see a doorway.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7051

Direction east . Keyword : (null)
Description:
  You can't see anything in that darkness.
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7056

Direction south . Keyword : (null)
Description:
  In the south end of the pipe the "floor" is completely covered with water.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7053
*/
