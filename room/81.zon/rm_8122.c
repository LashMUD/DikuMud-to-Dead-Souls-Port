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
    SetShort("The matrix fault");
    SetLong("   You are standing on the bottom of a wide crack in the matrix, going \n"+
        "north and south. The sides of the fault are alive with writhing \n"+
        "worm-like things, snaking out from the cracked glass, sparking madly.\n"+
        "To the south, a pale blue wall cuts across the fault. It is part of a \n"+
        "pyramid, extending down into the ground even below the present depth. \n"+
        "High above you, to the south, the wall of another, larger pyramid, this \n"+
        "one apparently standing on the tip of the smaller one, looms ominously.");
    SetItems( ([ 
        "north" : "The fault zig-zags out of sight to the north, with plenty of clearing \n"+
            "between the sparks and good, even footing.",
        "south" : "There is a large tear in the pyramid's wall, about one half yard above \n"+
            "your present level. Beside the tear, something is written in \n"+
            "unpleasantly purple letters.",
        ({"tear", "letters", "writing"}) : "Looking closer, you can see that the letters have been spray-painted on \n"+
            "the wall, using a letter template:\n\n"+
            "                ====================================\n"+
            "                                LEVEL -4\n"+
            "                       PERMANENT STORAGE LEVEL\n"+
            "                          DATABASE IS DOWN\n\n"+
            "                   !   D O   N O T   E N T E R   !\n"+
            "                ====================================\n\n"+
            "Looking in through the tear, you see only a grey fog, shot through with \n"+
            "red lightening. A faint wailing, as from souls in agony, is \n"+
            "occasionally heard from within.",
        ({"strands", "worm"}) : "They are made from some milky-white, shiny material, and when you really\n"+
            "look at them, you realize that they are not alive at all, the force of \n"+
            "the sparks that erupt whenever they touch each other is sufficient to \n"+
            "keep them waving about. Those sparks must be nasty!",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/81.zon/rm_8121",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The matrix fault, Of zone : 21. V-Number : 8122, R-number : 632
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on the bottom of a wide crack in the matrix, going 
north and south. The sides of the fault are alive with writhing 
worm-like things, snaking out from the cracked glass, sparking madly.
To the south, a pale blue wall cuts across the fault. It is part of a 
pyramid, extending down into the ground even below the present depth. 
High above you, to the south, the wall of another, larger pyramid, this 
one apparently standing on the tip of the smaller one, looms ominously.
Extra description keywords(s): 
strands worm
tear letters writing

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The fault zig-zags out of sight to the north, with plenty of clearing 
between the sparks and good, even footing.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8121

Direction south . Keyword : (null)
Description:
  There is a large tear in the pyramid's wall, about one half yard above 
your present level. Beside the tear, something is written in 
unpleasantly purple letters.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
