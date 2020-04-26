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

    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(30);
    SetShort("The Sewer Store Room");
    SetLong("You stand in a small room lit by a single torch set in the wall. The only \n"+
        "way out of here is to the north.");
    SetItems( ([ 
        "north" : "To the north you see a pipe junction.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/70.zon/npc/7003_spider" :3,
        ]) );
    SetExits( ([
         "north" : "/domains/diku-alfa/room/70.zon/rm_7038",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Sewer Store Room, Of zone : 14. V-Number : 7039, R-number : 425
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
You stand in a small room lit by a single torch set in the wall. The only 
way out of here is to the north.
Extra description keywords(s): None
------- Chars present -------
spider(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north you see a pipe junction.
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7038
*/
