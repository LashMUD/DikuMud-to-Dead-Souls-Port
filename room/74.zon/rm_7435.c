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
    SetShort("Dark tunnel");
    SetLong("You are standing in a dark tunnel. It continues to the north\n"+
        "and to the south. Bones are spred on the floor");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        ({"bones", "bone"}) : "it looks like bones of a human.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7042_naga_guardian" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7434",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7436",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Dark tunnel, Of zone : 17. V-Number : 7435, R-number : 559
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in a dark tunnel. It continues to the north
and to the south. Bones are spred on the floor
Extra description keywords(s): 
bones bone

------- Chars present -------
guardian naga(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7434

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7436
*/
