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
    SetShort("Pet Shop Store");
    SetLong(" This is the small dark room in which the Pet Shop Boy keeps his pets.\n"+
        "It is vital that this room's virtual number is exactly one larger than the\n"+
        "Pet Shop number.");
    SetExits( ([
        "None" : "", 
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Pet Shop Store, Of zone : 1. V-Number : 3032, R-number : 38
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   This is the small dark room in which the Pet Shop Boy keeps his pets.
It is vital that this room's virtual number is exactly one larger than the
Pet Shop number.

Extra description keywords(s): None
------- Chars present -------
wolf(MOB)
rottweiler(MOB)
beagle(MOB)
puppy(MOB)
kitten(MOB)

--------- Contents ---------

------- Exits defined -------
*/
