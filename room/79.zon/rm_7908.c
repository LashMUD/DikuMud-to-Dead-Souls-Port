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
    SetShort("The Fridge");
    SetLong("This place is LOADED with drink, water and booze.");
    SetItems( ([ 
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/79.zon/meals/6013_water_barrel" : 1,
        ] ));
    SetExits( ([
        "west" : "/domains/diku-alfa/room/79.zon/rm_7906",
        ] ));
    SetDoor("west", "/domains/diku-alfa/room/doors/7906_7908");
}

void init(){
   ::init();
}

/* Only ARCH's (private) and room inventory allowed in room*/
int CanReceive(object ob) {
    if(ob && !archp(ob) && 
             strcmp("a water barrel", ob->GetShort())){
    tell_object(ob, "There's a private conversation going on in that room.");
    return 0;
    }else 
    return ::CanReceive(ob);
}

/* Extra Information Original Diku Output 
Room name: The Fridge, Of zone : 19. V-Number : 7908, R-number : 578
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
This place is LOADED with drink, water and booze.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
water barrel

------- Exits defined -------
Direction west . Keyword : door exit fridge
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7906
*/
