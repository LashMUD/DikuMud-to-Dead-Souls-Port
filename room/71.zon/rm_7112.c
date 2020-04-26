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
    SetShort("An odd intersection");
    SetLong("You stand in a rather odd intersection of pipes. The pipes actually don't\n"+
        "resemble pipes anymore. They look more like a real stone tunnel, or a\n"+
        "passageway hewn directly into the rock. The ways from here lead north, east\n"+
        "and west.");
    SetItems( ([ 
        "north" : "North. You see a ledge to something that looks like an abyss.",
        "east" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/71.zon/npc/7005_maggot" :2,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/71.zon/rm_7111",
        "east" : "/domains/diku-alfa/room/71.zon/rm_7122",
        "west" : "/domains/diku-alfa/room/71.zon/rm_7104",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: An odd intersection, Of zone : 15. V-Number : 7112, R-number : 466
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in a rather odd intersection of pipes. The pipes actually don't
resemble pipes anymore. They look more like a real stone tunnel, or a
passageway hewn directly into the rock. The ways from here lead north, east
and west.
Extra description keywords(s): None
------- Chars present -------
snake(MOB)
maggot(MOB)
rat(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  North. You see a ledge to something that looks like an abyss.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7111

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7122

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7104
*/
