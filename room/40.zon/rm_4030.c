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
    SetShort("The light cave");
    SetLong("   You are in a light cave, through a hole large above you, you see \n"+
        "the sky. A small tunnel to the south is the only way out.\n"+
        "You notice the source of the strange smell, all around you there is\n"+
        "corpses from several monsters.");
    SetItems( ([
        "south" : "",
        ({"corpse", "corpses"}) : "IT STINKS!",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4000_large_snake" : 1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/40.zon/rm_4028",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The light cave, Of zone : 7. V-Number : 4030, R-number : 193
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are in a light cave, through a hole large above you, you see 
the sky. A small tunnel to the south is the only way out.
You notice the source of the strange smell, all around you there is
corpses from several monsters.

Extra description keywords(s): 
corpse corpses

------- Chars present -------
kobold(MOB)
snake(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4028
*/
