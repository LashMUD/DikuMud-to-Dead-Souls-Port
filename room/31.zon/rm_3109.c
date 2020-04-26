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
    SetLong("  You are on a small path running through the park. It continues west and\n"+
        "south and just north of here you see the southern wall of Park Cafe.");
    SetItems( ([
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/npc/3123_sparrow" : 1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/31.zon/rm_3115",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3108",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Small path in the park, Of zone : 2. V-Number : 3109, R-number : 67
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are on a small path running through the park.  It continues west and
south and just north of here you see the southern wall of Park Cafe.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3115

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3108
*/
