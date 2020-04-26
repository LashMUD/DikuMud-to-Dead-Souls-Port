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
    SetShort("The Larder");
    SetLong("You can see food all over. Among the heaps of food you notice HUGE rats\n"+
        "scuttering around, nibling pieces off the heaps here and there.");
    SetItems( ([ 
        "south" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/79.zon/meals/7090_waybread" : 1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/79.zon/rm_7906",
        ] ));
    SetDoor("south", "/domains/diku-alfa/room/doors/7906_7907");
}

void init(){
   ::init();
}

/* Only ARCH's (private) and room inventory allowed in room*/
int CanReceive(object ob) {
    if(ob && !archp(ob) && 
             strcmp("a waybread", ob->GetShort())){
    tell_object(ob, "There's a private conversation going on in that room.");
    return 0;
    }else 
    return ::CanReceive(ob);
}

/* Extra Information Original Diku Output 
Room name: The Larder, Of zone : 19. V-Number : 7907, R-number : 577
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
You can see food all over. Among the heaps of food you notice HUGE rats
scuttering around, nibling pieces off the heaps here and there.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
waybread food

------- Exits defined -------
Direction south . Keyword : door wooden larder exit
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7906
*/
