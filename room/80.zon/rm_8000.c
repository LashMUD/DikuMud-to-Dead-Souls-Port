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
        "north" : "Somewhere off to the northeast you can see a pillar of light\n"+
            "stretching up towards infinity.",
        "east" : "Somewhere off to the northeast you can see a pillar of light\n"+
            "stretching up towards infinity.",
        "south" : "The glass stretches all the way to the horizon.",
        "west" : "The glass stretches all the way to the horizon.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8008_butterfly" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8080",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8001",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8010",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8002",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8000, R-number : 590
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
juggernaut(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  Somewhere off to the northeast you can see a pillar of light
stretching up towards infinity.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8080

Direction east . Keyword : (null)
Description:
  Somewhere off to the northeast you can see a pillar of light
stretching up towards infinity.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8001

Direction south . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8010

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8002
*/
