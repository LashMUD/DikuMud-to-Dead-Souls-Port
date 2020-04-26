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
    SetShort("The sewer bend.");
    SetLong("You find yourself in an ordinary sewer bend, which bend from west to north.");
    SetItems( ([ 
        "north" : "You see a sewer drain.",
        "west" : "You see a sewer drain.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7203_wererat" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/72.zon/rm_7224",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7222",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sewer bend., Of zone : 16. V-Number : 7223, R-number : 505
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You find yourself in an ordinary sewer bend, which bend from west to north.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see a sewer drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7224

Direction west . Keyword : (null)
Description:
  You see a sewer drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7222
*/
