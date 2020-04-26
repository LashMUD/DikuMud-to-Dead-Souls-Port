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
    
    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("The hills");
    SetLong("   You are on a small bewildered path winding its way between the hills in\n"+
        "lack of better things to do. To the south you have a splendid view over the\n"+
        "flat, vast, desolate plains. To the north the hills grow steadily darker and\n"+
        "foreboding. This is the cause of no sunset, it is rather the power of evil\n"+
        "penetrating these quiet hills. Glancing around you notice only a single bird.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "bird" : "It has a bedraggled look as if it has been dumped in a coal cellar or maybe\n"+
	    "been lost in deep underground mines for a considerable length of time ?\n"+
	    "It is fluttering at great speed away from the north, panic evident in its\n"+
	    "eyes.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4001",
        "south" : "/domains/diku-alfa/room/35.zon/rm_3500",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The hills, Of zone : 7. V-Number : 4000, R-number : 170
Sector type : Hills Special procedure : No
Room flags: NO_MOB 
Description:
   You are on a small bewildered path winding its way between the hills in
lack of better things to do. To the south you have a splendid view over the
flat, vast, desolate plains. To the north the hills grow steadily darker and
foreboding. This is the cause of no sunset, it is rather the power of evil
penetrating these quiet hills. Glancing around you notice only a single bird.

Extra description keywords(s): 
bird

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4001

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 3500
*/
