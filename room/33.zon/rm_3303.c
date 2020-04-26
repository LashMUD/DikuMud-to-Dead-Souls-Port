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
    SetShort("Entrance to Gimli's tunnels");
    SetLong("  This is a rather small chamber, dug right out off the cliffground. It is\n"+
        "dimly lit by some phosphorescent parts of the rock in walls and ceiling.\n"+
        "A statue stands on a pedestal and there is an opening here, leading into the\n"+
        "deeper parts of the tunnels.");
    SetItems( ([
        "statue" : "The statue is picturing a gryphoon.\n"+
                   "There is an inscription on the pedestal, below the statue.",
        "inscription" : "The inscription reads 'JAS 39'",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/33.zon/obj/3308_machine_gimlicola" : 1,
        ]) );
    SetExits( ([
        "down" : "/domains/diku-alfa/room/33.zon/rm_3304",
        "north" : "/domains/diku-alfa/room/31.zon/rm_3135",
        ]) );

    SetDoor("north", "/domains/diku-alfa/room/doors/3135_3303");// requires key_3307
    // door was defined in 31.zon room 3135
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Entrance to Gimli's tunnels, Of zone : 4. V-Number : 3303, R-number : 111
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
This is a rather small chamber, dug right out off the cliffground.  It is
dimly lit by some phosphorescent parts of the rock in walls and ceiling.
A statue stands on a pedestal and there is an opening here, leading into the
deeper parts of the tunnels.

Extra description keywords(s): 
inscription
statue

------- Chars present -------

--------- Contents ---------
coke machine

------- Exits defined -------
Direction north . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3307
To room (V-Number): 3135

Direction down . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3304
*/
