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
    SetShort("Northwest corner of dusty trail.");
    SetLong(" You are standing outside the northwestern corner of the city wall.\n"+
        "The trail leads east following the north wall and south towards the gate.");
    SetItems( ([
        "east" : "The dusty trail winds close up to the north wall of Midgaard.",
        "south" : "The dusty trail leads south towards the gate.",
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/39.zon/rm_3903",
        "south" : "/domains/diku-alfa/room/39.zon/rm_3901",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Northwest corner of dusty trail., Of zone : 7. V-Number : 3902, R-number : 163
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing outside the northwestern corner of the city wall.
The trail leads east following the north wall and south towards the gate.  

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The dusty trail winds close up to the north wall of Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3903

Direction south . Keyword : (null)
Description:
  The dusty trail leads south towards the gate.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3901
*/
