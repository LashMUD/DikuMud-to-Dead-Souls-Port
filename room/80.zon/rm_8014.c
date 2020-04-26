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
        "a uniform pale grey, and the horizon seem to be much too close.");
    SetItems( ([ 
        "north" : "Near the horizon to the north, you can see the top of a _huge_ \n"+
            "wall. ",
        "east" : "You notice a flickering, multicoloured light on the horizon to \n"+
            "the east.",
        "south" : "The glass stretches all the way to the horizon.",
        "west" : "The glass stretches all the way to the horizon.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8005_cursor" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8082",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8015",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8023",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8013",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8014, R-number : 597
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
Extra description keywords(s): 
lines patterns web

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  Near the horizon to the north, you can see the top of a _huge_ 
wall. 
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8082

Direction east . Keyword : (null)
Description:
  You notice a flickering, multicoloured light on the horizon to 
the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8015

Direction south . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8023

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8013
*/
