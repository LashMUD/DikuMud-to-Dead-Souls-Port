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
    SetShort("The square lair");
    SetLong("You are standing in the south-east part of the lair. You can\n"+
        "see a skeleton lying at the wall.");
    SetItems( ([ 
        "north" : "Another part of the lair",
        "south" : "",
        "west" : "Another part of the lair",
        "skeleton" : "It looks like a adventurer who wasn't lucky. You better\n"+
            "watch out-",
        ] ));
    SetExits( ([
         "north" : "/domains/diku-alfa/room/74.zon/rm_7418",
         "south" : "/domains/diku-alfa/room/74.zon/rm_7414",
         "west" : "/domains/diku-alfa/room/74.zon/rm_7420",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The square lair, Of zone : 17. V-Number : 7417, R-number : 541
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
You are standing in the south-east part of the lair. You can
see a skeleton lying at the wall.
Extra description keywords(s): 
skeleton

------- Chars present -------
wanderer(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  Another part of the lair
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7418

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7414

Direction west . Keyword : (null)
Description:
  Another part of the lair
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7420
*/
