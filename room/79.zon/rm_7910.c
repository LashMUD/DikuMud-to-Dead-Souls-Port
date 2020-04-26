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
    SetShort("The Treasure room");
    SetLong("This place is gloomy. A HUGE safe is cemented into the west wall. The only \n"+
        "visible exit is west, through the oak door.");
    SetItems( ([ 
        "east" : "",
        "west" : "You see a tall oak door.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/79.zon/obj/7910_chest_wooden" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/79.zon/rm_7903",
        "west" : "/domains/diku-alfa/room/79.zon/rm_7901",
        ] ));
    SetDoor("west", "/domains/diku-alfa/room/doors/7901_7910");
}

void init(){
   ::init();
}

/* Only ARCH's (private) and room inventory allowed in room*/
int CanReceive(object ob) {
    if(ob && !archp(ob) && 
             strcmp("a wooden chest", ob->GetShort())){
    tell_object(ob, "There's a private conversation going on in that room.");
    return 0;
    }else 
    return ::CanReceive(ob);
}

/* Extra Information Original Diku Output 
Room name: The Treasure room, Of zone : 19. V-Number : 7910, R-number : 580
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
This place is gloomy. A HUGE safe is cemented into the west wall. The only 
visible exit is west, through the oak door.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
chest

------- Exits defined -------
Direction east . Keyword : safe steel
Description:
  UNDEFINED
Exit flag: CLOSED LOCKED  
Key no: -1
To room (V-Number): 8309

Direction west . Keyword : door oak tall
Description:
  You see a tall oak door.
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7901
*/
