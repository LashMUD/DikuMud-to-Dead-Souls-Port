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
    SetLong("   You are standing amidst the tall, majestic trees in the southern end of the\n"+
        "holy grove. Paths lead north and east. To the east, You can see a wide, open\n"+
        "field, sloping gently down towards a bright, glittering lake. Somehow, here\n"+
        "you feel an inexplicable happiness, as if the world's troubles no longer\n"+
        "really matter to you.");
    SetItems( ([ 
        "north" : "The path leading north is soon lost out of sight amongst the ancient oaks and\n"+
            "poplars.",
        "east" : "To the east, the path leads out into a wide, sunny summer's field, sloping\n"+
            "south towards a bautiful lake. Past the field You can see a stately mansion,\n"+
            "shimmering gently in all the rainbow's colours.",
        "mansion" : "The mansion is a sprawling, two-storey affair with three wings, where the top\n"+
            "of one wing serves as balcony. The  walls look as marble would do, if marble\n"+
            "changed color slowly, continuously, through the entire spectrum. There are\n"+
            "large windows all over the house.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/89.zon/rm_8904",
        "east" : "/domains/diku-alfa/room/89.zon/rm_8908",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The holy grove, Of zone : 22. V-Number : 8907, R-number : 644
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
   You are standing amidst the tall, majestic trees in the southern end of the
holy grove. Paths lead north and east. To the east, You can see a wide, open
field, sloping gently down towards a bright, glittering lake. Somehow, here
you feel an inexplicable happiness, as if the world's troubles no longer
really matter to you.
Extra description keywords(s): 
mansion

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The path leading north is soon lost out of sight amongst the ancient oaks and
poplars.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8904

Direction east . Keyword : (null)
Description:
  To the east, the path leads out into a wide, sunny summer's field, sloping
south towards a bautiful lake. Past the field You can see a stately mansion,
shimmering gently in all the rainbow's colours.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8908
*/
