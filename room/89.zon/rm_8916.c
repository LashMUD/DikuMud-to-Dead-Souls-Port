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
    SetShort("The ballroom");
    SetLong("   You are standing in the middle of a vast palisander floor. This is where\n"+
        "Dragon entertains large number of guests, but the cloth-covered chairs\n"+
        "standing forlornly in a corner suggests that this does not happen often.\n"+
        "There are doors in the south and west walls, while to the east there is a\n"+
        "short corridor to the greenhouse.");
    SetItems( ([ 
        "east" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/89.zon/rm_8913",
        "south" : "/domains/diku-alfa/room/89.zon/rm_8918",
        "west" : "/domains/diku-alfa/room/89.zon/rm_8917",
        ] ));
SetDoor("east", "/domains/diku-alfa/room/doors/8913_8916");
SetDoor("south", "/domains/diku-alfa/room/doors/8916_8918");


}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The ballroom, Of zone : 22. V-Number : 8916, R-number : 653
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are standing in the middle of a vast palisander floor. This is where
Dragon entertains large number of guests, but the cloth-covered chairs
standing forlornly in a corner suggests that this does not happen often.
There are doors in the south and west walls, while to the east there is a
short corridor to the greenhouse.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8913

Direction south . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8918

Direction west . Keyword : door
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8917
*/
