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
    SetShort("Elm Street");
    SetLong("  You are on Elm street. Park Road is to the west and Elm Street continues\n"+
        "in eastward direction.");
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3124",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3122",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Elm Street, Of zone : 2. V-Number : 3123, R-number : 81
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are on Elm street.  Park Road is to the west and Elm Street continues
in eastward direction.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3124

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3122
*/
