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
    SetShort("The glass road");
    SetLong("You are standing on a glass road, suspended from nothing some 40 \n"+
        "yds off the ground. The road ends here, connecting to a winding \n"+
        "glass staircase leading down. It continues south, curving right \n"+
        "as it passes the southern horizon.");
    SetItems( ([ 
        "south" : "The barely visible road continues south, where, over the horizon, \n"+
            "you can see the top of a great pale-blue pyramid, apparently \n"+
            "standing on its tip.",
        "down" : "You feel dizzy...",
        "road" : "The road is only visible inasmuch as it reflects you and the ground\n"+
            "below. It is somewhat disconcerting to see 40 yds of nothing \n"+
            "between one's feet and the ground.",
        ({"ground", "horizon", "matrix"}) : "Far below you, the Main Matrix spreads in all its splendour. The \n"+
            "glowing lines make out gigantic, intricate and completely incompre-\n"+
            "hensible patterns, constantly shifting and changing. The beauty is \n"+
            "only marred by the wide crack in the glass-like material starting\n"+
            "some half-mile to the north, going south right underneath where you \n"+
            "stand.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/81.zon/rm_8111",
        "down" : "/domains/diku-alfa/room/80.zon/rm_8012",
        ] ));
}

void init(){
   ::init();
}
/* Extra Information Original Diku Output 
Room name: The glass road, Of zone : 21. V-Number : 8110, R-number : 627
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
You are standing on a glass road, suspended from nothing some 40 
yds off the ground. The road ends here, connecting to a winding 
glass staircase leading down. It continues south, curving right 
as it passes the southern horizon.
Extra description keywords(s): 
ground horizon matrix
road

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  The barely visible road continues south, where, over the horizon, 
you can see the top of a great pale-blue pyramid, apparently 
standing on its tip.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8111

Direction down . Keyword : (null)
Description:
  You feel dizzy...
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8012
*/
