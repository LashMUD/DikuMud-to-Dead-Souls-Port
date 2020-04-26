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

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("The sunny field");
    SetLong("   You are standing in the middle of a wide, summery, sunlit field. There is a\n"+
        "fragrance of spring in the air, a sound of summer and a feeling of eternal\n"+
        "saturday afternoon. To the south is a clear, sparkling lake, and to the north\n"+
        "and west is the holy grove. In the wood's edge, to the east, is a stately man-\n"+
        "sion, shimmering softly through the colors of the rainbow. You feel as if You\n"+
        "could spend the rest of your life here, lying on your back and looking at the\n"+
        "patterns of the clouds as they gently drift across the sky.");
    SetItems( ([ 
        "north" : "There is a path leading north towards the sacred glade.",
        "east" : "To the east, You can see the rainbow-colored mansion, shimmering like some-\n"+
            "thing out of this world.",
        "west" : "There is a small path leading into the woods to the west.",
        "mansion" : "The mansion is a sprawling, two-storey affair with three wings, where the top\n"+
            "of one wing serves as balcony. The  walls look as marble would do, if marble\n"+
            "changed color slowly, continuously, through the entire spectrum. There are\n"+
            "large windows all over the house. There is a terrace in front of the house,\n"+
            "next to the low wing, which is almost completely windows.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/89.zon/rm_8905",
        "east" : "/domains/diku-alfa/room/89.zon/rm_8919",
        "west" : "/domains/diku-alfa/room/89.zon/rm_8907",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sunny field, Of zone : 22. V-Number : 8908, R-number : 645
Sector type : Field Special procedure : No
Room flags: INDOORS 
Description:
   You are standing in the middle of a wide, summery, sunlit field. There is a
fragrance of spring in the air, a sound of summer and a feeling of eternal
saturday afternoon. To the south is a clear, sparkling lake, and to the north
and west is the holy grove. In the wood's edge, to the east, is a stately man-
sion, shimmering softly through the colors of the rainbow. You feel as if You
could spend the rest of your life here, lying on your back and looking at the
patterns of the clouds as they gently drift across the sky.
Extra description keywords(s): 
mansion

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  There is a path leading north towards the sacred glade.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8905

Direction east . Keyword : (null)
Description:
  To the east, You can see the rainbow-colored mansion, shimmering like some-
thing out of this world.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8919

Direction west . Keyword : (null)
Description:
  There is a small path leading into the woods to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8907
*/
