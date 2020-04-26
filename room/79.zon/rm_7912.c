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
    SetShort("The Balcony of Redferne's Residence");
    SetLong("You see a splendid of the most of this world. The valleys stretch as far as\n"+
        "the eye reaches to the south from here. Down below you can see the entrance\n"+
        "of this magnificent building. To the north are the doors to Redferne's Bedroom.");
    SetItems( ([ 
        "north" : "You see the comfortable bedroom of Naris, the mansion of Redferne the Greater\n"+
            "God.",
        "down" : "You see the ground on which this castle is set. Funnily it seems to you that\n"+
            "it's no more than clouds.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/79.zon/rm_7911",
        ] ));
    SetDoor("north", "/domains/diku-alfa/room/doors/7911_7912");
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
Room name: The Balcony of Redferne's Residence, Of zone : 19. V-Number : 7912, R-number : 582
Sector type : Inside Special procedure : No
Room flags: NO_MOB PRIVATE 
Description:
You see a splendid of the most of this world. The valleys stretch as far as
the eye reaches to the south from here. Down below you can see the entrance
of this magnificent building. To the north are the doors to Redferne's Bedroom.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : doors
Description:
  You see the comfortable bedroom of Naris, the mansion of Redferne the Greater
God.
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7911

Direction down . Keyword : (null)
Description:
  You see the ground on which this castle is set. Funnily it seems to you that
it's no more than clouds.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
