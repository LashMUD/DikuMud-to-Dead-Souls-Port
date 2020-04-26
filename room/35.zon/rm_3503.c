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
    SetShort("City Entrance");
    SetLong(" You stand on the outskirts of a large city - Midgaard; the capital of this\n"+
        "land. The road leads east into the peace and quiet - and dangers - of the\n"+
        "forest; and to the west it becomes the main street of the town; surrounded by\n"+
        "a confusion of shops, bars, and market places.");
    SetItems( ([
        "east" : "You can see a narrow path leading in between the trees, into the grove.",
        ]) );  
    SetExits( ([
        "east" : "/domains/diku-alfa/room/35.zon/rm_3502",
        /*One would have thought that the following exit should be to room 3053
         *which is outside the east gate of midgaard.
         */
        "west" : "/domains/diku-alfa/room/30.zon/rm_3053",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: City Entrance, Of zone : 6. V-Number : 3503, R-number : 126
Sector type : City Special procedure : No
Room flags: NO_MOB 
Description:
   You stand on the outskirts of a large city - Midgaard; the capital of this
land. The road leads east into the peace and quiet - and dangers - of the
forest; and to the west it becomes the main street of the town; surrounded by
a confusion of shops, bars, and market places.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 3502

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 3016
*/
