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
        "   To your east, a wide crack gapes through the strange material,\n"+
        "that covers the ground.");
    SetItems( ([ 
        "north" : "The glass stretches all the way to the horizon.",
        "south" : "The glass stretches all the way to the horizon, along the fault-\n"+
            "line.",
        "west" : "The glass stretches all the way to the horizon.",
        "up" : "A staircase of transparent glass, only made visible through the\n"+
            "numerous reflexes from the ground, reach up to a glass road that\n"+
            "sweeps over the horizon to the south-west.",
        "down" : "Treacherous slabs of dull glass wih sharp edges provides a way \n"+
            "down. One probably wouldn't be able to get back UP again, though!",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ({"crack", "fault"}) : "It is deep and wide, with sparking root-like strands snaking out\n"+
            "of the sides. Huge glassy slabs with sharp edges provides a \n"+
            "treacherous and uncertain-looking way down.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8001_bug" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8001",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8022",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8011",
        "up" : "/domains/diku-alfa/room/81.zon/rm_8110",
        "down" : "/domains/diku-alfa/room/81.zon/rm_8120",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8012, R-number : 595
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
   To your east, a wide crack gapes through the strange material,
that covers the ground.
Extra description keywords(s): 
crack fault
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
To room (V-Number): 8001

Direction south . Keyword : (null)
Description:
  The glass stretches all the way to the horizon, along the fault-
line.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8022

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8011

Direction up . Keyword : (null)
Description:
  A staircase of transparent glass, only made visible through the
numerous reflexes from the ground, reach up to a glass road that
sweeps over the horizon to the south-west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8110

Direction down . Keyword : (null)
Description:
  Treacherous slabs of dull glass wih sharp edges provides a way 
down. One probably wouldn't be able to get back UP again, though!
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8120
*/
