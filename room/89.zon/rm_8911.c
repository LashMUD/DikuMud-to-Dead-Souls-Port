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
    SetShort("The hallway");
    SetLong("   You are in the north end of a connecting hallway, tastefully decorated with\n"+
        "oak paneling and the coat-of-arms of various famous nobles hung on the walls.\n"+
        "The hallway leads south, and there is a door in the eastern wall.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "south" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/89.zon/rm_8910",
        "east" : "/domains/diku-alfa/room/89.zon/rm_8912",
        "south" : "/domains/diku-alfa/room/89.zon/rm_8913",
        ] ));
    SetDoor("north", "/domains/diku-alfa/room/doors/8910_8911");
    SetDoor("east", "/domains/diku-alfa/room/doors/8911_8912");
}

void init(){
   ::init();
}
/* Extra Information Original Diku Output 
Room name: The hallway, Of zone : 22. V-Number : 8911, R-number : 648
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are in the north end of a connecting hallway, tastefully decorated with
oak paneling and the coat-of-arms of various famous nobles hung on the walls.
The hallway leads south, and there is a door in the eastern wall.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8910

Direction east . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 8001
To room (V-Number): 8912

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8913
*/
