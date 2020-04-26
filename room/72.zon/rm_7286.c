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

    SetTerrainType(T_INDOORS | T_ROUGH);
    SetAmbientLight(30);
    SetShort("The hells yard");
    SetLong("You are standing in a lot of mud. A disguisting smell surrounds\n"+
        "the place, and makes you fell sick. Small flames sometimes shoot\n"+
        "up from the hot mud. To the west there is a small door. To the \n"+
        "north you can see an iron door.");
    SetItems( ([ 
        "north" : "To dark to tell.",
        "west" : "To dark to tell.",
        ] ));

    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7000_mudmonster" :1,
        "/domains/diku-alfa/room/72.zon/npc/7013_mudmonster_aggressive" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/72.zon/rm_7285",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7283",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The hells yard, Of zone : 16. V-Number : 7286, R-number : 521
Sector type : Mountains Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
You are standing in a lot of mud. A disguisting smell surrounds
the place, and makes you fell sick. Small flames sometimes shoot
up from the hot mud. To the west there is a small door. To the 
north you can see an iron door.
Extra description keywords(s): None
------- Chars present -------
mud monster mudmonster(MOB)
mud monster mudmonster(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : door iron
Description:
  To dark to tell.
Exit flag: IS-DOOR  
Key no: -1
To room (V-Number): 7285

Direction west . Keyword : (null)
Description:
  To dark to tell.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7283
*/
