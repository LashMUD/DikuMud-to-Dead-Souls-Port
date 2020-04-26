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
    SetShort("The log bridge");
    SetLong("   You are standing on wooden log, placed from the west to the east side\n"+
        "of the wide fault in the matrix. The fault seems alive with madly swishing\n"+
        "worm-like tendrils, snaking out of the sides. Only a path some 4 yds wide\n"+
        "on the bottom seems to be out of their reach.");

    SetItems( ([ 
        "east" : "A wide expanse of lined and glow-patterned glass stretches before you.",
        "west" : "The Matrix continues all the way to the horizon.",
        "down" : "Looking down, you experience some vertigo as the log rolls slightly \n"+
            "under your feet. There is some 10 yards to the bottom, but if you jump \n"+
            "from the center of the log, you can avoid touching the flailing tendrils, \n"+
            "that cover the sides of the fault.",
        ({"strands", "tendrils"}) : "They are made from some milky-white, shiny material, and when you really \n"+
            "look at them, you realize that they are not alive at all, the force of \n"+
            "the sparks that erupt whenever they touch each other is sufficient to \n"+
            "keep them waving about. Those sparks must be nasty!",
        ({"log", "bridge"}) : "There are a few green leaves on some twigs, still holding on. It\n"+
            "looks rather incongruous, lying there, but you decide that its better\n"+
            "than nothing for keeping you _over_ those strands...",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/80.zon/rm_8033",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8032",
        "down" : "/domains/diku-alfa/room/81.zon/rm_8121",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The log bridge, Of zone : 21. V-Number : 8130, R-number : 635
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on wooden log, placed from the west to the east side
of the wide fault in the matrix. The fault seems alive with madly swishing
worm-like tendrils, snaking out of the sides. Only a path some 4 yds wide
on the bottom seems to be out of their reach.
Extra description keywords(s): 
log bridge
strands tendrils

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  A wide expanse of lined and glow-patterned glass stretches before you.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8033

Direction west . Keyword : (null)
Description:
  The Matrix continues all the way to the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8032

Direction down . Keyword : (null)
Description:
  Looking down, you experience some vertigo as the log rolls slightly 
under your feet. There is some 10 yards to the bottom, but if you jump 
from the center of the log, you can avoid touching the flailing tendrils, 
that cover the sides of the fault.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8121
*/
