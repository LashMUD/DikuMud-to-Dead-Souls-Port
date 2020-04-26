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
    SetShort("The square lair");
    SetLong("You are standing in the north-west part of the lair. Here's\n"+
        "another sign. There are a exit from the lair to the north.");
    SetItems( ([ 
        "north" : "You see a small tunnel leading north.",
        "east" : "another part of the lair.",
        "south" : "another part of the lair.",
        "sign" : "The sign says 'I'm wandering around in a everlasting tale,\n"+
            "               seeking the light to regain my pride\n"+
            "                           Corama...",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7045_jones_ettin" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7422",
        "east" : "/domains/diku-alfa/room/74.zon/rm_7418",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7420",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The square lair, Of zone : 17. V-Number : 7419, R-number : 543
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in the north-west part of the lair. Here's
another sign. There are a exit from the lair to the north.
Extra description keywords(s): 
sign

------- Chars present -------
jones cruncher ettin(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see a small tunnel leading north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7422

Direction east . Keyword : (null)
Description:
  another part of the lair.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7418

Direction south . Keyword : (null)
Description:
  another part of the lair.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7420
*/
