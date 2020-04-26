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
        "feel calm and relaxed here, as if great burdens have been lifted from Your\n"+
        "shoulders. From here, pleasant-looking paths lead east, north and south. To\n"+
        "the west, through the trees, You can see the road to Midgaard.");
    SetItems( ([ 
        "north" : "The path wind its way through the tall trees, disappearing out of sight.",
        "east" : "The path wind its way through the tall trees, towards a clearing faintly seen.",
        "south" : "The path wind its way through the tall trees, into the grove.",
        "west" : "Through the trees, you can see the Midgaard road. Far to the west, You can\n"+
            "barely glimpse the tall walls and the chimney-smokes of the city itself.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/89.zon/rm_8901",
        "east" : "/domains/diku-alfa/room/89.zon/rm_8905",
        "south" : "/domains/diku-alfa/room/89.zon/rm_8907",
        "west" : "/domains/diku-alfa/room/35.zon/rm_3502",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The holy grove, Of zone : 22. V-Number : 8904, R-number : 641
Sector type : Forest Special procedure : No
Room flags: NO_MOB 
Description:
   You are standing amidst the ancient oaks and poplars in the holy grove. You
feel calm and relaxed here, as if great burdens have been lifted from Your
shoulders. From here, pleasant-looking paths lead east, north and south. To
the west, through the trees, You can see the road to Midgaard.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The path wind its way through the tall trees, disappearing out of sight.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8901

Direction east . Keyword : (null)
Description:
  The path wind its way through the tall trees, towards a clearing faintly seen.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8905

Direction south . Keyword : (null)
Description:
  The path wind its way through the tall trees, into the grove.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8907

Direction west . Keyword : (null)
Description:
  Through the trees, you can see the Midgaard road. Far to the west, You can
barely glimpse the tall walls and the chimney-smokes of the city itself.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3502
*/
