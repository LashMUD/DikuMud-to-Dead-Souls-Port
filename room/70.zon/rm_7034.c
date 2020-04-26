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
    SetShort("A bend in the sewer pipe");
    SetLong("You can look in two directions where the pipe leads : south and west.");
    SetItems( ([ 
        "south" : "To the south you can see another bend leading west.",
        "west" : "West. You can just make out a triple junction leading north and west.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/70.zon/rm_7035",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7028",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A bend in the sewer pipe, Of zone : 14. V-Number : 7034, R-number : 420
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
You can look in two directions where the pipe leads : south and west.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  To the south you can see another bend leading west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7035

Direction west . Keyword : (null)
Description:
  West. You can just make out a triple junction leading north and west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7028
*/
