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
    SetLong("   You are in a north-south leading passage. To the south you see\n"+
	"light.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "light" : "It nearly is enough to light the passage.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4116",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4125",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The passage, Of zone : 8. V-Number : 4120, R-number : 240
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a north-south leading passage. To the south you see
light.

Extra description keywords(s): 
light

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4116

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4125
*/
