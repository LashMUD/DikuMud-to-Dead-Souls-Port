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

    SetTerrainType(T_ROAD | T_WOODS);
    SetAmbientLight(30);
    SetShort("The ancient path");
    SetLong("   You find yourself located between the bridge and the rock formations.\n"+
        "As you approach the formations you begin to realize the true size of\n"+
        "them, about 15 ft tall and almost perfect rectangular shape.\n"+
        "You feel impressed with the awsome sight.");
    SetItems( ([ 
        "east" : "To the east you enter the ring of stones. You wonder if it's safe.",
        "west" : "To the west the ancient path leads across the wooden bridge.",
        ({"rock", "formation", "formations"}) : "The rock formations are made of 7 huge, monolith like stones, placed\n"+
            "in a symbolic circle.\n"+
            "You notice it's possible to enter the ring.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5039",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5036",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The ancient path, Of zone : 9. V-Number : 5037, R-number : 304
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
   You find yourself located between the bridge and the rock formations.
As you approach the formations you begin to realize the true size of
them, about 15 ft tall and almost perfect rectangular shape.
You feel impressed with the awsome sight.

Extra description keywords(s): 
rock formation formations

------- Chars present -------
rabbit(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  To the east you enter the ring of stones. You wonder if it's safe.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5039

Direction west . Keyword : (null)
Description:
  To the west the ancient path leads across the wooden bridge.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5036
*/
