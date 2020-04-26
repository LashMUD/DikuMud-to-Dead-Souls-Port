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
    SetShort("On the stairs");
    SetLong("You can see up and down the stairway. It seems to take forever, either going\n"+
        "up OR down. It's just a seemingly insurmountable climb, either way. Up is the \n"+
        "bedroom of Redferne, and Down leads to the Southern end of the hall.");
    SetItems( ([ 
        "up" : "",
        "down" : "",
        ] ));
    SetExits( ([
        "up" : "/domains/diku-alfa/room/79.zon/rm_7911",
        "down" : "/domains/diku-alfa/room/79.zon/rm_7901",
        ] ));
}

void init(){
   ::init();
}

/* Only ARCH's (private) allowed in room*/
int CanReceive(object ob) {
    if(ob && !archp(ob)){
    tell_object(ob, "There's a private conversation going on in that room.");
    return 0;
    }else 
    return ::CanReceive(ob);
}

/* Extra Information Original Diku Output 
Room name: On the stairs, Of zone : 19. V-Number : 7909, R-number : 579
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
You can see up and down the stairway. It seems to take forever, either going
up OR down. It's just a seemingly insurmountable climb, either way. Up is the 
bedroom of Redferne, and Down leads to the Southern end of the hall.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7911

Direction down . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7901
*/
