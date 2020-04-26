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
    SetShort("Another intersection");
    SetLong("You have never seen anything so BORING...This is an intersection with pipes\n"+
        "leading north, south and east.");
    SetItems( ([ 
        "north" : "To the north there's an intersection, where the pipes are leading west and\n"+
            "east. You notice that the floor to the west is covered in mud.",
        "east" : "East. You see nothing of interest in that direction, just another \n"+
            "intersection. This one leads east and south.",
        "south" : "Another intersection lies to the south. It leads west and south.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/70.zon/npc/7001_bat" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7024",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7038",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7026",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Another intersection, Of zone : 14. V-Number : 7025, R-number : 414
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You have never seen anything so BORING...This is an intersection with pipes
leading north, south and east.
Extra description keywords(s): None
------- Chars present -------
spider(MOB)
bat(MOB)
bat(MOB)
bat(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north there's an intersection, where the pipes are leading west and
east. You notice that the floor to the west is covered in mud.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7024

Direction east . Keyword : (null)
Description:
  East. You see nothing of interest in that direction, just another 
intersection. This one leads east and south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7038

Direction south . Keyword : (null)
Description:
  Another intersection lies to the south. It leads west and south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7026
*/
