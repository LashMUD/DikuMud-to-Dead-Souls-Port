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
    SetShort("Cave entrance");
    SetLong("You are standing in the cave entrance. It is very dark\n"+
        "downhere. There is writing at the wall. There is an exit\n"+
        "to the north. A stairway leads up.");
    SetItems( ([ 
        "north" : "To the north you can see a small tunnel.",
        "up" : "You can see the stairs going up into darkness.",
        ({"writing", "wall"}) : "The writing says 'BEWARE adventurer!'",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7401",
        "up" : "/domains/diku-alfa/room/71.zon/rm_7102",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Cave entrance, Of zone : 17. V-Number : 7400, R-number : 524
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in the cave entrance. It is very dark
downhere. There is writing at the wall. There is an exit
to the north. A stairway leads up.
Extra description keywords(s): 
writing wall

------- Chars present -------
lemure blob(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north you can see a small tunnel.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7401

Direction up . Keyword : (null)
Description:
  You can see the stairs going up into darkness.
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7102
*/
