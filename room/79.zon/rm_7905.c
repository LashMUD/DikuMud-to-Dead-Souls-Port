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
    SetShort("The Sitting room of Naris");
    SetLong("You are standing in the middle of a really comfortable place. The walls are\n"+
        "decorated with paintings of smiling Kings and Queens. The most attractive\n"+
        "picture is one of a Prince in shiny armour. By one of the walls there is an\n"+
        "old arm-chair. The only exit is through the aspenwood door to the east.");
    SetItems( ([ 
        "east" : "The door seems to be a very HEAVY door, carved completely from the trunk of\n"+
	"an Aspen tree.",
        ({"chair", "arm-chair"}) : "This is truly a wonderful relic of the past. In it is a large cushion.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/79.zon/rm_7904",
        ] ));
    SetDoor("east", "/domains/diku-alfa/room/doors/7904_7905");
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
Room name: The Sitting room of Naris, Of zone : 19. V-Number : 7905, R-number : 575
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
You are standing in the middle of a really comfortable place. The walls are
decorated with paintings of smiling Kings and Queens. The most attractive
picture is one of a Prince in shiny armour. By one of the walls there is an
old arm-chair. The only exit is through the aspenwood door to the east.
Extra description keywords(s): 
chair arm-chair

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : asp aspen door heavy
Description:
  The door seems to be a very HEAVY door, carved completely from the trunk of
an Aspen tree.
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7904
*/
