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
    SetShort("The half-wet drain.");
    SetLong("You are in a sewer drain where the floor is covered with water. To the north\n"+
        "it looks more dry, south however the drain runs down into some water.");
    SetItems( ([ 
        "north" : "To the north lies a dry four-way junction.",
        "south" : "To the south you see a sewer drain filled with water.",
        "water" : "The water is dirty but it looks like you would be able to swim in it.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7203_wererat" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/72.zon/rm_7210",
        "south" : "/domains/diku-alfa/room/72.zon/rm_7216",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The half-wet drain., Of zone : 16. V-Number : 7215, R-number : 497
Sector type : Hills Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a sewer drain where the floor is covered with water. To the north
it looks more dry, south however the drain runs down into some water.
Extra description keywords(s): 
water

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north lies a dry four-way junction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7210

Direction south . Keyword : (null)
Description:
  To the south you see a sewer drain filled with water.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7216
*/
