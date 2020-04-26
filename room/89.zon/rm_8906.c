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
        "can feel a strange sensation of joy and calm seeping through You, as if great\n"+
        "burdens have been lifted from Your shoulders. To the south, You glimpse an open\n"+
        "area through the trees, while paths lead away north and west.");
    SetItems( ([ 
        "north" : "The path wind its way through the tall trees, disappearing out of sight.",
        "south" : "To the south, just beyond the trees, You can see a wide green lawn, and past\n"+
            "the lawn, a softly shimmering, rainbow-colored mansion.",
        "west" : "The path wind its way through the tall trees, disappearing out of sight.",
        "mansion" : "The mansion is a sprawling, two-storey affair with three wings, where the top\n"+
            "of one wing serves as balcony. The  walls look as marble would do, if marble\n"+
            "changed color slowly, continuously, through the entire spectrum. There are\n"+
            "large windows all over the house.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/89.zon/rm_8903",
        "south" : "/domains/diku-alfa/room/89.zon/rm_8909",
        "west" : "/domains/diku-alfa/room/89.zon/rm_8905",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The holy grove, Of zone : 22. V-Number : 8906, R-number : 643
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
   You are standing amidst the ancient oaks and poplars in the holy grove. You
can feel a strange sensation of joy and calm seeping through You, as if great
burdens have been lifted from Your shoulders. To the south, You glimpse an open
area through the trees, while paths lead away north and west.
Extra description keywords(s): 
mansion

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The path wind its way through the tall trees, disappearing out of sight.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8903

Direction south . Keyword : (null)
Description:
  To the south, just beyond the trees, You can see a wide green lawn, and past
the lawn, a softly shimmering, rainbow-colored mansion.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8909

Direction west . Keyword : (null)
Description:
  The path wind its way through the tall trees, disappearing out of sight.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8905
*/
