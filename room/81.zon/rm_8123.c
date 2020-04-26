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
    SetLong("   You are standing at the northern end, on the bottom of a wide crack \n"+
        "in the matrix, going south. The sides of the fault are alive with \n"+
        "writhing worm-like things, snaking out from the cracked glass, sparking \n"+
        "madly. At the end of the fault, to the north, a pile of great slabs of \n"+
        "glass has fallen into a jumble beside the wall. They are much too large \n"+
        "and sharp-edged for you to climb and lose your precious fingers on! To \n"+
        "the south, there is at least four yards between the furthest reaches of \n"+
        "the worm-like strands..");
    SetItems( ([ 
        "south" : "The fault zig-zags out of sight to the south, with plenty of clearing \n"+
            "between the sparks even if one has to jump from broken slab to broken \n"+
            "slab, catching one's balance whenever the treacherous slabs move under \n"+
            "one's feet.",
        ({"strands", "worm"}) : "They are made from some milky-white, shiny material, and when you really \n"+
            "look at them, you realize that they are not alive at all, the force of \n"+
            "the sparks that erupt whenever they touch each other is sufficient to \n"+
            "keep them waving about. Those sparks must be nasty!",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/81.zon/rm_8124",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The matrix fault, Of zone : 21. V-Number : 8123, R-number : 633
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing at the northern end, on the bottom of a wide crack 
in the matrix, going south. The sides of the fault are alive with 
writhing worm-like things, snaking out from the cracked glass, sparking 
madly. At the end of the fault, to the north, a pile of great slabs of 
glass has fallen into a jumble beside the wall. They are much too large 
and sharp-edged for you to climb and lose your precious fingers on! To 
the south, there is at least four yards between the furthest reaches of 
the worm-like strands..
Extra description keywords(s): 
strands worm

------- Chars present -------
bug(MOB)
bug(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  The fault zig-zags out of sight to the south, with plenty of clearing 
between the sparks even if one has to jump from broken slab to broken 
slab, catching one's balance whenever the treacherous slabs move under 
one's feet.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8124
*/
