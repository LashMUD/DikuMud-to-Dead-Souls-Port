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
        "   To the north-west, a narrow, but steep, crack opens in the \n"+
        "strange, glassy material, that covers the ground.");
    SetItems( ([ 
        "north" : "The glass stretches all the way to the horizon, along the fault.",
        "east" : "The glass stretches all the way to the horizon.",
        "south" : "The glass stretches all the way to the horizon.",
        "west" : "The glass stretches along the fault, all the way to the horizon.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ({"crack", "fault"}) : "It is deep and narrow (though too wide to jump across..), with \n"+
            "sparking root-like strands snaking out of the sides.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8024",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8020",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8045",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8044",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8035, R-number : 607
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
   To the north-west, a narrow, but steep, crack opens in the 
strange, glassy material, that covers the ground.
Extra description keywords(s): 
crack fault
lines patterns web

------- Chars present -------
cursor(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The glass stretches all the way to the horizon, along the fault.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8024

Direction east . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8020

Direction south . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8045

Direction west . Keyword : (null)
Description:
  The glass stretches along the fault, all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8044
*/
