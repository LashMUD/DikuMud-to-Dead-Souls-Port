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
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The fog");
    SetLong("   You are in a grey fog, falling, screaming in pain as you realize\n"+
        "that you are being torn to nothing, atom by atom, falling and falling \n"+
        "and falling......\n"+
        "....\n"+
        ".");
    SetItems( ([ 
        ] ));
    SetExits( ([
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
Room name: The fog, Of zone : 22. V-Number : 8999, R-number : 657
Sector type : Inside Special procedure : No
Room flags: DEATH NO_MOB 
Description:
   You are in a grey fog, falling, screaming in pain as you realize
that you are being torn to nothing, atom by atom, falling and falling 
and falling......
....
.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
*/
