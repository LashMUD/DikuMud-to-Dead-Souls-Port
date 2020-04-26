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

    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("The matrix fault"); 
    SetLong("   You are standing on the bottom of a wide crack, going north-south \n"+
        "through the matrix. The sides of the fault are alive with writhing \n"+
        "worm-like things, snaking out from the cracked glass, sparking madly.\n"+
        "High above you, a wooden log has been placed across the chasm.");
    SetItems( ([ 
        "north" : "The fault zig-zags out of sight to the north, with plenty of clearing \n"+
            "between the sparks and good, even footing.",
        "south" : "The fault zig-zags out of sight to the south, with plenty of clearing \n"+
            "between the sparks and good, even footing.",
        ({"strands", "worm"}) : "They are made from some milky-white, shiny material, and when you really \n"+
            "look at them, you realize that they are not alive at all, the force of \n"+
            "the sparks that erupt whenever they touch each other is sufficient to \n"+
            "keep them waving about. Those sparks must be nasty!",
        ({"bridge", "log"}) : "It is much too high for you to climb or jump up there.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/81.zon/rm_8120",
        "south" : "/domains/diku-alfa/room/81.zon/rm_8122",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The matrix fault, Of zone : 21. V-Number : 8121, R-number : 631
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on the bottom of a wide crack, going north-south 
through the matrix. The sides of the fault are alive with writhing 
worm-like things, snaking out from the cracked glass, sparking madly.
High above you, a wooden log has been placed across the chasm.
Extra description keywords(s): 
bridge log
strands worm

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The fault zig-zags out of sight to the north, with plenty of clearing 
between the sparks and good, even footing.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8120

Direction south . Keyword : (null)
Description:
  The fault zig-zags out of sight to the south, with plenty of clearing 
between the sparks and good, even footing.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8122
*/
