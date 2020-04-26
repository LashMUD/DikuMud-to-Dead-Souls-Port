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
    SetShort("The Sewer Entrance");
    SetLong("You stand in the middle of a pipe that leads from north to south. Above you\n"+
        "an air shaft leads up into sunlight. It seems totally impossible to go up\n"+
        "that way.");
    SetItems( ([ 
        "north" : "To the north you can just make out a huge shaft leading down.",
        "south" : "To the south you can see a triple junction leading west and east.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7041",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7044",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Sewer Entrance, Of zone : 14. V-Number : 7043, R-number : 427
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in the middle of a pipe that leads from north to south. Above you
an air shaft leads up into sunlight. It seems totally impossible to go up
that way.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north you can just make out a huge shaft leading down.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7041

Direction south . Keyword : (null)
Description:
  To the south you can see a triple junction leading west and east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7044
*/
