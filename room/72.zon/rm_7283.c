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
    SetShort("The T-crossing");
    SetLong("You are in a small hallway. There are doors to the east and to\n"+
        "the west. To the south there are a black hole. There is writing\n"+
        "in the wall. Wails can be heard from the south.");
    SetItems( ([ 
        "south" : "A black hole in the wall.",
        "west" : "You can see a big fire to the west. It looks like a unhealthy\n"+
            "place to enter!",
        "east" : "To dark to tell.",
        "writing" : "The writing says 'The one to the east, belongs to the beast.\n"+
            "To the west you will surely END your quest!'.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/72.zon/rm_7286",
        "south" : "/domains/diku-alfa/room/72.zon/rm_7282",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7284",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The T-crossing, Of zone : 16. V-Number : 7283, R-number : 518
Sector type : City Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You are in a small hallway. There are doors to the east and to
the west. To the south there are a black hole. There is writing
in the wall. Wails can be heard from the south.
Extra description keywords(s): 
writing

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  To dark to tell.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7286

Direction south . Keyword : (null)
Description:
  A black hole in the wall.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7282

Direction west . Keyword : (null)
Description:
  You can see a big fire to the west. It looks like a unhealthy
place to enter!
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7284
*/
