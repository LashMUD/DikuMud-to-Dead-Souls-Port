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
    SetLong("You are swimming in DARKNESS. You feel something\n"+
        "touching your right leg.");
    SetItems( ([ 
        "north" : "To dark to tell.",
        "east" : "You can feel a warm  breeze.",
        "west" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7443",
        "east" : "/domains/diku-alfa/room/74.zon/rm_7413",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7444",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The pool, Of zone : 17. V-Number : 7445, R-number : 569
Sector type : Water Swim Special procedure : No
Room flags: DARK INDOORS 
Description:
You are swimming in DARKNESS. You feel something
touching your right leg.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To dark to tell.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7443

Direction east . Keyword : (null)
Description:
  You can feel a warm  breeze.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7413

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7444
*/
