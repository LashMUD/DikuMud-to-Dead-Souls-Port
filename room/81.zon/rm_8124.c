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
        "Surrounding to all sides but north, a pile of great slabs of glass has \n"+
        "fallen into a jumble beside the wall. They are much too large and \n"+
        "sharp-edged for you to climb and lose your precious fingers on! To the \n"+
        "north, there is at least four yards between the furthest reaches of the \n"+
        "worm-like strands, but to the south, the crack narrows to a point where \n"+
        "it is impossible to pass.");
    SetItems( ([ 
        "north" : "The fault zig-zags out of sight to the north, with plenty of clearing \n"+
            "between the sparks even if one has to jump from broken slab to broken \n"+
            "slab, catching one's balance whenever the treacherous slabs move under \n"+
            "one's feet.",
        "east" : "Between two large slabs of glass, standing balanced against each other, \n"+
            "there is a natural-looking tunnel leading east. The purple glow from \n"+
            "within the tunnel, however, is anything but natural-looking...",
        "west" : "Between two large slabs of glass, there is a narrow chute, sloping \n"+
            "gently west, down into the dark.",
        ({"slabs", "pile", "walls"}) : "Looking around, you find two tunnels: one small and dark, sloping down \n"+
            "to the west, the other larger, going east.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/81.zon/rm_8123",
        "east" : "/domains/diku-alfa/room/81.zon/rm_8150",
        "west" : "/domains/diku-alfa/room/81.zon/rm_8140",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The matrix fault, Of zone : 21. V-Number : 8124, R-number : 634
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on the bottom of a wide crack in the matrix, going 
north and south. The sides of the fault are alive with writhing 
worm-like things, snaking out from the cracked glass, sparking madly.
Surrounding to all sides but north, a pile of great slabs of glass has 
fallen into a jumble beside the wall. They are much too large and 
sharp-edged for you to climb and lose your precious fingers on! To the 
north, there is at least four yards between the furthest reaches of the 
worm-like strands, but to the south, the crack narrows to a point where 
it is impossible to pass.
Extra description keywords(s): 
slabs pile walls

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The fault zig-zags out of sight to the north, with plenty of clearing 
between the sparks even if one has to jump from broken slab to broken 
slab, catching one's balance whenever the treacherous slabs move under 
one's feet.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8123

Direction east . Keyword : (null)
Description:
  Between two large slabs of glass, standing balanced against each other, 
there is a natural-looking tunnel leading east. The purple glow from 
within the tunnel, however, is anything but natural-looking...
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8150

Direction west . Keyword : (null)
Description:
  Between two large slabs of glass, there is a narrow chute, sloping 
gently west, down into the dark.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8140
*/
