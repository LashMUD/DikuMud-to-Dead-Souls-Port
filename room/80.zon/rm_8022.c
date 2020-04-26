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
        "   To the east, a wide crack in the glass gapes hungrily.");
    SetItems( ([ 
        "north" : "You can see the reflexes off a glass road in the sky, swinging\n"+
            "around from the north to the southeast.The crack continues to the\n"+
            "north.",
        "south" : "The glass stretches all the way to the horizon, along the fault-\n"+
            "line.",
        "west" : "The glass stretches all the way to the horizon.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ({"crack", "fault"}) : "It is deep and wide, with sparking root-like strands snaking out\n"+
            "of the sides.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8001_bug" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8012",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8013",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8021",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8022, R-number : 601
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
   To the east, a wide crack in the glass gapes hungrily.
Extra description keywords(s): 
crack fault
lines patterns web

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can see the reflexes off a glass road in the sky, swinging
around from the north to the southeast.The crack continues to the
north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8012

Direction south . Keyword : (null)
Description:
  The glass stretches all the way to the horizon, along the fault-
line.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8013

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8021
*/
