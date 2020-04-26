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
    SetShort("The Watery Sewer Junction");
    SetLong("You can't see anything but the water you're in up to your hips. The sewer\n"+
        "seems to lead into a junction going south,north and east.");
    SetItems( ([ 
        "north" : "You can't see anything in that direction and your light isn't enough to light\n"+
            "that far.",
        "east" : "You can't see anything in that direction and your light isn't enough to light\n"+
            "that far.",
        "south" : "You can't see anything in that direction and your light isn't enough to light\n"+
            "that far.",
        "water" : "It looks dark and murky, and emanates a foul stench.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7063",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7069",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7065",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Watery Sewer Junction, Of zone : 14. V-Number : 7064, R-number : 447
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You can't see anything but the water you're in up to your hips. The sewer
seems to lead into a junction going south,north and east.
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
To room (V-Number): 7063

Direction east . Keyword : (null)
Description:
  You can't see anything in that direction and your light isn't enough to light
that far.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7069

Direction south . Keyword : (null)
Description:
  You can't see anything in that direction and your light isn't enough to light
that far.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7065
*/
