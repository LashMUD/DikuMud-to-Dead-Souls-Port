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
        "   Above you, to the south-east, towers a gigantic structure; a \n"+
        "pale blue pyramid, several hundred meters tall, standing in-\n"+
        "verted tip-to-tip on a smaller (some 10-20 meters tall) pyramid.");
    SetItems( ([ 
        "north" : "The glass stretches all the way to the horizon.",
        "east" : "To the east, you can barely make out a vague shimmer on horizon.\n"+
            "Also, a small, unidentifiable at this distance, object is lying\n"+
            "near the shimmer.",
        "south" : "To the south, under the enormous overhang of the upper pyramid, \n"+
            "the glassy surface continues to the horizon.",
        "west" : "The glass stretches all the way to the horizon.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        "pyramid" : "It looks flat out impossible, but never the less the larger\n"+
            "pyramid is balanced, point-to-point, on the smaller. They are\n"+
            "both polished smooth, pale blue, except at a point some 30 yds\n"+
            "up on the larger one, where a black square hole provides en-\n"+
            "trance for travelers on the glass road that reach it here.\n"+
            "Where the pyramids intersect, they appear to be open to the air,\n"+
            "the larger one only supported by four faintly-glowing girders.\n"+
            "The pyramid is far too smooth to be climbable.",
        "road" : "The glass road, hanging unsupported in the air, is only visible\n"+
            "due to the light it sheds, reflecting the lines in the ground",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8021",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8032",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8051",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8045",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8041, R-number : 608
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
   Above you, to the south-east, towers a gigantic structure; a 
pale blue pyramid, several hundred meters tall, standing in-
verted tip-to-tip on a smaller (some 10-20 meters tall) pyramid.
Extra description keywords(s): 
road
pyramid
lines patterns web

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8021

Direction east . Keyword : (null)
Description:
  To the east, you can barely make out a vague shimmer on horizon.
Also, a small, unidentifiable at this distance, object is lying
near the shimmer.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8032

Direction south . Keyword : (null)
Description:
  To the south, under the enormous overhang of the upper pyramid, 
the glassy surface continues to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8051

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8045
*/
