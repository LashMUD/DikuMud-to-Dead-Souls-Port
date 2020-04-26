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
    SetShort("The inner Lair");
    SetLong("You are in a octagonal room with smooth purple stone walls.  The floor is \n"+
        "made from black stone.  In the western wall you see a large black stone door.");
    SetItems( ([ 
        "south" : "You look back through the door into the lair.",
        "west" : "You see the treasury.",
        ] ));

    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7200_mindflayer_master" :1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/72.zon/rm_7202",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7200",
        ] ));
SetDoor("west", "/domains/diku-alfa/room/doors/7200_7201");
SetDoor("south", "/domains/diku-alfa/room/doors/7201_7202"); 
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The inner Lair, Of zone : 16. V-Number : 7201, R-number : 483
Sector type : Inside Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a octagonal room with smooth purple stone walls.  The floor is 
made from black stone.  In the western wall you see a large black stone door.
Extra description keywords(s): None
------- Chars present -------
master mind mindflayer(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : door wooden
Description:
  You look back through the door into the lair.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7202

Direction west . Keyword : door stone
Description:
  You see the treasury.
Exit flag: IS-DOOR CLOSED LOCKED  
Key no: 7205
To room (V-Number): 7200
*/
