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
    SetShort("A clearing in the woods");
    SetLong("   You are standing in a clearing in the light woods. Somehow, this place\n"+
        "seems powerfully DIFFERENT from the rest of the forest, as if something is\n"+
        "severely strained in the fabric of reality here. You can feel an unpleasant\n"+
        "tension, coming, perhaps, from the strange stone portal set in the middle of\n"+
        "the clearing, to the west of you.");
    SetItems( ([ 
        "north" : "A small, narrow path winds north, and is quickly lost in the bushes. It\n"+
            "looks quite a wilderness there!",
        "east" : "Through the portal You can see a strange, alien landscape under a leaden-gray\n"+
            "sky. Strange patterns of light flow through portal at You. You feel badly out\n"+
            "of place.",
        "south" : "There is a path winding its way south through the tall poplars, disapppearing\n"+
            "out of sight some 100 yds. away.",
        "west" : "There is a friendly-looking path leading west through the tall trees.",
        ({"portal", "stone"}) : "The portal is a 3 yds diameter circle of granite. The sides are square, and\n"+
            "about 20\" thick. On the inside of the circle flickers an eerie blue lighte-\n"+
            "ning, bound by the portal but never quite touching it. The portal is set on a\n"+
            "solid slab of marble in the middle of the clearing. Through it, you can see an\n"+
            "alien landscape under a leaden grey sky.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/60.zon/rm_6019",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8001",
        "south" : "/domains/diku-alfa/room/89.zon/rm_8906",
        "west" : "/domains/diku-alfa/room/89.zon/rm_8902",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A clearing in the woods, Of zone : 22. V-Number : 8903, R-number : 640
Sector type : Forest Special procedure : No
Room flags: NO_MOB 
Description:
   You are standing in a clearing in the light woods. Somehow, this place
seems powerfully DIFFERENT from the rest of the forest, as if something is
severely strained in the fabric of reality here. You can feel an unpleasant
tension, coming, perhaps, from the strange stone portal set in the middle of
the clearing, to the west of you.
Extra description keywords(s): 
portal stone

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  A small, narrow path winds north, and is quickly lost in the bushes. It
looks quite a wilderness there!
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6019

Direction east . Keyword : (null)
Description:
  Through the portal You can see a strange, alien landscape under a leaden-gray
sky. Strange patterns of light flow through portal at You. You feel badly out
of place.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8001

Direction south . Keyword : (null)
Description:
  There is a path winding its way south through the tall poplars, disapppearing
out of sight some 100 yds. away.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8906

Direction west . Keyword : (null)
Description:
  There is a friendly-looking path leading west through the tall trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8902
*/
