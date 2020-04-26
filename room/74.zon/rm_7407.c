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
    SetShort("Tunnel");
    SetLong("The mud goes to your knees. Otherwise the tunnel looks\n"+
        "very normal.");
    SetItems( ([  
        "north" : "",
        "east" : "You can see a mudhole.",
        "south" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7408",
        "east" : "/domains/diku-alfa/room/74.zon/rm_7406",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7409",
        ] ));
}

void init(){
   ::init();
}
/* Extra Information Original Diku Output 
Room name: Tunnel, Of zone : 17. V-Number : 7407, R-number : 531
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
The mud goes to your knees. Otherwise the tunnel looks
very normal.
Extra description keywords(s): None
------- Chars present -------
lemure blob(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7408

Direction east . Keyword : (null)
Description:
  You can see a mudhole.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7406

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7409
*/
