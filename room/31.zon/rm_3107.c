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

    SetTerrainType(T_OUTDOORS);
    SetAmbientLight(30);
    SetShort("Small path in the park");
    SetLong("  You are walking along a small path through the park. The path continues\n"+
        "south and east.");
    SetItems( ([
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3108",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3113",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Small path through the park, Of zone : 2. V-Number : 3107, R-number : 65
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are walking along a small path through the park.  The path continues
south and east.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3108

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3113
*/
