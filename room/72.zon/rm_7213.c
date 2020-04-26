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
    SetShort("The sewer drain.");
    SetLong("You are in a dry sewer drain which bends to the east.");
    SetItems( ([ 
        "east" : "You can see the drain continuing east.",
        "south" : "You can see the drain continuing south.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7203_wererat" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/72.zon/rm_7214",
        "south" : "/domains/diku-alfa/room/72.zon/rm_7212",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sewer drain., Of zone : 16. V-Number : 7213, R-number : 495
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a dry sewer drain which bends to the east.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You can see the drain continuing east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7214

Direction south . Keyword : (null)
Description:
  You can see the drain continuing south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7212
*/
