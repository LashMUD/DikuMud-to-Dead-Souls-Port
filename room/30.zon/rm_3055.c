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
    SetShort("Odin's Store");
    SetLong("  This is the small dark room in which Odin keeps the player items that he\n"+
        "takes care of. It is vital that this room's virtual number is exactly one\n"+
        "larger than the room by the temple altar.");
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/obj/key_3300" : 1,
        "/domains/diku-alfa/room/30.zon/obj/key_3301" : 1,
        "/domains/diku-alfa/room/30.zon/obj/key_3302" : 1,
        "/domains/diku-alfa/room/30.zon/obj/key_3307" : 1,
        "/domains/diku-alfa/room/30.zon/obj/key_3310" : 1,
        "/domains/diku-alfa/room/30.zon/obj/key_3321" : 1,
        ]) );
    SetExits( ([
        "None" : "",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Odin's Store, Of zone : 1. V-Number : 3055, R-number : 57
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   This is the small dark room in which Odin keeps the player items that he
takes care of.  It is vital that this room's virtual number is exactly one
larger than the room by the temple altar.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
key iron
key iron
key mithril
key metal
key copper
key large steel
key brass
key metal

------- Exits defined -------
*/
