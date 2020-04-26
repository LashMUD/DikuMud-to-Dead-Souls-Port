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
    SetShort("The Mighty Chain of Naris");
    SetLong("This place truly a splendid view of the WHOLE COUNTRY SIDE!!! A magnificent\n"+
        "light shines upon you and the way up through the clouds is opened. Up there\n"+
        "you can now see the Mansion of Naris, Residence of the Greater God Redferne.\n"+
        "The chain beneath you seems to evaporate in the mustering clouds that\n"+
        "surround you by now.");
    SetItems( ([ 
        "up" : "You see the sunny top of the clouds. Beyond these, the Mansion towers before\n"+
            "your eyes. Beautiful!!",
        "down" : "You see nothing but the thick clouds. They've closed completely around the\n"+
            "Chain.",
        ] ));
    SetExits( ([
        "up" : "/domains/diku-alfa/room/79.zon/rm_7900",
        "down" : "/domains/diku-alfa/room/79.zon/rm_7917",
        ] ));
}

void init(){
   ::init();
}

/* NO_NPC's allowed in room*/
int CanReceive(object ob) {
    if(ob && !inherits(LIB_NPC, ob)){
    return 1;
    }
    else
    return 0;
}

/* Extra Information Original Diku Output 
Room name: The Mighty Chain of Naris, Of zone : 19. V-Number : 7918, R-number : 588
Sector type : Mountains Special procedure : No
Room flags: NO_MOB 
Description:
This place truly a splendid view of the WHOLE COUNTRY SIDE!!! A magnificent
light shines upon you and the way up through the clouds is opened. Up there
you can now see the Mansion of Naris, Residence of the Greater God Redferne.
The chain beneath you seems to evaporate in the mustering clouds that
surround you by now.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : (null)
Description:
  You see the sunny top of the clouds. Beyond these, the Mansion towers before
your eyes. Beautiful!!
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7900

Direction down . Keyword : (null)
Description:
  You see nothing but the thick clouds. They've closed completely around the
Chain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7917
*/
