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
    SetShort("The Shrine of Eru");
    SetLong("  This is the holy shrine of all the good people in the land who worship\n"+
        "Eru, the creator of the universe. This is a large round hall with a pit for\n"+
        "sacrifices in the north part of it. The walls are covered with magnificent\n"+
        "paintings depicting the High Priest Doz, founder of this shrine, during some\n"+
        "of his adventures. An iron door is set in the east wall of the hall. On the\n"+
        "door is a golden plate with some writing on it.");
    SetItems( ([
        ({"painting", "paintings"}) : "One of the paintings shows Doz fighting the dreadful Green Dragon, his sworn\n"+
            "enemy.",
        ({"plate", "writing"}) : "The writing on the plate says:\n\n"+
            "                Doz the High Priest\n\n"+
            "                No entrance allowed.",
        "door" : "The door has a lock which looks very complicated and hard to pick.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/33.zon/obj/3311_pit" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/33.zon/rm_3306",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3139",
        ]) );
    SetDoor("east", "/domains/diku-alfa/room/doors/3305_3306");//requires key_3310
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Shrine of Eru, Of zone : 4. V-Number : 3305, R-number : 113
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   This is the holy shrine of all the good people in the land who worship
Eru, the creator of the universe.  This is a large round hall with a pit for
sacrifices in the north part of it.  The walls are covered with magnificent
paintings depicting the High Priest Doz, founder of this shrine, during some
of his adventures.  An iron door is set in the east wall of the hall.  On the
door is a golden plate with some writing on it.

Extra description keywords(s): 
door
plate
painting paintings

------- Chars present -------

--------- Contents ---------
pit

------- Exits defined -------
Direction east . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3310
To room (V-Number): 3306

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3139
*/
