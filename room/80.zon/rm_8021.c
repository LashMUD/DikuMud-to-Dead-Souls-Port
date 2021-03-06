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
        "east" : "The glass stretches all the way to the horizon.",
        "south" : "To the south, you can see the top of a huge pyramid, apparently\n"+
            "standing on its tip.",
        "west" : "The glass stretches all the way to the horizon.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        "pyramid" : "It is pale blue, and quite smooth, but details are hard to work\n"+
            "out at this distance.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8008_butterfly" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8011",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8022",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8041",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8020",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8021, R-number : 600
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
Extra description keywords(s): 
pyramid
lines patterns web

------- Chars present -------
juggernaut(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8011

Direction east . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8022

Direction south . Keyword : (null)
Description:
  To the south, you can see the top of a huge pyramid, apparently
standing on its tip.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8041

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8020
*/
