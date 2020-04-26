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
        "   To the east, some crystalline structures, looking like glass\n"+
        "trees, bars your way.");
    SetItems( ([ 
        "north" : "Far to the north (NNW, actually) you can see a corner of a large \n"+
            "pale-blue pyramid, standing top downwards, as far as you can see...",
        "east" : "You see a tangled mass of crystalline structures blocking your\n"+
            "way. Many of them looks broken, and shards of crystal litter the\n"+
            "ground.",
        "south" : "The glass stretches all the way to the horizon. Far to the south-\n"+
            "east, beyond the crystal structures, you glimpse the top of a huge\n"+
            "wall.",
        "west" : "Somewhere off to the southwest you can see a pillar of light\n"+
            "stretching up towards infinity.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ({"structure", "structures", "trees", "tree"}) : "They look like trees, a bit too regular and balanced though (off\n"+
            "course, the amount of debris cluttering the ground suggests that all\n"+
            "the _im_-balanced ones have shattered too the ground...).",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8008_butterfly" :1,
        "/domains/diku-alfa/room/80.zon/weap/8900_sign" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8051",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8072",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8071",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8061, R-number : 617
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
   To the east, some crystalline structures, looking like glass
trees, bars your way.
Extra description keywords(s): 
structure structures trees tree
lines patterns web

------- Chars present -------
cowboy(MOB)

--------- Contents ---------
sign

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  Far to the north (NNW, actually) you can see a corner of a large 
pale-blue pyramid, standing top downwards, as far as you can see...
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8051

Direction east . Keyword : (null)
Description:
  You see a tangled mass of crystalline structures blocking your
way. Many of them looks broken, and shards of crystal litter the
ground.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction south . Keyword : (null)
Description:
  The glass stretches all the way to the horizon. Far to the south-
east, beyond the crystal structures, you glimpse the top of a huge
wall.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8072

Direction west . Keyword : (null)
Description:
  Somewhere off to the southwest you can see a pillar of light
stretching up towards infinity.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8071
*/
