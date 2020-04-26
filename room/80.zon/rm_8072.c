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
    SetShort("Main Matrix"); 
    SetLong("   You are standing beneath a huge gate, set into an even higher \n"+
        "wall. It must be at least 300 yds tall! The gates are some 50 yds\n"+
        "high, and there is no wall above them.");
    SetItems( ([ 
        "north" : "The way directly to the north along the wall is blocked by some \n"+
            "crystalline structures. To the west of those the glassy expanse\n"+
            "continues as far as you can see.",
        "east" : "The gates are much too high to jump over (I mean, 50 yds? Come ON!).",
        "south" : "The glassy expanse continues south along the wall.",
        "west" : "Far to the west you can see a soaring pillar of light, stretching up \n"+
            "from a small tower.",
        "wall" : "It is metallic-looking, very smooth and immensely high.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8008_butterfly" :1,
        "/domains/diku-alfa/room/80.zon/obj/8901_poster" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8061",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8082",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8071",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8072, R-number : 619
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing beneath a huge gate, set into an even higher 
wall. It must be at least 300 yds tall! The gates are some 50 yds
high, and there is no wall above them.
Extra description keywords(s): 
wall

------- Chars present -------

--------- Contents ---------
sign poster notice

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The way directly to the north along the wall is blocked by some 
crystalline structures. To the west of those the glassy expanse
continues as far as you can see.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8061

Direction east . Keyword : (null)
Description:
  The gates are much too high to jump over (I mean, 50 yds? Come ON!).
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction south . Keyword : (null)
Description:
  The glassy expanse continues south along the wall.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8082

Direction west . Keyword : (null)
Description:
  Far to the west you can see a soaring pillar of light, stretching up 
from a small tower.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8071
*/
