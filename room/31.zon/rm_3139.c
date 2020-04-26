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
    SetShort("Penny Lane");
    SetLong("  You are on Penny Lane. Emerald Avenue is to the west and Penny Lane\n"+
        "continues in eastward direction. To the north is a small shrine dedicated to\n"+
        "Eru the creator.");
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3140",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3132",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Penny Lane, Of zone : 2. V-Number : 3139, R-number : 97
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are on Penny Lane.  Emerald Avenue is to the west and Penny Lane
continues in eastward direction.  To the north is a small shrine dedicated to
Eru the creator.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3140

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3132
*/
