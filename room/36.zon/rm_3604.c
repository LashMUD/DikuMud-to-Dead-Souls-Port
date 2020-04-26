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
    SetShort("In front of the Chapel");
    SetLong(" You are on an open space before a small chapel. A gravel road leads north\n"+
        "through the graveyard and the chapel entrance is to the south.");
    SetItems( ([
        "north" : "The gravel road continues northwards.",
        "east" : "The gravel path leads eastwards between the dark evergreen trees.",
        "south" : "The chapel door is made of dark wood.",
        "west" : "The gravel path leads westwards between the dark evergreen trees.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/36.zon/rm_3603",
        "east" : "/domains/diku-alfa/room/36.zon/rm_3638",
        "south" : "/domains/diku-alfa/room/36.zon/rm_3605",
        "west" : "/domains/diku-alfa/room/36.zon/rm_3618",
        ]) );
    SetDoor("south", "/domains/diku-alfa/room/doors/3604_3605");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: In front of the Chapel, Of zone : 6. V-Number : 3604, R-number : 131
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
  You are on an open space before a small chapel.  A gravel road leads north
through the graveyard and the chapel entrance is to the south.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The gravel road continues northwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3603

Direction east . Keyword : (null)
Description:
  The gravel path leads eastwards between the dark evergreen trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3638

Direction south . Keyword : door
Description:
  The chapel door is made of dark wood.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 3605

Direction west . Keyword : (null)
Description:
  The gravel path leads westwards between the dark evergreen trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3618
*/
