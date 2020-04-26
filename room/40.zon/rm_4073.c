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
    SetShort("End of tunnel");
    SetLong("   The tunnel stops here. There is no other exits than the one you\n"+
        "came from.");
    SetItems( ([ 
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4051_tall_warrior" : 1,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/40.zon/rm_4072",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: End of tunnel, Of zone : 7. V-Number : 4073, R-number : 218
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   The tunnel stops here. There is no other exits than the one you
came from.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4072
*/
