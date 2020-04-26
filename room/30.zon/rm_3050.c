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
    SetShort("Abandoned Warehouse");
    SetLong("  You are inside the only room in the old warehouse. Only a sparse amount\n"+
        "of light shines in through the boarded up windows above you. The place is\n"+
        "very dusty and appears to have been unused for many years.");
    SetItems( ([
        "north" : "You see the alley.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3046",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Abandoned Warehouse, Of zone : 1. V-Number : 3050, R-number : 52
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are inside the only room in the old warehouse.  Only a sparse amount
of light shines in through the boarded up windows above you.  The place is
very dusty and appears to have been unused for many years.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the alley.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3046
*/
