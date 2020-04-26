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
    SetShort("In a shed on the Graveyard");
    SetLong("  You are in a small shed that looks as if it is used to store all sorts of\n"+
        "gardening equipment. The only exit appears to be through a door to the east.");
    SetItems( ([
        "east" : "The gravel path continues eastwards.",
        ]) );  
    SetExits( ([
        "east" : "/domains/diku-alfa/room/36.zon/rm_3612",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/36.zon/npc/3600_henry" : 1,
        "/domains/diku-alfa/room/36.zon/meals/3602_brandy_empty" : 1,
        "/domains/diku-alfa/room/36.zon/obj/3603_wheelbarrow" : 1,
        "/domains/diku-alfa/room/36.zon/weap/3604_shovel" : 1,
        "/domains/diku-alfa/room/36.zon/weap/3605_rake" : 1,
        ]) );
    SetDoor("east", "/domains/diku-alfa/room/doors/3612_3613");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: In a shed on the Graveyard, Of zone : 6. V-Number : 3613, R-number : 140
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
  You are in a small shed that looks as if it is used to store all sorts of
gardening equipment.  The only exit appears to be through a door to the east.

Extra description keywords(s): None
------- Chars present -------
henry gardener(MOB)

--------- Contents ---------
rake
shovel
wheelbarrow
brandy bottle

------- Exits defined -------
Direction east . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 3612
*/
