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
    SetShort("Doz' private quarters");
    SetLong("  This is Doz' personal room where he goes when he needs a pause in all the\n"+
        "fighting. There is a comfortable looking couch in one corner of the room and\n"+
        "a desk and an armchair in the other. There are some souvenirs from Doz'\n"+
        "adventures scattered on the floor. A bookcase filled with old books and\n"+
        "scrolls stands against the wall.");
    SetItems( ([
        ({"bookcase", "case"}) : "You don't dare take out any of the old books from it.",
        "desk" : "The desk is clean for the moment.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/33.zon/armor/3312_bplate_Doz" : 1,
        "/domains/diku-alfa/room/33.zon/armor/3313_helmet_Doz" : 1,
        "/domains/diku-alfa/room/33.zon/armor/3314_sleeves_Doz" : 1,
        "/domains/diku-alfa/room/33.zon/armor/3315_cloak_Doz" : 1,
        "/domains/diku-alfa/room/33.zon/armor/3316_shield_Doz" : 1,
        "/domains/diku-alfa/room/33.zon/armor/3317_gauntlets_Doz" : 1,
        "/domains/diku-alfa/room/33.zon/armor/3318_leggings_Doz" : 1,
        "/domains/diku-alfa/room/33.zon/obj/3319_machine_dozcola" : 1,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/33.zon/rm_3305",
        ]) );
    SetDoor("west", "/domains/diku-alfa/room/doors/3305_3306");//requires key "3310"
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Doz' private quarters, Of zone : 4. V-Number : 3306, R-number : 114
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   This is Doz' personal room where he goes when he needs a pause in all the
fighting.  There is a comfortable looking couch in one corner of the room and
a desk and an armchair in the other.  There are some souvenirs from Doz'
adventures scattered on the floor.  A bookcase filled with old books and
scrolls stands against the wall.

Extra description keywords(s): 
bookcase case
desk

------- Chars present -------

--------- Contents ---------
coke machine
golden leggings
golden gauntlets
golden shield
golden cloak
golden sleeves
golden helmet
golden breast plate

------- Exits defined -------
Direction west . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3310
To room (V-Number): 3305
*/
