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
    SetAmbientLight(0);
    SetShort("The large cave");
    SetLong("   You are in the southeast end of a large cave. To the east you\n"+
        "notice a small tunnel.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/meals/4052_mushroom" : 1,
        "/domains/diku-alfa/room/40.zon/npc/4055_large_hobgoblin" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4069",
        "east" : "/domains/diku-alfa/room/40.zon/rm_4072",
        "west" : "/domains/diku-alfa/room/40.zon/rm_4070",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The large cave, Of zone : 7. V-Number : 4071, R-number : 216
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in the southeast end of a large cave. To the east you
notice a small tunnel.

Extra description keywords(s): None
------- Chars present -------
warrior(MOB)

--------- Contents ---------
mushroom

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4069

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4072

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4070
*/
