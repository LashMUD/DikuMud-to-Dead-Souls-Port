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

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The northern end of the pool");
    SetLong("You have wet feet, you are standing in water.\n"+
        "The water looks calm. You can see that it's\n"+
        "a big lake. Light seeps from the water.");
    SetItems( ([ 
        "north" : "You can see a small cave.",
        "east" : "You can see more water.",
        "south" : "You can see water.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7441",
        "east" : "/domains/diku-alfa/room/74.zon/rm_7443",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7444",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The northern end of the pool, Of zone : 17. V-Number : 7442, R-number : 566
Sector type : Hills Special procedure : No
Room flags: INDOORS 
Description:
You have wet feet, you are standing in water.
The water looks calm. You can see that it's
a big lake. Light seeps from the water.
Extra description keywords(s): None
------- Chars present -------
sea hag(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can see a small cave.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7441

Direction east . Keyword : (null)
Description:
  You can see more water.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7443

Direction south . Keyword : (null)
Description:
  You can see water.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7444
*/
