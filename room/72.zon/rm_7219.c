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
    SetShort("A dry sewer drain.");
    SetLong("You are in a dry but dirty sewer drain. The drain continues east and south.");
    SetItems( ([ 
        "east" : "You see a half-dry drain.",
        "south" : "You see another boring sewer drain.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7203_wererat" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/72.zon/rm_7217",
        "south" : "/domains/diku-alfa/room/72.zon/rm_7220",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A dry sewer drain., Of zone : 16. V-Number : 7219, R-number : 501
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a dry but dirty sewer drain. The drain continues east and south.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see a half-dry drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7217

Direction south . Keyword : (null)
Description:
  You see another boring sewer drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7220
*/
