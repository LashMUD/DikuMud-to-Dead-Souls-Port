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
    SetLong("   You are standing in the south end of the hallway. There are doors in the\n"+
        "elegant oak-panelled walls to the south, east and west. Many different\n"+
        "coat-of-arms adorn the walls here.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/89.zon/rm_8911",
        "east" : "/domains/diku-alfa/room/89.zon/rm_8914",
        "south" : "/domains/diku-alfa/room/89.zon/rm_8915",
        "west" : "/domains/diku-alfa/room/89.zon/rm_8916",
        ] ));
SetDoor("east", "/domains/diku-alfa/room/doors/8913_8914");
SetDoor("south", "/domains/diku-alfa/room/doors/8913_8915");
SetDoor("west", "/domains/diku-alfa/room/doors/8913_8916");

}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The hallway, Of zone : 22. V-Number : 8913, R-number : 650
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are standing in the south end of the hallway. There are doors in the
elegant oak-panelled walls to the south, east and west. Many different
coat-of-arms adorn the walls here.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8911

Direction east . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 8002
To room (V-Number): 8914

Direction south . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8915

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8916
*/
