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
#include <terrain_types.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    
    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("A Gravel Path on the Graveyard");
    SetLong(" You are on a gravel path winding its way between dark evergreen trees on\n"+
        "the graveyard. The path leads north and east. A small shed is to the west.");
    SetItems( ([
        "north" : "The gravel path continues northwards.",
        "east" : "The gravel path continues eastwards.",
        "west" : "It is a small black-painted shed with a wooden door.",
        "shed" : "It is a small black-painted shed with a wooden door.",
        ]) );  
    SetExits( ([
        "north" : "/domains/diku-alfa/room/36.zon/rm_3610",
        "east" : "/domains/diku-alfa/room/36.zon/rm_3614",
        "west" : "/domains/diku-alfa/room/36.zon/rm_3613",
        ]) );
    SetDoor("west", "/domains/diku-alfa/room/doors/3612_3613");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: A Gravel Path on the Graveyard, Of zone : 6. V-Number : 3612, R-number : 139
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
  You are on a gravel path winding its way between dark evergreen trees on
the graveyard.  The path leads north and east.  A small shed is to the west.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The gravel path continues northwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3610

Direction east . Keyword : (null)
Description:
  The gravel path continues eastwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3614

Direction west . Keyword : door
Description:
  It is a small black-painted shed with a wooden door.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 3613
*/
