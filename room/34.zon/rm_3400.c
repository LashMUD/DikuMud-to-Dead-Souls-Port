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
    SetShort("A Gravel Road on the Graveyard");
    SetLong(" You are on a well-kept gravel road that leads north-south through the\n"+
        "graveyard. On both sides of the road grow dark evergreen trees. An iron\n"+
        "grate is to the north.");
    SetItems( ([
        "north" : "Through the solid iron bars you see the Concourse.",
        "south" : "The gravel road continues southwards.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3129",
        "south" : "/domains/diku-alfa/room/34.zon/rm_3401",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: A Gravel Road on the Graveyard, Of zone : 5. V-Number : 3400, R-number : 117
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
  You are on a well-kept gravel road that leads north-south through the
graveyard.  On both sides of the road grow dark evergreen trees.  An iron
grate is to the north.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : grate
Description:
  Through the solid iron bars you see the Concourse.
Exit flag: IS-DOOR UNDEFINED  
Key no: 3121
To room (V-Number): 3129

Direction south . Keyword : (null)
Description:
  The gravel road continues southwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3401
*/
