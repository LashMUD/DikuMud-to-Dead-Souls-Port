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
    SetShort("Under the pit");
    SetLong("You stand in a completely dark cavern leading west. The wall looks weird here.");
    SetItems( ([ 
        "east" : "",
        "west" : "",
        ({"wall", "crack", "rock"}) : "There is a crack here that looks like it has been made recently.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/71.zon/npc/7005_maggot" :1,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/71.zon/rm_7112",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Under the pit, Of zone : 15. V-Number : 7122, R-number : 476
Sector type : Inside Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in a completely dark cavern leading west. The wall looks weird here.
Extra description keywords(s): 
wall

------- Chars present -------
maggot(MOB)
rat(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : crack wall rock
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7112
*/
