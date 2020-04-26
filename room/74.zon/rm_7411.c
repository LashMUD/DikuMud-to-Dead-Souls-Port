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
    SetShort("The stalagmite cave");
    SetLong("You are standing in a stalagmite cave. Water is drippling\n"+
        "from the walls. It is very cold in here.");
    SetItems( ([ 
        "north" : "",
        "east" : "You see a long hallway, and some mud.",
        "south" : "",
        "stalagmite" : "The stalagmites are very tall, and looks very beautiful.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7414",
        "east" : "/domains/diku-alfa/room/74.zon/rm_7410",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7412",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The stalagmite cave, Of zone : 17. V-Number : 7411, R-number : 535
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in a stalagmite cave. Water is drippling
from the walls. It is very cold in here.
Extra description keywords(s): 
stalagmite

------- Chars present -------
rat(MOB)
lemure blob(MOB)
lemure blob(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7414

Direction east . Keyword : (null)
Description:
  You see a long hallway, and some mud.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7410

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7412
*/
