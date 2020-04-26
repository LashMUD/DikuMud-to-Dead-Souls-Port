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
        "   There is a tall beacon pole standing here, on top of which a \n"+
        "powerful light strobes dizzyingly through the spectrum.");
    SetItems( ([ 
        "north" : "The glass stretches all the way to the horizon.",
        "east" : "The glass stretches all the way to the horizon.",
        "south" : "The glass stretches all the way to the horizon.",
        "west" : "The glass stretches all the way to the horizon.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ({"pole", "beacon"}) : "It is about one yd in diameter and 10 yds tall. It is made from\n"+
            "polished metal, and look smooth and unclimbable. The light on\n"+
            "top of it is too bright for you to make out the actual source.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8002",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8010",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8024",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8014",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8015, R-number : 598
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
   There is a tall beacon pole standing here, on top of which a 
powerful light strobes dizzyingly through the spectrum.
Extra description keywords(s): 
pole beacon
lines patterns web

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8002

Direction east . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8010

Direction south . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8024

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8014
*/
