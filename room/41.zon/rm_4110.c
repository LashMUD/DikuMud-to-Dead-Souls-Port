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
    SetShort("The hole");
    SetLong("   You are standing by a large hole in the floor, when you looks down\n"+
	"into the darkness you feel frightened.");
    SetItems( ([ 
        "west" : "",
        "down" : "The hole stretches down into darkness.",
        ] ));
    SetExits( ([
        "west" : "/domains/diku-alfa/room/41.zon/rm_4111",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The hole, Of zone : 8. V-Number : 4110, R-number : 230
Sector type : Forest Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
   You are standing by a large hole in the floor, when you looks down
into the darkness you feel frightened.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4111

Direction down . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 8309
*/
