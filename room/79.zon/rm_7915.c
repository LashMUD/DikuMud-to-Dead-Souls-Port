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
    SetShort("The Chain where it's too windy");
    SetLong("Hanging on to the chain you figure out that there's no way of leaving down \n"+
        "from here. The wind pulls you from left to right and back. This seems like a\n"+
        "totally impossible task. The ascend is the only way ahead for you.\n"+
        "Otherwise you would risk death by falling to the hard ground below. DO NOT\n"+
        "DESCEND NOW OR YOU'LL SURELY DIE!!!!");
    SetItems( ([ 
        "up" : "That way seems to be the only way away from here.",
        "down" : "THAT WAY IS CERTAIN DEATH!!!! You can see the wind tearing at the chain down\n"+
            "below you. It swings like a furious serpent from side to side! The descend is\n"+
            "ABSOLUTELY out of the QUESTION. ",
        ] ));
    SetExits( ([
        "up" : "/domains/diku-alfa/room/79.zon/rm_7916",
        "down" : "/domains/diku-alfa/room/79.zon/rm_7920",
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
Room name: The Chain where it's too windy, Of zone : 19. V-Number : 7915, R-number : 585
Sector type : Mountains Special procedure : No
Room flags: NO_MOB 
Description:
Hanging on to the chain you figure out that there's no way of leaving down 
from here. The wind pulls you from left to right and back. This seems like a
totally impossible task. The ascend is the only way ahead for you.
Otherwise you would risk death by falling to the hard ground below. DO NOT
DESCEND NOW OR YOU'LL SURELY DIE!!!!
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : (null)
Description:
  That way seems to be the only way away from here.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7916

Direction down . Keyword : (null)
Description:
  THAT WAY IS CERTAIN DEATH!!!! You can see the wind tearing at the chain down
below you. It swings like a furious serpent from side to side! The descend is
ABSOLUTELY out of the QUESTION. 
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7920
*/
