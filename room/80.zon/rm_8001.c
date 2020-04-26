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
        "   There is a strong smell of ozone here, probably caused by a\n"+
        "circle of pale blue lightening, app. 2 yards diameter, which is \n"+
        "hanging in the air 1 yd off the ground, revolving slowly around \n"+
        "its vertical axis.");
    SetItems( ([ 
        "north" : "Somewhere off to the north you can see a pillar of light\n"+
            "stretching up towards infinity.",
        "east" : "The glass stretches all the way to the horizon.",
        "south" : "The glass stretches all the way to the horizon.",
        "west" : "The glass stretches all the way to the horizon.",
        "up" : "Looking through the circle, you see a swirling haze, occasionally\n"+
            "coalescing into a peaceful meadow, or a clump of trees. It\n"+
            "would be possible to jump through it with a running start, if \n"+
            "one was careful not to touch the edges.",
        ({"lines", "patterns", "web"}) : 
            "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ({"lightening", "gate", "circle"}) :
            "Looking through the circle, you see a swirling haze, occasionally\n"+
            "coalescing into a peaceful meadow, or a clump of trees.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8071",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8002",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8011",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8000",
        "up" : "/domains/diku-alfa/room/89.zon/rm_8903",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8001, R-number : 591
Sector type : Field Special procedure : Exists
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
   There is a strong smell of ozone here, probably caused by a
circle of pale blue lightening, app. 2 yards diameter, which is 
hanging in the air 1 yd off the ground, revolving slowly around 
its vertical axis.
Extra description keywords(s): 
lightening gate circle
lines patterns web

------- Chars present -------
juggernaut(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  Somewhere off to the north you can see a pillar of light
stretching up towards infinity.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8071

Direction east . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8002

Direction south . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8011

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8000

Direction up . Keyword : gate circle
Description:
  Looking through the circle, you see a swirling haze, occasion-
ally coalescing into a peaceful meadow, or a clump of trees. It
would be possible to jump through it with a running start, if 
one was careful not to touch the edges.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8903
*/
