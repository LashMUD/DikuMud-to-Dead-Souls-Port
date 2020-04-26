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
    SetShort("East tunnel");
    SetLong("You are standing in dark tunnel, the exits are east\n"+
        "and west. To the west you see a wooden door.");
    SetItems( ([ 
        "east" : "You can see a muddy tunnel.",
        "west" : "You can see a wooden door.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7402",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7418",
        ] ));
    SetDoor("west", "/domains/diku-alfa/room/doors/7418_7421");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: East tunnel, Of zone : 17. V-Number : 7421, R-number : 545
Sector type : City Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
You are standing in dark tunnel, the exits are east
and west. To the west you see a wooden door.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You can see a muddy tunnel.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7402

Direction west . Keyword : wooden door
Description:
  You can see a wooden door.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7418
*/
