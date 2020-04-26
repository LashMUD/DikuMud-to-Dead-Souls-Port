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
        "  There is a large hole in the grid here.");
    SetItems( ([ 
        "north" : "The glass stretches all the way to the horizon.",
        "east" : "The glass stretches all the way to the horizon.",
        "south" : "The glass stretches all the way to the horizon.",
        "west" : "The glass stretches all the way to the horizon.",
        "down" : "The hole is slowly changing shape as the pattern moves, expanding\n"+
            "and retracting, but never quite closing. It is quite dark.",
        ({"lines", "patterns", "web"}) :
            "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        "hole" : "The hole is slowly changing shape as the pattern moves, expanding\n"+
            "and retracting, but never quite closing. It is quite dark.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8001_bug" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8000",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8011",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8020",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8015",
        "down" : "/domains/diku-alfa/room/81.zon/rm_8101",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8010, R-number : 593
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
  There is a large hole in the grid here.
Extra description keywords(s): 
hole
lines patterns web

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8000

Direction east . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8011

Direction south . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8020

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8015

Direction down . Keyword : (null)
Description:
  The hole is slowly changing shape as the pattern moves, expan-
ding and retracting, but never quite closing. It is quite dark.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8101
*/
