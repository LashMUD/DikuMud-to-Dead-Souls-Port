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
    SetShort("On the Huge Chain");
    SetLong("This place has quite a good view over Midgaard. Your possibilities of movement\n"+
        "seems to extend only to up and down. Unless you want to let go of the secure\n"+
        "and seemingly unmoveable chain, then those are the directions you should take\n"+
        "from here.");
    SetItems( ([ 
        "up" : "Up the way you see the chain dissappearing into the clouds above.",
        "down" : "Down below you see the huge chain anchored to the ground in the Road Crossing.",
        ] ));
    SetExits( ([
        "up" : "/domains/diku-alfa/room/79.zon/rm_7915",
        "down" : "/domains/diku-alfa/room/31.zon/rm_3120",
        ] ));
}

void init(){
   ::init();
}

/* NO_NPC's allowed in room*/
int CanReceive(object ob) {
    if(ob && !inherits(LIB_NPC, ob)){
    return 1;
    }
    else
    return 0;
}

/* Extra Information Original Diku Output 
Room name: On the Huge Chain, Of zone : 19. V-Number : 7914, R-number : 584
Sector type : Mountains Special procedure : No
Room flags: NO_MOB 
Description:
This place has quite a good view over Midgaard. Your possibilities of movement
seems to extend only to up and down. Unless you want to let go of the secure
and seemingly unmoveable chain, then those are the directions you should take
from here.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : (null)
Description:
  Up the way you see the chain dissappearing into the clouds above.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7915

Direction down . Keyword : (null)
Description:
  Down below you see the huge chain anchored to the ground in the Road Crossing.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3120
*/
