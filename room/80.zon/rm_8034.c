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
    SetShort("Main Matrix");
    SetLong("   You are standing on what appears to be an expanse of black\n"+
        "glass. Beneath your feet perfectly straight lines form enormous,\n"+
        "web-like patterns, glowing with a bluish-green light. The sky is\n"+
        "a uniform pale grey, and the horizon seem to be much too close.\n"+
        "   To the east, a narrow, but steep, crack opens in the ground.");
    SetItems( ([ 
        "north" : "The glass stretches all the way to the horizon, along the fault.",
        "south" : "The glass stretches along the fault, all the way to the horizon.",
        "west" : "The glass stretches all the way to the horizon.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ({"crack", "fault"}) : "It is deep and narrow (though too wide to jump across..), with \n"+
            "sparking root-like strands snaking out of the sides.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8024",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8044",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8033",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8034, R-number : 606
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
   To the east, a narrow, but steep, crack opens in the ground.
Extra description keywords(s): 
crack fault
lines patterns web

------- Chars present -------
butterfly fly(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The glass stretches all the way to the horizon, along the fault.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8024

Direction south . Keyword : (null)
Description:
  The glass stretches along the fault, all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8044

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8033
*/
