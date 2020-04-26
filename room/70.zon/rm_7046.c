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
    SetAmbientLight(30);
    SetShort("The Sewer room");
    SetLong("This is a Room with walls that glitters like gold though not quite like it.\n"+
        "This is strange as it looks as if the glitter lights the whole room. It\n"+
        "looks very bright. To the south the floor is covered with yucky water. The\n"+
        "North leads to sort of a Guard Room.");
    SetItems( ([ 
        "north" : "To the north you can see the guard room.",
        "south" : "To the south there is nothing but water and an exit leads east from there.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7045",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7047",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Sewer room, Of zone : 14. V-Number : 7046, R-number : 430
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
This is a Room with walls that glitters like gold though not quite like it.
This is strange as it looks as if the glitter lights the whole room. It
looks very bright. To the south the floor is covered with yucky water. The
North leads to sort of a Guard Room.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north you can see the guard room.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7045

Direction south . Keyword : (null)
Description:
  To the south there is nothing but water and an exit leads east from there.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7047
*/
