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
    SetShort("Inside the cabin");
    SetLong("You are inside a small one-room cabin made entirely from heavy logs.  It is\n"+
        "very sparsely furnished, containing only most basic housekeeping equipment,\n"+
        "such as a bed, a chair and a table.");
    SetItems( ([ 
        "south" : "The wooden door leads south.",
        "bed" : "It is definitely not the most comfortable bed you have seen in your life.",
        "chair" : "It is made from oak and looks strong and sturdy.",
        "table" : "A heavy table that doesn't even appear to rock.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/60.zon/obj/6003_fireplace" :1,
        "/domains/diku-alfa/room/60.zon/obj/6004_lantern_johns" : 1,
        "/domains/diku-alfa/room/60.zon/obj/6005_chest_wooden" : 1, 
        "/domains/diku-alfa/room/60.zon/meals/6013_water_barrel" : 1,
        "/domains/diku-alfa/room/60.zon/obj/matchbox" : 1,       
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/60.zon/rm_6009",
        ] ));
    SetDoor( "south" , "/domains/diku-alfa/room/doors/6009_6010");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: Inside the cabin, Of zone : 11. V-Number : 6010, R-number : 331
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
You are inside a small one-room cabin made entirely from heavy logs.  It is
very sparsely furnished, containing only most basic housekeeping equipment,
such as a bed, a chair and a table.
Extra description keywords(s): 
table
chair
bed

------- Chars present -------

--------- Contents ---------
water barrel
chest
lantern
fireplace

------- Exits defined -------
Direction south . Keyword : door wooden
Description:
  The wooden door leads south.
Exit flag: IS-DOOR  
Key no: -1
To room (V-Number): 6009
*/
