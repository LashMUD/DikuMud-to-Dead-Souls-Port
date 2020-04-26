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

inherit LIB_SHOP;

static void create() {
    ::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Grubby Inn");
    SetLong(" You are inside the old Grubby Inn. This place has not been cleaned for\n"+
        "several decades, vile smells make you dizzy.");
    SetItems( ([
        "north" : "You see the alley.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3046_filthy" : 1,
        "/domains/diku-alfa/room/30.zon/npc/3065_beggar" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3024",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Grubby Inn, Of zone : 1. V-Number : 3048, R-number : 50
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are inside the old Grubby Inn.  This place has not been cleaned for
several decades, vile smells make you dizzy.

Extra description keywords(s): None
------- Chars present -------
fido dog(MOB)
mercenary(MOB)
fido dog(MOB)
beggar(MOB)
filthy(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the alley.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3024
*/
