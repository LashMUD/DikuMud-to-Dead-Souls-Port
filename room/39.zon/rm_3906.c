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
    SetShort("Northeast corner of dusty trail.");
    SetLong(" You are standing outside the northeastern corner of the city wall.\n"+
        "The trail leads west following the north wall and south towards the gate.");
    SetItems( ([
        "south" : "The dusty trail leads south towards the gate.",
        "west" : "The dusty trail winds close up to the north wall of Midgaard.",
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/39.zon/rm_3907",
        "west" : "/domains/diku-alfa/room/39.zon/rm_3905",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Northeast corner of dusty trail., Of zone : 7. V-Number : 3906, R-number : 167
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing outside the northeastern corner of the city wall.
The trail leads west following the north wall and south towards the gate.  

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  The dusty trail leads south towards the gate.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3907

Direction west . Keyword : (null)
Description:
  The dusty trail winds close up to the north wall of Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3905
*/
