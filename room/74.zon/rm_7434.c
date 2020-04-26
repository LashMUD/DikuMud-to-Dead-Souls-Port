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
    SetShort("Stair-room");
    SetLong("You are standing in a small room. Drawings of faces in pain\n"+
        "are on the walls. You can fell darkness is ruling the place.\n"+
        "there are two exits: south and down.");
    SetItems( ([ 
        "south" : "nothing but darkness",
        "down" : "A sign is blocking the way: 'This has not been implementated\n"+
            "yet'.",
        ] ));
    SetExits( ([
       "south" : "/domains/diku-alfa/room/74.zon/rm_7435",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Stair-room, Of zone : 17. V-Number : 7434, R-number : 558
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in a small room. Drawings of faces in pain
are on the walls. You can fell darkness is ruling the place.
there are two exits: south and down.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  nothing but darkness
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7435

Direction down . Keyword : (null)
Description:
  A sign is blocking the way: 'This has not been implementated
yet'.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
