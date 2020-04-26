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
        "   To your west, a wide chasm opens in the glassy material, that\n"+
        "cover the ground.\n"+
        "   Above you, southwest of you, towers a gigantic structure; a pale \n"+
        "blue pyramid, several hundred meters tall, standing inverted tip-to-\n"+
        "tip on a smaller (some 10-20 meters tall) pyramid.\n"+
        "   High above you, a vaguely-seen glass road stretches south, from\n"+
        "a barely-seen opening in the upper pyramid.");
    SetItems( ([ 
        "north" : "The glass stretches along the crack, all the way to the horizon.",
        "east" : "The glass stretches all the way to the horizon.",
        "south" : "The black surface stretches as far as you can see.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ({"crack", "fault", "chasm"}) : "It is deep and wide, with sparking root-like strands snaking out\n"+
            "of the sides.",
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
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8006_juggernaut" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8033",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8045",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8054",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8043, R-number : 609
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
   To your west, a wide chasm opens in the glassy material, that
cover the ground.
   Above you, southwest of you, towers a gigantic structure; a pale 
blue pyramid, several hundred meters tall, standing inverted tip-to-
tip on a smaller (some 10-20 meters tall) pyramid.
   High above you, a vaguely-seen glass road stretches south, from
a barely-seen opening in the upper pyramid.
Extra description keywords(s): 
road
pyramid
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
To room (V-Number): 8033

Direction east . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8045

Direction south . Keyword : (null)
Description:
  The black surface stretches as far as you can see.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8054
*/
