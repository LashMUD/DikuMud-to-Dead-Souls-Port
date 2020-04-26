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
    SetShort("The corridor.");
    SetLong("The corridor is glowing oppressively in a red hue. You can hear wailing\n"+
        "through an open black hole to the east. To the south there is a round door.");
    SetItems( ([ 
        "south" : "",
        "east" : "The hole seems more black than the night. It is appears to be \"eating\" the\n"+
            "red light around it.",
        ({"small", "round", "door"}) : "The door is completely round without a keyhole.",
        ({"red", "light"}) : "The red light glows from the walls.",
        "walls" : "The walls look alive.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7000_mudmonster" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/72.zon/rm_7282",
        "south" : "/domains/diku-alfa/room/72.zon/rm_7280",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The corridor., Of zone : 16. V-Number : 7281, R-number : 516
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
The corridor is glowing oppressively in a red hue. You can hear wailing
through an open black hole to the east. To the south there is a round door.
Extra description keywords(s): 
walls
red light
small round door

------- Chars present -------
mud monster mudmonster(MOB)
mud monster mudmonster(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The hole seems more black than the night. It is appears to be "eating" the
red light around it.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7282

Direction south . Keyword : small round door
Description:
  UNDEFINED
Exit flag: IS-DOOR  
Key no: -1
To room (V-Number): 7280
*/
