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
    SetShort("On the Great Chain of Naris");
    SetLong("You are approximately on the middle of the treacherous Chain. One false step\n"+
        "and death will come and collect you quickly. The chain leads upwards and down.\n"+
        "No way are you going to descend now... You've only just begun your climb.\n"+
        "Besides it could cost you your life. Look down and you'll see why.");
    SetItems( ([ 
        "up" : "There seems to be only one way from here and that's up.",
        "down" : "The chain down there is swinging wildly back and forth. Going down there will\n"+
            "be pretty risky!",
        ] ));
    SetExits( ([
        "up" : "/domains/diku-alfa/room/79.zon/rm_7918",
        "down" : "/domains/diku-alfa/room/79.zon/rm_7915",
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
Room name: On the Great Chain of Naris, Of zone : 19. V-Number : 7916, R-number : 586
Sector type : Mountains Special procedure : No
Room flags: NO_MOB 
Description:
You are approximately on the middle of the treacherous Chain. One false step
and death will come and collect you quickly. The chain leads upwards and down.
No way are you going to descend now... You've only just begun your climb.
Besides it could cost you your life. Look down and you'll see why.Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : (null)
Description:
  There seems to be only one way from here and that's up.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7918

Direction down . Keyword : (null)
Description:
  The chain down there is swinging wildly back and forth. Going down there will
be pretty risky!
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7915
*/
