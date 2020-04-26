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
    SetLong("   You are standing between the base of the lower pyramid (to the \n"+
        "north) and the crystalline structures (to the south). The upper \n"+
        "pyramid looms over you in a way that gives you severe doubts about\n"+
        "the wisdom of standing underneath what looks like a million tons,\n"+
        "balanced on a point...");
    SetItems( ([ 
        "east" : "Beyond the crystal trees to the east, you can see the corner of a \n"+
            "HUGE wall, stretching south and further east.",
        "south" : "You see a tangled mass of crystalline structures blocking your\n"+
            "way. Many of them looks broken, and shards of crystal litter the\n"+
            "ground.",
        "west" : "The black glass stretches out beyond the pyramid and the crystals,\n"+
            "all the way to the horizon.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ({"structure", "structures", "trees", "tree"}) : "They look like trees, a bit too regular and balanced though (off\n"+
            "course, the amount of debris cluttering the ground suggests that all\n"+
            "the _im_-balanced ones have shattered too the ground...).",
        "pyramid" : "It looks flat out impossible, but never the less the larger\n"+
            "pyramid is balanced, point-to-point, on the smaller. \n"+
            "Where the pyramids intersect, they appear to be open to the air,\n"+
            "the larger one only supported by four faintly-glowing girders.\n"+
            "The pyramid is far too smooth to be climbable.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8001_bug" :1,
        "/domains/diku-alfa/room/80.zon/weap/8900_sign" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/80.zon/rm_8053",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8051",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8052, R-number : 614
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing between the base of the lower pyramid (to the 
north) and the crystalline structures (to the south). The upper 
pyramid looms over you in a way that gives you severe doubts about
the wisdom of standing underneath what looks like a million tons,
balanced on a point...
Extra description keywords(s): 
pyramid
structure structures trees tree
lines patterns web

------- Chars present -------

--------- Contents ---------
sign

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  Beyond the crystal trees to the east, you can see the corner of a 
HUGE wall, stretching south and further east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8053

Direction south . Keyword : (null)
Description:
  You see a tangled mass of crystalline structures blocking your
way. Many of them looks broken, and shards of crystal litter the
ground.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction west . Keyword : (null)
Description:
  The black glass stretches out beyond the pyramid and the crystals,
all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8051
*/
