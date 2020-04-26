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
    SetShort("Quifael's hall");
    SetLong("You are in sparsely decorated and quite dusty hall.  Old wooden doors lead\n"+
        "north, east and south and to the west is the front door.\n"+
        "An old mirror hangs on the wall.");
    SetItems( ([ 
        "north" : "The study is to the north.",
        "east" : "The laboratory is to the east.",
        "south" : "The kitchen is to the south.",
        "west" : "The front door leads to Park Road.",
        "mirror" : "You see yourself looking back at you.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/69.zon/rm_6901",
        "east" : "/domains/diku-alfa/room/69.zon/rm_6902",
        "south" : "/domains/diku-alfa/room/69.zon/rm_6905",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3126",
        ] ));
    SetDoor("west", "/domains/diku-alfa/room/doors/3126_6904");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Quifael's hall, Of zone : 13. V-Number : 6904, R-number : 390
Sector type : Inside Special procedure : No
Room flags: INDOORS PRIVATE 
Description:
You are in sparsely decorated and quite dusty hall.  Old wooden doors lead
north, east and south and to the west is the front door.
An old mirror hangs on the wall.
Extra description keywords(s): 
mirror

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The study is to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6901

Direction east . Keyword : (null)
Description:
  The laboratory is to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6902

Direction south . Keyword : (null)
Description:
  The kitchen is to the south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6905

Direction west . Keyword : door
Description:
  The front door leads to Park Road.
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3301
To room (V-Number): 3126
*/
