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
        "   Above you, to the north-east, towers a gigantic structure; a \n"+
        "pale blue pyramid, several hundred meters tall, standing in-\n"+
        "verted tip-to-tip on a smaller (some 10-20 meters tall) pyramid.\n"+
        "   High above you, a glass road only faintly seen sweeps to the\n"+
        "northeast and the south.");
    SetItems( ([ 
        "north" : "To the north, under the enormous overhang of the upper pyramid, \n"+
            "the glassy surface continues to the horizon.",
        "east" : "To the east, under the enormous overhang of the upper pyramid,\n"+
            "the glassy surface continues. To the south-east, some crystal-\n"+
            "line structures sparkle prettily.",
        "south" : "The glass stretches all the way to the horizon.",
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
            "due to the light it sheds, reflecting the lines in the ground.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8006_juggernaut" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8041",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8052",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8061",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8050",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8051, R-number : 613
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
   Above you, to the north-east, towers a gigantic structure; a 
pale blue pyramid, several hundred meters tall, standing in-
verted tip-to-tip on a smaller (some 10-20 meters tall) pyramid.
   High above you, a glass road only faintly seen sweeps to the
northeast and the south.
Extra description keywords(s): 
road
pyramid
lines patterns web

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north, under the enormous overhang of the upper pyramid, 
the glassy surface continues to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8041

Direction east . Keyword : (null)
Description:
  To the east, under the enormous overhang of the upper pyramid,
the glassy surface continues. To the south-east, some crystal-
line structures sparkle prettily.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8052

Direction south . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8061

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8050
*/
