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
    SetShort("West trail around Midgaard");
    SetLong(" You are on a dusty trail following the outside wall of Midgaard.\n"+
        "To the east the wall towers over you and to the west you see the\n"+
        "forest of Haon-Dor. The trail leads north and south along the wall. ");
    SetItems( ([
        "north" : "To the north you notice the path makes a turn, following the City wall.",
        "south" : "The dusty trail continues towards the south.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/39.zon/rm_3902",
        "south" : "/domains/diku-alfa/room/39.zon/rm_3900",
    ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: West trail around Midgaard, Of zone : 7. V-Number : 3901, R-number : 162
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are on a dusty trail following the outside wall of Midgaard.
To the east the wall towers over you and to the west you see the
forest of Haon-Dor. The trail leads north and south along the wall. 

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north you notice the path makes a turn, following the City wall. 
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3902

Direction south . Keyword : (null)
Description:
  The dusty trail continues towards the south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3900
*/
