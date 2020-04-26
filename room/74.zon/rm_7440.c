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
    SetShort("South-western part of basilisks cave");
    SetLong("You can see nothing but smoke. ");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "south" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7439",
        "east" : "/domains/diku-alfa/room/74.zon/rm_7438",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7441",
        ] ));
}

void init(){
   ::init();
}
/* Extra Information Original Diku Output 
Room name: South-western part of basilisks cave, Of zone : 17. V-Number : 7440, R-number : 564
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You can see nothing but smoke. 
Extra description keywords(s): None
------- Chars present -------
scaled basilisk(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7439

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7438

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7441
*/
