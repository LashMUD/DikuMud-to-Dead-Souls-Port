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
    SetLong("   You are in the northeast end of a large cave. To the north the\n"+
        "is a small damp tunnel.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/meals/4052_mushroom" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4066",
        "south" : "/domains/diku-alfa/room/40.zon/rm_4071",
        "west" : "/domains/diku-alfa/room/40.zon/rm_4068",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The large cave, Of zone : 7. V-Number : 4069, R-number : 214
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in the northeast end of a large cave. To the north the
is a small damp tunnel.

Extra description keywords(s): None
------- Chars present -------
hobgoblin(MOB)

--------- Contents ---------
mushroom

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4066

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4071

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4068
*/
