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
    SetShort("The passage");
    SetLong("   You are in a small passage, it leads south, to the west is a golden\n"+
	"cave.");
    SetItems( ([ 
        "south" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/41.zon/rm_4113",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4108",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The passage, Of zone : 8. V-Number : 4107, R-number : 227
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a small passage, it leads south, to the west is a golden
cave.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4113

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4108
*/
