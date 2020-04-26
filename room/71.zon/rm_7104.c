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
    SetShort("A junction in the sewer pipes");
    SetLong("You stand in the middle of what looks like a triple junction of pipes\n"+
        "going east, west and north.");
    SetItems( ([ 
        "north" : "You can see a mud area starting in that direction.",
        "east" : "East. You can't even make out what it might look like, it's just too dark.",
        "west" : "West. There's a room with a ladder leading up.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/71.zon/npc/7002_rat_sewer" :1,
        "/domains/diku-alfa/room/71.zon/npc/7006_snake_slithering" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/71.zon/rm_7103",
        "east" : "/domains/diku-alfa/room/71.zon/rm_7112",
        "west" : "/domains/diku-alfa/room/71.zon/rm_7102",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A junction in the sewer pipes, Of zone : 15. V-Number : 7104, R-number : 458
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in the middle of what looks like a triple junction of pipes
going east, west and north.
Extra description keywords(s): None
------- Chars present -------
homonculus homo(MOB)
maggot(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can see a mud area starting in that direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7103

Direction east . Keyword : (null)
Description:
  East. You can't even make out what it might look like, it's just too dark.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7112

Direction west . Keyword : (null)
Description:
  West. There's a room with a ladder leading up.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7102
*/
