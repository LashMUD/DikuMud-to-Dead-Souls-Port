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
    SetShort("The entrance.");
    SetLong("You are in a very dark room. You notice that some faces are\n"+
        "staring at you from inside the walls. In the middle of the room\n"+
        "there is a small altar. To the north there is a small round\n"+
        "door.");
    SetItems( ([ 
        "north" : "A beam of red light seeps through a hole in the door.",
        "up" : "",
        "altar" : "This altar are very special. Faces are smiling from it. There\n"+
            "is a triangle in top of it.",
        "triangle" : "The triangle are filled with small symbols. A language you have\n"+
            "never seen before.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7000_mudmonster" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/72.zon/rm_7281",
        "up" : "/domains/diku-alfa/room/71.zon/rm_7116",
        ] ));
    SetDoor("up", "/domains/diku-alfa/room/doors/7116_7280");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The entrance., Of zone : 16. V-Number : 7280, R-number : 515
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a very dark room. You notice that some faces are
staring at you from inside the walls. In the middle of the room
there is a small altar. To the north there is a small round
door.
Extra description keywords(s): 
triangle
altar

------- Chars present -------
mud monster mudmonster(MOB)
mud monster mudmonster(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : small round door
Description:
  A beam of red light seeps through a hole in the door.
Exit flag: IS-DOOR  
Key no: -1
To room (V-Number): 7281

Direction up . Keyword : secret door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7116
*/
