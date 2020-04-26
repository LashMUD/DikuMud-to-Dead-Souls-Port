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
    SetShort("The stalagmite T-cross");
    SetLong("You are standing in a cross. To the north you can see\n"+
        "some light. Otherwise it is dark.");
    SetItems( ([ 
        "north" : "You see some light ahead.",
        "east" : "",
        "south" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7417",
        "east" : "/domains/diku-alfa/room/74.zon/rm_7415",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7411",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The stalagmite T-cross, Of zone : 17. V-Number : 7414, R-number : 538
Sector type : City Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
You are standing in a cross. To the north you can see
some light. Otherwise it is dark.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see some light ahead.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7417

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7415

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7411
*/
