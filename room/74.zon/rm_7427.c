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
    SetShort("The L-shaped room");
    SetLong("You are standing in a L-shaped room. You can hear\n"+
        "noices from the long tunnel to the east. You can feel\n"+
        "fear! A sign is hanging on the wall.");
    SetItems( ([ 
        "north" : "",
        "east" : "a long dark tunnel.",
        "sign" : "The sign says 'DANGER!!'.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7426",
        "east" : "/domains/diku-alfa/room/74.zon/rm_7428",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The L-shaped room, Of zone : 17. V-Number : 7427, R-number : 551
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in a L-shaped room. You can hear
noices from the long tunnel to the east. You can feel
fear! A sign is hanging on the wall.
Extra description keywords(s): 
sign

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7426

Direction east . Keyword : (null)
Description:
  a long dark tunnel.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7428
*/
