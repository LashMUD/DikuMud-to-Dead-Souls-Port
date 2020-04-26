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
    SetShort("Park Road");
    SetLong("  You are at a bend on Park Road. To the south the road goes on and to the\n"+
        "west is the Road Crossing.");
    SetExits( ([
        "south" : "/domains/diku-alfa/room/31.zon/rm_3122",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3120",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Park Road, Of zone : 2. V-Number : 3136, R-number : 94
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are at a bend on Park Road.  To the south the road goes on and to the
west is the Road Crossing.

Extra description keywords(s): None
------- Chars present -------
cityguard guard(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3122

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3120
*/
