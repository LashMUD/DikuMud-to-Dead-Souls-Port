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
    SetShort("The treasure room");
    SetLong("This room is rich ornamented. The walls has carves showing\n"+
        "persons dancing around a sun which is drawed at the floor. It\n"+
        "looks very old, and it is very dusty. To the south you see a\n"+
        "secret door.");
    SetItems( ([ 
        "south" : "you can see a picture with some persons crawling around a\n"+
            "huge moon.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/74.zon/rm_7415",
        ] ));
SetDoor("south", "/domains/diku-alfa/room/doors/7415_7416");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The treasure room, Of zone : 17. V-Number : 7416, R-number : 540
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
This room is rich ornamented. The walls has carves showing
persons dancing around a sun which is drawed at the floor. It
looks very old, and it is very dusty. To the south you see a
secret door.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : door picture sun moon
Description:
  you can see a picture with some persons crawling around a
huge moon.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7415
*/
