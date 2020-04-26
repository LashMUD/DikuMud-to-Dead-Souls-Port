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
    SetShort("The blue room");
    SetLong("   You are in the blue room, one of the guest rooms in Dragon's mansion. The\n"+
        "walls are (surprise!) blue, and the rest of the room is decorated in similar\n"+
        "shades, producing a very nice, cool effect. There is a large bed and a\n"+
        "matching set of sofas, easy-chairs and a coffee table. Through the venetian\n"+
        "blinds in front of the large east window you can see the edge of the grove.");
    SetItems( ([ 
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/89.zon/obj/key_8001" : 1,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/89.zon/rm_8911",
        ] ));
    SetDoor("west", "/domains/diku-alfa/room/doors/8911_8912");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The blue room, Of zone : 22. V-Number : 8912, R-number : 649
Sector type : Inside Special procedure : No
Room flags: INDOORS PRIVATE 
Description:
   You are in the blue room, one of the guest rooms in Dragon's mansion. The
walls are (surprise!) blue, and the rest of the room is decorated in similar
shades, producing a very nice, cool effect. There is a large bed and a
matching set of sofas, easy-chairs and a coffee table. Through the venetian
blinds in front of the large east window you can see the edge of the grove.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
blue key
closet

------- Exits defined -------
Direction west . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 8001
To room (V-Number): 8911
*/
