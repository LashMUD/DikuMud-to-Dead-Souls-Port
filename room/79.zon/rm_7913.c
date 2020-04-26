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
    SetShort("The Monster Pen");
    SetLong("This looks like the cage in which a large carnivor is being kept. Judging by\n"+
        "the state the walls are in, this could very well be a large AGGRESSIVE animal. \n"+
        "This makes you pretty insecure, this stating your feeling about the place, \n"+
        "quite mildly.");
    SetItems( ([ 
        "west" : "This looks like the only exit from here.",
        ] ));
    SetExits( ([
        "west" : "/domains/diku-alfa/room/79.zon/rm_7904",
        ] ));
    SetDoor("west", "/domains/diku-alfa/room/doors/7904_7913");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Monster Pen, Of zone : 19. V-Number : 7913, R-number : 583
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
This looks like the cage in which a large carnivor is being kept. Judging by
the state the walls are in, this could very well be a large AGGRESSIVE animal. 
This makes you pretty insecure, this stating your feeling about the place, 
quite mildly.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : door cage metal pen
Description:
  This looks like the only exit from here.
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7904
*/
