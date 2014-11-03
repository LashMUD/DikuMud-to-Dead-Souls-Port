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

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Ravan's hideout");
    SetLong("   This place is a small, cosy place where no one disturbs you all\n"+
       "the time. The room has little decoration execpt for some pictures\n"+
        "on the wall.\n"+
        "You notice that there are no exits from this room.");
    SetItems( ([ 
        ({"pictures", "picture", "decoration"}) : "These pictures show's the friend's and foe's of Ravan.\n"+
	    "They are easy to seperate, as most of the foe's have the letters\n"+
	    "R.I.P. inscriped underneath them.",
        ({"foe", "foes", "enemies"}) : "There is only one picture yet... Dim.\n"+
	    "It pictures him hanging from a gallow, north of the town.\n"+
	    "It has the letters R.I.P. inscriped underneath.",
        ({"friend", "friends"}) : "The list include such prominent names as : God, Lottie, Kurgan,\n"+
	    "Ezzard, Mike, Sprocket and Stormbringer.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/55.zon/npc/5050_dragon_pet" : 1,
        ]) );
SetExits( ([
        ] ));
}

void init(){
   ::init();
}
