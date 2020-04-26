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
        "   To the south, you can see the northern end of a wide fault in\n"+
        "the glassy material, that covers the ground.");
    SetItems( ([ 
        "north" : "To the north, you can barely make out a flickering light on the \n"+
            "horizon.",
        "east" : "To the east, you can follow the crack around its eastern side. ",
        "west" : "To the west, you can see a wide expanse of glass along the faults\n"+
            "western side. ",
        "down" : "Wide slabs of broken, dull glass with sharp edges provide a way\n"+
            "down amidst the debris. It is uncertain, however, whether they \n"+
            "will provide a way up...",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back. The shapes\n"+
            "seem unusually un-geometrical here, as if they were not really\n"+
            "only 3-dimensional.",
        ({"crack", "fault"}) : "It is deep and wide, with sparking root-like strands snaking out\n"+
            "of the sides.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8015",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8035",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8034",
        "down" : "/domains/diku-alfa/room/81.zon/rm_8123",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8024, R-number : 603
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
   To the south, you can see the northern end of a wide fault in
the glassy material, that covers the ground.
Extra description keywords(s): 
crack fault
lines patterns web

------- Chars present -------
cursor(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north, you can barely make out a flickering light on the 
horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8015

Direction east . Keyword : (null)
Description:
  To the east, you can follow the crack around its eastern side. 
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8035

Direction west . Keyword : (null)
Description:
  To the west, you can see a wide expanse of glass along the faults
western side. 
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8034

Direction down . Keyword : (null)
Description:
  Wide slabs of broken, dull glass with sharp edges provide a way
down amidst the debris. It is uncertain, however, whether they 
will provide a way up...
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8123
*/
