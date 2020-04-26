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
        "   To your east, a wide chasm opens in the glassy material, that\n"+
        "cover the ground. A wooden log has been placed across it here.");
    SetItems( ([ 
        "north" : "The glass stretches along the crack, all the way to the horizon.",
        "east" : "A wooden log, doubling as a bridge, has been placed across the \n"+
            "fault-line to the east.",
        "south" : "To the south, the crack vanishes in the distance, and towering\n"+
            "above it, you can see the top of a large, pale-blue pyramid, \n"+
            "apparently standing on its tip.",
        "west" : "The glass stretches all the way to the horizon.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ({"crack", "fault", "chasm"}) : "It is deep and wide, with sparking root-like strands snaking out\n"+
            "of the sides.",
        ({"log", "bridge"}) : "There are a few green leaves on some twigs, still holding on. It \n"+
            "looks rather incongruous, lying there.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8001_bug" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8022",
        "east" : "/domains/diku-alfa/room/81.zon/rm_8130",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8041",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8021",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8032, R-number : 604
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
   To your east, a wide chasm opens in the glassy material, that
cover the ground. A wooden log has been placed across it here.
Extra description keywords(s): 
log bridge
crack fault chasm
lines patterns web

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The glass stretches along the crack, all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8022

Direction east . Keyword : (null)
Description:
  A wooden log, doubling as a bridge, has been placed across the 
fault-line to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8130

Direction south . Keyword : (null)
Description:
  To the south, the crack vanishes in the distance, and towering
above it, you can see the top of a large, pale-blue pyramid, 
apparently standing on its tip.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8041

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8021
*/
