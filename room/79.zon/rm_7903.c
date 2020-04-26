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
    SetShort("The Artifact room of Naris");
    SetLong("This is gloomy and dark room with only a faint light radiating from the\n"+
        "walls. A bunch of funny-looking items fill the center of the room. There are\n"+
        "no furniture here what-so-ever. The only way out seems to be west, through\n"+
        "the low steel door.");
    SetItems( ([ 
        "west" : "You see only the back of a safe's steel door.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/79.zon/obj/7909_money" : 1,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/79.zon/rm_7910",
        ] ));
    SetDoor("west", "/domains/diku-alfa/room/doors/7901_7910");
}

void init(){
   ::init();
}

/* Only ARCH's (private) and room inventory allowed in room*/
int CanReceive(object ob) {
    if(ob && !archp(ob) && 
             strcmp("a huge treasure", ob->GetShort())){
    tell_object(ob, "There's a private conversation going on in that room.");
    return 0;
    }else 
    return ::CanReceive(ob);
}

/* Extra Information Original Diku Output 
Room name: The Artifact room of Naris, Of zone : 19. V-Number : 7903, R-number : 573
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
This is gloomy and dark room with only a faint light radiating from the
walls. A bunch of funny-looking items fill the center of the room. There are
no furniture here what-so-ever. The only way out seems to be west, through
the low steel door.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
treasure coins

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  You see only the back of a safe's steel door.
Exit flag: CLOSED LOCKED  
Key no: -1
To room (V-Number): 8309
*/
