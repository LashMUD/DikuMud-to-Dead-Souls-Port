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
    SetShort("The Kitchen of Naris");
    SetLong("This must be the place of food and drink. You can hear the faint noise of \n"+
        "rats feasting on meat and bread from somewhere undeterminable. The sound\n"+
        "makes you feel the agony of HUNGER. The only visible exit is south to the\n"+
        "Northern end of the hall. To the north there is a larder, and to the east\n"+
        "stands a fridge.");
    SetItems( ([ 
        "north" : "It's dark in there. But the sounds from there are unmistakable. The rats are\n"+
            "here to your information.",
        "east" : "You can see the fridge from here. In it are drinks all over.",
        "south" : "You can see the northern end of the hall.",
       ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/79.zon/rm_7907",
        "east" : "/domains/diku-alfa/room/79.zon/rm_7908",
        "south" : "/domains/diku-alfa/room/79.zon/rm_7904",
        ] ));
    SetDoor("north", "/domains/diku-alfa/room/doors/7906_7907");
    SetDoor("east", "/domains/diku-alfa/room/doors/7906_7908");
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
Room name: The Kitchen of Naris, Of zone : 19. V-Number : 7906, R-number : 576
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
This must be the place of food and drink. You can hear the faint noise of 
rats feasting on meat and bread from somewhere undeterminable. The sound
makes you feel the agony of HUNGER. The only visible exit is south to the
Northern end of the hall. To the north there is a larder, and to the east
stands a fridge.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : larder wooden cupboard
Description:
  It's dark in there. But the sounds from there are unmistakable. The rats are
here to your information.
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7907

Direction east . Keyword : fridge
Description:
  You can see the fridge from here. In it are drinks all over.
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7908

Direction south . Keyword : (null)
Description:
  You can see the northern end of the hall.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7904
*/
