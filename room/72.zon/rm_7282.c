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
    SetAmbientLight(30);
    SetShort("The Realm of lost souls");
    SetLong("You are standing in nothing. All around you there are stars.\n"+
        "Sometimes a shadow flies closely by you, wailing very loudly. \n"+
        "To the north there is a small bright hole. To the west there is \n"+
        "a small red hole.");
    SetItems( ([ 
        "north" : "You look into a very bright hole.",
        "west" : "You look into a red hole.",
        "shadow" : "The shadow looks like a man in great pain.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/72.zon/rm_7283",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7281",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Realm of lost souls, Of zone : 16. V-Number : 7282, R-number : 517
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
You are standing in nothing. All around you there are stars.
Sometimes a shadow flies closely by you, wailing very loudly. 
To the north there is a small bright hole. To the west there is 
a small red hole.
Extra description keywords(s): 
shadow

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You look into a very bright hole.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7283

Direction west . Keyword : (null)
Description:
  You look into a red hole.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7281
*/
