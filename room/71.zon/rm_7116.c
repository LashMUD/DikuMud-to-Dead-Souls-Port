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

    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("The northeastern corner of the ledge");
    SetLong("You stand, swaying out from the ledge, with only a couple of inches of safe,\n"+
        "solid ledge under your feet. The ledge continues to the west and leads south\n"+
        "from here into darkness.");
    SetItems( ([ 
        "south" : "",
        "west" : "The ledge continues west.",
        "down" : "",
        ({"ground", "ledge", "rock"}) : "The ground here seems a little different from all the other ledges along the\n"+
            "Abyss. There's a kind of soft soil on this ledge, maybe you should look \n"+
            "carefully at this. It seems to be of some interest.",
        ({"soil", "soft", "earth"}) : "You can just make out the outline of a trapdoor here in the soil. The earth\n"+
            "is probably there to conceal a secret entrance. This looks as if it leads down\n"+
            "into the seemingly solid rock face of the ledge.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/71.zon/rm_7117",
        "west" : "/domains/diku-alfa/room/71.zon/rm_7113",
        "down" : "/domains/diku-alfa/room/72.zon/rm_7280",
        ] ));
    SetDoor("down", "/domains/diku-alfa/room/doors/7116_7280");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The northeastern corner of the ledge, Of zone : 15. V-Number : 7116, R-number : 470
Sector type : Mountains Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You stand, swaying out from the ledge, with only a couple of inches of safe,
solid ledge under your feet. The ledge continues to the west and leads south
from here into darkness.
Extra description keywords(s): 
soil soft earth
ground ledge rock

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7117

Direction west . Keyword : (null)
Description:
  The ledge continues west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7113

Direction down . Keyword : secret trapdoor entrance
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7280
*/
