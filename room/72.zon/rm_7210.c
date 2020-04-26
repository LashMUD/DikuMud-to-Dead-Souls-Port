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
    SetShort("The four-way function.");
    SetLong("You are in a sewer junction. To the north is a small hole, to the west is a\n"+
        "narrow crawlway and to the east and south the sewer continues.");
    SetItems( ([ 
        "north" : "You can see a small cave-like room.",
        "east" : "You can see a sewer drain.",
        "south" : "You can see a sewer drain.",
        "west" : "You can see a narrow crawlway.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/72.zon/rm_7211",
        "east" : "/domains/diku-alfa/room/72.zon/rm_7212",
        "south" : "/domains/diku-alfa/room/72.zon/rm_7215",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7209",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The four-way function., Of zone : 16. V-Number : 7210, R-number : 492
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a sewer junction. To the north is a small hole, to the west is a
narrow crawlway and to the east and south the sewer continues.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can see a small cave-like room.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7211

Direction east . Keyword : (null)
Description:
  You can see a sewer drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7212

Direction south . Keyword : (null)
Description:
  You can see a sewer drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7215

Direction west . Keyword : (null)
Description:
  You can see a narrow crawlway.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7209
*/
