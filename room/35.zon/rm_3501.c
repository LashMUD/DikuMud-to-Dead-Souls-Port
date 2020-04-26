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
    SetShort("The Lane");
    SetLong(" You are strolling along a pleasant, shady lane. The road is lined on both\n"+
        "sides by tall, stately trees which lend the scene with a sense of quiet\n"+
        "serenity. You can follow the road north or south.");
    SetExits( ([
        "north" : "/domains/diku-alfa/room/35.zon/rm_3500",
        "south" : "/domains/diku-alfa/room/35.zon/rm_3502",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Lane, Of zone : 6. V-Number : 3501, R-number : 124
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are strolling along a pleasant, shady lane. The road is lined on both
sides by tall, stately trees which lend the scene with a sense of quiet
serenity. You can follow the road north or south.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 3500

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 3502
*/
