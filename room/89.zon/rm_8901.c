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
    
    SetTerrainType(T_WOODS);
    SetAmbientLight(30);
    SetShort("The holy grove");
    SetLong("   You are standing amidst the ancient oaks and poplars in the holy grove. You\n"+
        "can feel a strange sensation of contendedness and relief seeping through You,\n"+
        "as if great burdens have been lifted from Your shoulders. From here, friendly-\n"+
        "looking paths lead east and south.");
    SetItems( ([ 
        "east" : "The path wind its way through the tall trees, disappearing out of sight.",
        "south" : "The path wind its way through the tall trees, disappearing out of sight.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/89.zon/rm_8902",
        "south" : "/domains/diku-alfa/room/89.zon/rm_8904",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The holy grove, Of zone : 22. V-Number : 8901, R-number : 638
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
   You are standing amidst the ancient oaks and poplars in the holy grove. You
can feel a strange sensation of contendedness and relief seeping through You,
as if great burdens have been lifted from Your shoulders. From here, friendly-
looking paths lead east and south.
Extra description keywords(s): None
------- Chars present -------
hierophant(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The path wind its way through the tall trees, disappearing out of sight.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8902

Direction south . Keyword : (null)
Description:
  The path wind its way through the tall trees, disappearing out of sight.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8904
*/
