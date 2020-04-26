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
    SetShort("The sewer drain.");
    SetLong("You are in a drain, with some slimy water on the floor.");
    SetItems( ([ 
        "east" : "You see a sewer bend.",
        "west" : "You see a sewer drain.",
        ({"slimy", "water"}) : "The water floats to the east from here.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/72.zon/rm_7223",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7221",
        ] ));
}

void init(){
   ::init();
}
/* Extra Information Original Diku Output 
Room name: The sewer drain., Of zone : 16. V-Number : 7222, R-number : 504
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a drain, with some slimy water on the floor.
Extra description keywords(s): 
slimy water

------- Chars present -------
wererat rat were(MOB)
wererat rat were(MOB)
wererat rat were(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see a sewer bend.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7223

Direction west . Keyword : (null)
Description:
  You see a sewer drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7221
*/
