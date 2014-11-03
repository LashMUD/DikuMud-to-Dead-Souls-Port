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

    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(0);
    SetShort("The dark passageway");
    SetLong("You can't see anything but the ground where you put your feet. The\n"+
        "passageway seems to continue south and north.");
    SetItems( ([ 
        "north" : "You can't see anything in that direction and your light isn't enough to light\n"+
            "that far.",
        "south" : "You can't see anything in that direction and your light isn't enough to light\n"+
            "that far.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/7057",
        "south" : "/domains/diku-alfa/room/70.zon/7059",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The dark passageway, Of zone : 14. V-Number : 7058, R-number : 441
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You can't see anything but the ground where you put your feet. The
passageway seems to continue south and north.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can't see anything in that direction and your light isn't enough to light
that far.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7057

Direction south . Keyword : (null)
Description:
  You can't see anything in that direction and your light isn't enough to light
that far.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7059
*/
