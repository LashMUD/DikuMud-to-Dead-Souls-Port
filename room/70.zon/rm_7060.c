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

    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(0);
    SetShort("The dark passageway");
    SetLong("You can't see anything but the ground where you put your feet. The\n"+
        "passageway seems to continue west and north. To the east there's water\n"+
        "covering the floor and that leads through an arched entry to a watery\n"+
        "sewer.");
    SetItems( ([ 
        "north" : "You can't see anything in that direction and your light isn't enough to light\n"+
            "that far.",
        "east" : "You can't see anything in that direction and your light isn't enough to light\n"+
            "that far.",
        "west" : "You can just make out a triple junction leading north and west.",
        "water" : "It looks dark and murky, and emanates a foul stench.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7059",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7068",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7049",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The dark passageway, Of zone : 14. V-Number : 7060, R-number : 443
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You can't see anything but the ground where you put your feet. The
passageway seems to continue west and north. To the east there's water
covering the floor and that leads through an arched entry to a watery
sewer.
Extra description keywords(s): 
water

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can't see anything in that direction and your light isn't enough to light
that far.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7059

Direction east . Keyword : (null)
Description:
  You can't see anything in that direction and your light isn't enough to light
that far.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7068

Direction west . Keyword : (null)
Description:
  You can just make out a triple junction leading north and west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7049
*/
