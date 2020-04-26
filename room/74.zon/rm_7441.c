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
    SetShort("The small cave");
    SetLong("You are standing in small cave. You can see\n"+
        "some light in the end. Exits are north and south.");
    SetItems( ([ 
        "north" : "You can see only smoke.",
        "south" : "You can see a blue glow. And you feel a fresh breeze.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7440",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7442",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The small cave, Of zone : 17. V-Number : 7441, R-number : 565
Sector type : Field Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You are standing in small cave. You can see
some light in the end. Exits are north and south.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can see only smoke.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7440

Direction south . Keyword : (null)
Description:
  You can see a blue glow. And you feel a fresh breeze.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7442
*/
