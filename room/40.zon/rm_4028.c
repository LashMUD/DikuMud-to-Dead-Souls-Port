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
    SetShort("The smelly tunnel");
    SetLong("   You are in a north-south leading tunnel, you see a small light\n"+
      "to the north. You notice a strange smell from the north..");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4004_orc" : 2,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4030",
        "south" : "/domains/diku-alfa/room/40.zon/rm_4026",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The smelly tunnel, Of zone : 7. V-Number : 4028, R-number : 191
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a north-south leading tunnel, you see a small light
to the north. You notice a strange smell from the north..

Extra description keywords(s): None
------- Chars present -------
kobold(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4030

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4026
*/
