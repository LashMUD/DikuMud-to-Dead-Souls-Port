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
        "north" : "The glass stretches all the way to the horizon.",
        "east" : "Far to the east (ENE, actually) you can see a corner of a large \n"+
            "pale-blue pyramid, standing top downwards, as far as you can see...",
        "south" : "The glass stretches all the way to the horizon.",
        "west" : "For as far as you can see (which isn't more than at most 1/2 mile)\n"+
            "the black glass stretches unbroken.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8005_cursor" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8020",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8051",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8080",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8053",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8050, R-number : 612
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
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8020

Direction east . Keyword : (null)
Description:
  Far to the east (ENE, actually) you can see a corner of a large 
pale-blue pyramid, standing top downwards, as far as you can see...
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8051

Direction south . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8080

Direction west . Keyword : (null)
Description:
  For as far as you can see (which isn't more than at most 1/2 mile)
the black glass stretches unbroken.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8053
*/
