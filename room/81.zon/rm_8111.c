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
    SetShort("   The glass road");
    SetLong("You are standing on a glass road, suspended from nothing some 100 \n"+
        "yds off the ground. The road continues north and south, curving \n"+
        "left as it passes the northern horizon.");
    SetItems( ([ 
        "north" : "Near the horizon, it looks as if the road connects to a glass \n"+
            "staircase.",
        "south" : "The barely visible road continues south, where, over the horizon, \n"+
            "you can see the top of a great pale-blue pyramid, apparently \n"+
            "standing on its tip.",
        "road" : "The road is only visible inasmuch as it reflects you and the ground\n"+
            "below. It is somewhat disconcerting to see 100 yds of nothing \n"+
            "between one's feet and the ground.",
        ({"ground", "horizon", "matrix"}) : "Far below you, the Main Matrix spreads in all its splendour. The \n"+
            "glowing lines make out gigantic, intricate and completely incompre-\n"+
            "hensible patterns, constantly shifting and changing. The beauty is \n"+
            "only marred by the wide crack in the glass-like material going from\n"+
            "north to south, about one-half mile to your west.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/81.zon/rm_8110",
        "south" : "/domains/diku-alfa/room/81.zon/rm_8112",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The glass road, Of zone : 21. V-Number : 8111, R-number : 628
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
You are standing on a glass road, suspended from nothing some 100 
yds off the ground. The road continues north and south, curving 
left as it passes the northern horizon.
Extra description keywords(s): 
ground horizon matrix
road

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  Near the horizon, it looks as if the road connects to a glass 
staircase.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8110

Direction south . Keyword : (null)
Description:
  The barely visible road continues south, where, over the horizon, 
you can see the top of a great pale-blue pyramid, apparently 
standing on its tip.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8112
*/
