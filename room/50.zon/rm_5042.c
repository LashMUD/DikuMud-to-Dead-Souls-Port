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
    SetLong("   You are standing in a gloomy tunnel leading east and west,\n"+
        "The walls are covered with a smelly slime and small rotting\n"+
        "pieces of a meat like substance, fills the air with an unbearable \n"+
        "stench.");
    SetItems( ([ 
        "east" : "The tunnel continues in this direction.",
        "west" : "The tunnel continues in this direction.",
        ({"meat", "rotting", "slime", "substance"}) : "You try to examine the substance closer, but must refrain from this\n"+
            "as all you really want to do is puke.\n"+
            "You puke.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5040",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5043",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Dark smelly tunnels, Of zone : 9. V-Number : 5042, R-number : 309
Sector type : Inside Special procedure : No
Room flags: DARK INDOORS TUNNEL 
Description:
   You are standing in a gloomy tunnel leading east and west,
The walls are covered with a smelly slime and small rotting
pieces of a meat like substance, fills the air with an unbearable 
stench.

Extra description keywords(s): 
meat rotting slime substance

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The tunnel continues in this direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5040

Direction west . Keyword : (null)
Description:
  The tunnel continues in this direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5043
*/
