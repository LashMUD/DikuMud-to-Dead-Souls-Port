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
    SetShort("The Sewers");
    SetLong("You stand in a dead end of the sewer. The only way out is south.\n"+
        "You can see a shaft leading up but it looks too difficult to go up\n"+
        "that way.");
    SetItems( ([ 
        "south" : "",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/70.zon/rm_7049",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Sewers, Of zone : 14. V-Number : 7048, R-number : 432
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in a dead end of the sewer. The only way out is south.
You can see a shaft leading up but it looks too difficult to go up
that way.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7049
*/
