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
    SetShort("The L-shaped room.");
    SetLong("You are standing in deep darkness. To the south there is a small exit.\n"+
        "To the east you can see a gaping hole.");
    SetItems( ([ 
        "east" : "",
        "south" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7011_morkoth" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7424",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7422",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The L-shaped room., Of zone : 17. V-Number : 7423, R-number : 547
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in deep darkness. To the south there is a small exit.
To the east you can see a gaping hole.
Extra description keywords(s): None
------- Chars present -------
wanderer(MOB)
morkoth(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7424

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7422
*/
