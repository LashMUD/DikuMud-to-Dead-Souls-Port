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
    SetShort("Entrance to Mage's Guild");
    SetLong(" The entrance hall is a small poorly lit room.");
    SetItems( ([
        "north" : "You see the main street.",
        "south" : "You see your favourite place, the Mage's Bar.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3024_sorcerer_guard" : 1,
        "/domains/diku-alfa/room/30.zon/npc/3060_cityguard" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3012",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3018",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Entrance to Mage's Guild, Of zone : 1. V-Number : 3017, R-number : 23
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   The entrance hall is a small, poor lighted room.

Extra description keywords(s): None
------- Chars present -------
sorcerer(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the main street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3012

Direction south . Keyword : (null)
Description:
  You see your favourite place, the Mage's Bar.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3018
*/
