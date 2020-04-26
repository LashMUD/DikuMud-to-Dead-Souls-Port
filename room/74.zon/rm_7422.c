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
    SetShort("North tunnel");
    SetLong("You are standing in a dark tunnel, it leads upwards.");
    SetItems( ([ 
        "north" : "The dark tunnel continues.",
        "south" : "You can see the lair.",
        "west" : "You can see a cave entrance.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7007_wanderer_evil" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7423",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7419",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7436",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: North tunnel, Of zone : 17. V-Number : 7422, R-number : 546
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in a dark tunnel, it leads upwards.
Extra description keywords(s): None
------- Chars present -------
morkoth(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The dark tunnel continues.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7423

Direction south . Keyword : (null)
Description:
  You can see the lair.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7419

Direction west . Keyword : (null)
Description:
  You can see a cave entrance.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7436
*/
