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
   SetLong("   You are standing next to the immensely tall wall, stretching out\n"+
        "over the horizon to the east and west. Some ten yds up the wall begins\n"+
        "a steel-girder staircase, looking like a fire-escape, only a bit too \n"+
        "high. It continues all the vay to the top off the wall, several hundred \n"+
        "yds above.");
    SetItems( ([ 
        "north" : "The glass stretches off to the horizon.",
        "east" : "The expanse of glass continues as far as you can see.",
        "west" : "Beyond the wall to the south-west you can see a glittering, like\n"+
            "reflexes in some crystal.",
        "up" : "There is much too high for you to jump all the way up to the stair-\n"+
            "case there.",
        "wall" : "It is metallic-looking, very smooth and immensely high.",
        ({"lines", "patterns", "web"}) : "The lines seem to be shifting slowly, twisting from squares,\n"+
            "to hexagons, to twisted irregular shapes, and back.",
        ({"stairs", "staircase"}) : "It is made from thin steel girders, looking much too frail to \n"+
            "support your weight.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8010_cowboy" :1,
        "/domains/diku-alfa/room/80.zon/obj/8901_poster" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8054",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8050",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8052",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8053, R-number : 615
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing next to the immensely tall wall, stretching out
over the horizon to the east and west. Some ten yds up the wall begins
a steel-girder staircase, looking like a fire-escape, only a bit too 
high. It continues all the vay to the top off the wall, several hundred 
yds above.
Extra description keywords(s): 
stairs staircase
lines patterns web
wall

------- Chars present -------

--------- Contents ---------
sign poster notice

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The glass stretches off to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8054

Direction east . Keyword : (null)
Description:
  The expanse of glass continues as far as you can see.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8050

Direction west . Keyword : (null)
Description:
  Beyond the wall to the south-west you can see a glittering, like
reflexes in some crystal.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8052

Direction up . Keyword : (null)
Description:
  There is much too high for you to jump all the way up to the stair-
case there.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
