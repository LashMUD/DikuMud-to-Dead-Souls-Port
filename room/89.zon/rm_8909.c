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
    SetShort("The croquet lawn");
    SetLong("   You are standing on a immaculately manicured green lawn, the kind you only\n"+
        "get after 200 years of meticulous work. There is a winding stone path leading\n"+
        "from the wood's edge to the north, to the softly shimmering, rainbow-colored\n"+
        "mansion to the south. This place enjoys a perpetual cool, sunny summers after-\n"+
        "noon.");
    SetItems( ([ 
        "north" : "To the north, the winding stone path leads into the holy grove.",
        "south" : "To the south, the path leads straight up to the front door of the mansion.",
        "mansion" : "The mansion is a sprawling, two-storey affair with three wings, where the top\n"+
            "of one wing serves as balcony. The  walls look as marble would do, if marble\n"+
            "changed color slowly, continuously, through the entire spectrum. There are\n"+
            "large windows all over the house.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/89.zon/rm_8906",
        "south" : "/domains/diku-alfa/room/89.zon/rm_8910",
        ] ));
SetDoor("south", "/domains/diku-alfa/room/doors/8909_8910");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The croquet lawn, Of zone : 22. V-Number : 8909, R-number : 646
Sector type : Field Special procedure : No
Room flags: NO_MOB 
Description:
   You are standing on a immaculately manicured green lawn, the kind you only
get after 200 years of meticulous work. There is a winding stone path leading
from the wood's edge to the north, to the softly shimmering, rainbow-colored
mansion to the south. This place enjoys a perpetual cool, sunny summers after-
noon.
Extra description keywords(s): 
mansion

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north, the winding stone path leads into the holy grove.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8906

Direction south . Keyword : door
Description:
  To the south, the path leads straight up to the front door of the mansion.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8910
*/
