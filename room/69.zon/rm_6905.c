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
    SetShort("Quifael's kitchen");
    SetLong("You are in an old-fashioned kitchen.");
    SetItems( ([ 
        "north" : "The hall is to the north.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/69.zon/rm_6904",
        ] ));
}

void init(){
   ::init();
}
/* Extra Information Original Diku Output 
Room name: Quifael's kitchen, Of zone : 13. V-Number : 6905, R-number : 391
Sector type : Inside Special procedure : No
Room flags: INDOORS PRIVATE 
Description:
You are in an old-fashioned kitchen.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The hall is to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6904
*/
