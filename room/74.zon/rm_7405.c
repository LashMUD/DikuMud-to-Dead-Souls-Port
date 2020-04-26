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
    SetShort("The secret room");
    SetLong("There is dust all over the place. It looks like nobody\n"+
        "has been here for ages. In the middle of the room you see\n"+
        "a socket with a crystal globe. The globe glows with a\n"+
        "pulsing light. To the north you see a stone door. To the\n"+
        "south you see a grey block.");
    SetItems( ([ 
        "north" : "You see a round stone door.",
        "south" : "You see a grey block",
        "socket" : "The socket looks like the work of a dwarf. It is VERY\n"+
            "beautifull.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7404",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7406",
        ] ));
    SetDoor("north", "/domains/diku-alfa/room/doors/7404_7405");
    SetDoor("south", "/domains/diku-alfa/room/doors/7405_7406");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The secret room, Of zone : 17. V-Number : 7405, R-number : 529
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
There is dust all over the place. It looks like nobody
has been here for ages. In the middle of the room you see
a socket with a crystal globe. The globe glows with a
pulsing light. To the north you see a stone door. To the
south you see a grey block.
Extra description keywords(s): 
socket

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : round stone door
Description:
  You see a round stone door.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7404

Direction south . Keyword : grey block
Description:
  You see a grey block
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7406
*/
