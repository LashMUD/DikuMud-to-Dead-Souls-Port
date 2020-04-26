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
    SetAmbientLight(0);
    SetShort("The lair entrance.");
    SetLong("You are in a dry part of the sewer. To the north is a wooden door, you \n"+
        "can see some slime at the lower part of the door. You also see some skulls\n"+
        "and some broken bones.");
    SetItems( ([ 
        "north" : "You can see the lair.",
        "east" : "You see a crawlway.",
        "slime" : "The slime is slimy and uninteresting.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/72.zon/rm_7204",
        "east" : "/domains/diku-alfa/room/72.zon/rm_7209",
        ] ));
    SetDoor("north", "/domains/diku-alfa/room/doors/7204_7208"); 
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The lair entrance., Of zone : 16. V-Number : 7208, R-number : 490
Sector type : Field Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You are in a dry part of the sewer. To the north is a wooden door, you 
can see some slime at the lower part of the door. You also see some skulls
and some broken bones.
Extra description keywords(s): 
slime

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : door wooden
Description:
  You can see the lair.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7204

Direction east . Keyword : (null)
Description:
  You see a crawlway.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7209
*/
