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
    SetShort("The half-dry drain.");
    SetLong("You are in a half-dry sewer drain. To the north the drain runs a little bit\n"+
        "downwards into some water to the east you can see a small hole. To the west\n"+
        "you see another drain.");
    SetItems( ([ 
        "north" : "You see the drain running down into some water.",
        "east" : "Through the hole you can just make out a very small room.",
        "west" : "You see a drain running to the west.",
        "water" : "The water is dirty but it looks like you would be able to swim in it.",
        "hole" : "Through the hole you can just make out a very small room.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7203_wererat" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/72.zon/rm_7216",
        "east" : "/domains/diku-alfa/room/72.zon/rm_7218",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7219",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The half-dry drain., Of zone : 16. V-Number : 7217, R-number : 499
Sector type : Hills Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a half-dry sewer drain. To the north the drain runs a little bit
downwards into some water to the east you can see a small hole. To the west
you see another drain.
Extra description keywords(s): 
hole
water

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the drain running down into some water.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7216

Direction east . Keyword : (null)
Description:
  Through the hole you can just make out a very small room.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7218

Direction west . Keyword : (null)
Description:
  You see a drain running to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7219
*/
