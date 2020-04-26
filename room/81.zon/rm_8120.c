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
        "To your west, a pile of great slabs of glass has fallen into a jumble \n"+
        "beside the wall. They are much too large and sharp-edged for you to \n"+
        "lose your precious fingers on! To the south, there is at least four \n"+
        "yards between the furthest reaches of the worm-like strands, but to the \n"+
        "north, the crack narrows to a point where it is impossible to pass.");
    SetItems( ([ 
        "south" : "The fault zig-zags out of sight to the south, with plenty of clearing \n"+
            "between the sparks and good, even footing.",
        "down" : "Between two large slabs of glass, there is a narrow chute, leading \n"+
            "_very_ steeply down into darkness.",
        ({"slabs", "glass", "wall"}) : "Between two large slabs of glass, there is a narrow chute, leading \n"+
            "_very_ steeply down into darkness.",
        ({"strands", "worm"}) : "They are made from some milky-white, shiny material, and when you really \n"+
            "look at them, you realize that they are not alive at all, the force of \n"+
            "the sparks that erupt whenever they touch each other is sufficient to \n"+
            "keep them waving about. Those sparks must be nasty!",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/81.zon/rm_8121",
        "down" : "/domains/diku-alfa/room/81.zon/rm_8104",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The matrix fault, Of zone : 21. V-Number : 8120, R-number : 630
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on the bottom of a wide crack in the matrix, going 
north and south. The sides of the fault are alive with writhing 
worm-like things, snaking out from the cracked glass, sparking madly.
To your west, a pile of great slabs of glass has fallen into a jumble 
beside the wall. They are much too large and sharp-edged for you to 
lose your precious fingers on! To the south, there is at least four 
yards between the furthest reaches of the worm-like strands, but to the 
north, the crack narrows to a point where it is impossible to pass.
Extra description keywords(s): 
strands worm
slabs glass wall

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  The fault zig-zags out of sight to the south, with plenty of clearing 
between the sparks and good, even footing.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8121

Direction down . Keyword : (null)
Description:
  Between two large slabs of glass, there is a narrow chute, leading 
_very_ steeply down into darkness.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8104
*/
