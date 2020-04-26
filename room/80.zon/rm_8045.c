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
        "east" : "To the east you can see the top of a pyramid, standing inverted\n"+
            "for some strange reason... or perhaps you are hallucinating?",
        "south" : "Far to the south you can see the corner of a _very_ tall wall.",
        "west" : "The glass stretches all the way to the horizon.",
        "down" : "There is a small square trapdoor in the pattern here. It doesn't\n"+
        "change shape at all, as opposed to the rest of the pattern.",
        ({"lines", "patterns", "web"}) : "The patterns swirl and change all about you, except for one square\n"+
            "that remains black and unchanging.",
        "square" : "It looks like a trapdoor. There even is a rather small and \n"+
            "inconspicuous handle set in it next to a tiny keyhole.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8035",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8041",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8083",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8043",
        "down" : "/domains/diku-alfa/room/81.zon/rm_8150",
        ] ));
    SetDoor("down", "/domains/diku-alfa/room/doors/8045_8150");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8045, R-number : 611
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on what appears to be an expanse of black
glass. Beneath your feet perfectly straight lines form enormous,
web-like patterns, glowing with a bluish-green light. The sky is
a uniform pale grey, and the horizon seem to be much too close.
Extra description keywords(s): 
square
lines patterns web

------- Chars present -------
cursor(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8035

Direction east . Keyword : (null)
Description:
  To the east you can see the top of a pyramid, standing inverted
for some strange reason... or perhaps you are hallucinating?
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8041

Direction south . Keyword : (null)
Description:
  Far to the south you can see the corner of a _very_ tall wall.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8083

Direction west . Keyword : (null)
Description:
  The glass stretches all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8043

Direction down . Keyword : trapdoor door
Description:
  There is a small square trapdoor in the pattern here. It doesn't
change shape at all, as opposed to the rest of the pattern.
Exit flag: IS-DOOR CLOSED  
Key no: 8100
To room (V-Number): 8150
*/
