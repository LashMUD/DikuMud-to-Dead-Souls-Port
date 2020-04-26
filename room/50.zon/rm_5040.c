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

    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(0);
    SetShort("Dark smelly tunnels");
    SetLong("   You are standing in a gloomy tunnel leading south and west,\n"+
        "right under the altar of G'harne.\n"+
        "The walls are covered with a smelly slime and small rotting\n"+
        "pieces of a meat like substance, fills the air with an unbearable \n"+
        "stench.\n"+
        "You might be able to force your way up into fresh air from here.");
    SetItems( ([ 
        "south" : "",
        "west" : "",
        "up" : "You welcome the sight of fresh air.",
        ({"meat", "rotting", "slime", "substance"}) : "You try to examine the substance closer, but must refrain from this\n"+
            "as all you really want to do is puke.\n"+
            "You puke.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/50.zon/rm_5041",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5042",
        "up" : "/domains/diku-alfa/room/50.zon/rm_5039",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Dark smelly tunnels, Of zone : 9. V-Number : 5040, R-number : 307
Sector type : Inside Special procedure : No
Room flags: DARK INDOORS TUNNEL 
Description:
   You are standing in a gloomy tunnel leading south and west,
right under the altar of G'harne.
The walls are covered with a smelly slime and small rotting
pieces of a meat like substance, fills the air with an unbearable 
stench.
You might be able to force your way up into fresh air from here.

Extra description keywords(s): 
meat rotting slime substance

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5041

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5042

Direction up . Keyword : (null)
Description:
  You welcome the sight of fresh air.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5039
*/
