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
    SetShort("The hot room");
    SetLong("You are very surprised, as this room for a change are\n"+
        "hot instead of cold. To the north it goes downwards into\n"+
        "some mud. There are also an exit to the west.");
    SetItems( ([ 
        "north" : "You see a lot of mud.",
        "west" : "You see a entrance to a small room.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7407",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7410",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The hot room, Of zone : 17. V-Number : 7409, R-number : 533
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are very surprised, as this room for a change are
hot instead of cold. To the north it goes downwards into
some mud. There are also an exit to the west.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see a lot of mud.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7407

Direction west . Keyword : (null)
Description:
  You see a entrance to a small room.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7410
*/
