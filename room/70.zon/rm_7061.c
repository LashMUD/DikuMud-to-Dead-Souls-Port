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
    SetShort("The Watery Sewer Bend");
    SetLong("You can't see anything but the water you're in up to your hips. The sewer\n"+
        "seems to bend and lead south and west.");
    SetItems( ([ 
        "south" : "You can't see anything in that direction and your light isn't enough to light\n"+
            "that far.",
        "west" : "You can't see anything in that direction and your light isn't enough to light\n"+
            "that far.",
        "water" : "It looks dark and murky, and emanates a foul stench.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/70.zon/rm_7062",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7055",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Watery Sewer Bend, Of zone : 14. V-Number : 7061, R-number : 444
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You can't see anything but the water you're in up to your hips. The sewer
seems to bend and lead south and west.
Extra description keywords(s): 
water

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You can't see anything in that direction and your light isn't enough to light
that far.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7062

Direction west . Keyword : (null)
Description:
  You can't see anything in that direction and your light isn't enough to light
that far.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7055
*/
