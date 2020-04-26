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

    SetClimate("indoors");
    SetTerrainType(T_ROUGH);
    SetAmbientLight(30);
    SetShort("Under The Shaft");
    SetLong("A ladder leads up from here to the Shaft.\n"+
        "A small opening leads west from here.");
    SetItems( ([ 
        "west" : "You can see a narrow ledge going north and south.",
        "up" : "It's too dark up there.",
        ] ));
    SetExits( ([
        "west" : "/domains/diku-alfa/room/71.zon/rm_7120",
        "up" : "/domains/diku-alfa/room/70.zon/rm_7041",
        ] ));
}

void init(){
   ::init();
}
/* Extra Information Original Diku Output 
Room name: Under The Shaft, Of zone : 15. V-Number : 7123, R-number : 477
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
A ladder leads up from here to the Shaft.
A small opening leads west from here.
Extra description keywords(s): None
------- Chars present -------
rat(MOB)

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  You can see a narrow ledge going north and south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7120

Direction up . Keyword : (null)
Description:
  It's too dark up there.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7041
*/
