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

    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(30);
    SetShort("The golden cave");
    SetLong("   You are in a giant cave, all the walls are shining with a soft golden\n"+
	"light. The cave continues to the south and west.");
    SetItems( ([ 
        "south" : "",
        "west" : "",
        ({"light", "gold", "golden"}) : "It looks good, but as you look closely you notice that it has no value.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/41.zon/rm_4108",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4106",
        ] ));
}

void init(){
   ::init();
}
/* Extra Information Original Diku Output 
Room name: The golden cave, Of zone : 8. V-Number : 4105, R-number : 225
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
   You are in a giant cave, all the walls are shining with a soft golden
light. The cave continues to the south and west.

Extra description keywords(s): 
light gold golden

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4108

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4106
*/
