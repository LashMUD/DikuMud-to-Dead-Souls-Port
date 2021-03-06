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
#include <terrain_types.h>

inherit LIB_ROOM;

static void create() {
    room::create();

    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("The narrow ledge");
    SetLong("You are in the progress of walking all the way around the ledge since there's\n"+
        "no way of turning around on this all too narrow path. There IS another exit\n"+
        "from here but that leads right into mid-air and with high probability of a\n"+
        "free fall session afterwards.");
    SetItems( ([ 
        "north" : "North. The ledge leads further north.",
        "east" : "You stare into mid-air, and right under there's absolutely nothing but\n"+
            "darkness. You shiver by the thought of falling that distance.",
        "south" : "South. You can just make out the south-western corner of this ledge.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/71.zon/rm_7107",
        "east" : "/domains/diku-alfa/room/71.zon/rm_7190",
        "south" : "/domains/diku-alfa/room/71.zon/rm_7111",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The narrow ledge, Of zone : 15. V-Number : 7110, R-number : 464
Sector type : Mountains Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You are in the progress of walking all the way around the ledge since there's
no way of turning around on this all too narrow path. There IS another exit
from here but that leads right into mid-air and with high probability of a
free fall session afterwards.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  North. The ledge leads further north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7107

Direction east . Keyword : (null)
Description:
  You stare into mid-air, and right under there's absolutely nothing but
darkness. You shiver by the thought of falling that distance.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7190

Direction south . Keyword : (null)
Description:
  South. You can just make out the south-western corner of this ledge.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7111
*/
