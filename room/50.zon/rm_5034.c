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

    SetTerrainType(T_ROAD | T_WOODS);
    SetAmbientLight(30);
    SetShort("The ancient path");
    SetLong("  You are standing on the ancient path which runs in the north-\n"+
        "south direction.\n"+
        "You can follow the path north or south where it takes a turn eastwards.");
    SetItems( ([ 
        "north" : "You see the ancient path.",
        "south" : "You trace the path carefully and se no immidiate dangers.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/50.zon/npc/6001_rabbit" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5033",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5035",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The ancient path, Of zone : 9. V-Number : 5034, R-number : 301
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
  You are standing on the ancient path which runs in the north-
south direction.
You can follow the path north or south where it takes a turn eastwards.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the ancient path.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5033

Direction south . Keyword : (null)
Description:
  You trace the path carefully and se no immidiate dangers.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5035
*/
