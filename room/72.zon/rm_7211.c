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
#include <terrain_types.h>

inherit LIB_ROOM;

static void create() {
    room::create();

    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("The small cave.");
    SetLong("You are in a collapsed sewer drain, which now is more like a small cave.");
    SetItems( ([ 
        "south" : "You look back into the four-way junction.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/obj/7208_stick_light" : 1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/72.zon/rm_7210",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The small cave., Of zone : 16. V-Number : 7211, R-number : 493
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a collapsed sewer drain, which now is more like a small cave.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
stick small light

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You look back into the four-way junction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7210
*/
