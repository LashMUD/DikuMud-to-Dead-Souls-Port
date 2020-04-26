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

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(0);
    SetShort("The burned room");
    SetLong("You are in a room, which once had been quite burned.\n"+
        "There is writing on the wall.");
    SetItems( ([ 
        "south" : "You can see a red glow",
        "west" : "",
        "writing" : "The writing says 'DANGER!!!'",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7010_chreffn" :1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/74.zon/rm_7428",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7430",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The burned room, Of zone : 17. V-Number : 7429, R-number : 553
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a room, which once had been quite burned.
There is writing on the wall.
Extra description keywords(s): 
writing

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You can see a red glow
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7428

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7430
*/
