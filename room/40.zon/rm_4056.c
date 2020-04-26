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
    SetShort("The light cave");
    SetLong("   You are in a light cave, a large fire in front of you lights the room.\n"+
        "The cave continues to the north and south.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "fire" : "Well, errh - It looks somehow quite warm..!",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4052_hobgoblin" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4054",
        "south" : "/domains/diku-alfa/room/40.zon/rm_4061",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The light cave, Of zone : 7. V-Number : 4056, R-number : 201
Sector type : Field Special procedure : No
Room flags: INDOORS 
Description:
   You are in a light cave, a large fire in front of you lights the room.
The cave continues to the north and south.

Extra description keywords(s): 
fire

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4054

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4061
*/
