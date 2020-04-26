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
    SetShort("Redferne's Bedroom");
    SetLong("This is a snugly set bedroom with all the necessities for a romantic evening.\n"+
        "A large fireplace adourns the east wall, and sizzling away is the wood that\n"+
        "is ablaze within. The bed is enormous, covering at least HALF of this great\n"+
        "room. This stretches at least 140 square feet, so can you imagine the BED?\n"+
        "A large staircase leads down to the hall. A couple of doors open up to a\n"+
        "broad balcony to the south. ");
    SetItems( ([ 
        "south" : "The suns seems to shine out there, warmly and comforting.",
        "down" : "",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/79.zon/rm_7912",
        "down" : "/domains/diku-alfa/room/79.zon/rm_7909",
        ] ));
    SetDoor("south", "/domains/diku-alfa/room/doors/7911_7912");
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
Room name: Redferne's Bedroom, Of zone : 19. V-Number : 7911, R-number : 581
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
This is a snugly set bedroom with all the necessities for a romantic evening.
A large fireplace adourns the east wall, and sizzling away is the wood that
is ablaze within. The bed is enormous, covering at least HALF of this great
room. This stretches at least 140 square feet, so can you imagine the BED?
A large staircase leads down to the hall. A couple of doors open up to a
broad balcony to the south. 
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : doors
Description:
  The suns seems to shine out there, warmly and comforting.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7912

Direction down . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7909
*/
