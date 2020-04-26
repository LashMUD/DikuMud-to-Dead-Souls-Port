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
    SetShort("The red room");
    SetLong("   You are in the red room, one of the guest rooms in Dragons's mansion. The\n"+
        "walls are wallpapered a deep warm red, and dark mahogany panelling nicely com-\n"+
        "plements them. There is a large, warm waterbed and a sofa group in dark wood\n"+
        "with leather upholstery, including a coffee table. Heavy brown curtains are\n"+
        "pulled away from the wide windows, to reveal a nice view towards the grove.");
    SetItems( ([ 
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/89.zon/obj/key_8002" : 1,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/89.zon/rm_8913",
        ] ));
    SetDoor("west", "/domains/diku-alfa/room/doors/8913_8914");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The red room, Of zone : 22. V-Number : 8914, R-number : 651
Sector type : Inside Special procedure : No
Room flags: INDOORS PRIVATE 
Description:
   You are in the red room, one of the guest rooms in Dragons's mansion. The
walls are wallpapered a deep warm red, and dark mahogany panelling nicely com-
plements them. There is a large, warm waterbed and a sofa group in dark wood
with leather upholstery, including a coffee table. Heavy brown curtains are
pulled away from the wide windows, to reveal a nice view towards the grove.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
red key
closet

------- Exits defined -------
Direction west . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 8002
To room (V-Number): 8913
*/
