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
#include <medium.h>

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("indoors");
    SetMedium(MEDIUM_SURFACE);
    SetAmbientLight(0);
    SetShort("The pool");
    SetLong("You are swimming in water. It is getting deep here.\n"+
        "It is also dark in this end.");
    SetItems( ([ 
        "south" : "You can see some bubbles in the water.",
        "west" : "You see calm water.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/74.zon/rm_7445",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7442",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The pool, Of zone : 17. V-Number : 7443, R-number : 567
Sector type : Water Swim Special procedure : No
Room flags: DARK INDOORS 
Description:
You are swimming in water. It is getting deep here.
It is also dark in this end.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You can see some bubbles in the water.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7445

Direction west . Keyword : (null)
Description:
  You see calm water.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7442
*/
