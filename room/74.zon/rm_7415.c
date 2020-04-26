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
    SetShort("The blind end room");
    SetLong("This room is obviously a blind end. To the north you see\n"+
        "a primitive picture.");
    SetItems( ([ 
        "north" : "You see a primitive picture",
        "west" : "",
        ({"primitive", "picture"}) : "You see some persons dancing around a huge sun. The\n"+
            "sun is about 7 feet in diameter, which shows the size\n"+
            "of the picture.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7416",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7414",
        ] ));
    SetDoor("north", "/domains/diku-alfa/room/doors/7415_7416");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The blind end room, Of zone : 17. V-Number : 7415, R-number : 539
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
This room is obviously a blind end. To the north you see
a primitive picture.
Extra description keywords(s): 
primitive picture

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : sun
Description:
  You see a primitive picture
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7416

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7414
*/
