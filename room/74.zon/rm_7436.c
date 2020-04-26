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
    SetAmbientLight(0);
    SetShort("Entrance to lair");
    SetLong("The smell here is awfull. To the south you can see some\n"+
        "smoke. A tunnel leads north, and east.");
    SetItems( ([ 
        "north" : "",
        "east" : "A small cave is to the east.",
        "south" : "the only thing you can see are smoke.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7435",
        "east" : "/domains/diku-alfa/room/74.zon/rm_7422",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7437",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Entrance to lair, Of zone : 17. V-Number : 7436, R-number : 560
Sector type : Field Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
The smell here is awfull. To the south you can see some
smoke. A tunnel leads north, and east.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7435

Direction east . Keyword : (null)
Description:
  A small cave is to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7422

Direction south . Keyword : (null)
Description:
  the only thing you can see are smoke.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7437
*/
