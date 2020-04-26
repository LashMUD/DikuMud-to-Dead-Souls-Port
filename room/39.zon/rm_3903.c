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
    SetShort("Dusty trail along north wall.");
    SetLong(" You are walking on the trail following the outside of Midgaard's\n"+
        "northern wall.");
    SetItems( ([
        "east" : "The dusty trail is winding along the north wall of Midgaard.",
        "west" : "The dusty trail turns left around the corner of the wall, behind it Haon-Dor.",
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/39.zon/rm_3904",
        "west" : "/domains/diku-alfa/room/39.zon/rm_3902",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Dusty trail along north wall., Of zone : 7. V-Number : 3903, R-number : 164
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are walking on the trail following the outside of Midgaard's
northern wall.  

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The dusty trail is winding along the north wall of Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3904

Direction west . Keyword : (null)
Description:
  The dusty trail turns left around the corner of the wall, behind it Haon-Dor. 
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3902
*/
