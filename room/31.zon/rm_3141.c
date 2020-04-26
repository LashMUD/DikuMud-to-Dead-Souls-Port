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

    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("End of Penny Lane");
    SetLong("  You are at the end of Penny Lane. The only exit appears to be south.");
    SetExits( ([
        "south" : "/domains/diku-alfa/room/31.zon/rm_3140",
        ]) );
    AddMoney("gold", 20);
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/meals/3135_fountain" : 1,
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: End of Penny Lane, Of zone : 2. V-Number : 3141, R-number : 99
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are at the end of Penny Lane.  The only exit appears to be south.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
coins gold
water fountain

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3140
*/
