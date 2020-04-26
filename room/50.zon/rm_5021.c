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

    SetAmbientLight(30);
    SetShort("Grassy plains");
    SetLong("You walk in the grassy plains. The wind is fairly strong.");
    SetItems( ([ 
        "east" : "The plains extend far to the east.",
        "south" : "The plains extend far to the south.",
        "west" : "A small path is running through the plains.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5038",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5017",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5005",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Grassy plains, Of zone : 9. V-Number : 5021, R-number : 290
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
You walk in the grassy plains. The wind is fairly strong.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The plains extend far to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5038

Direction south . Keyword : (null)
Description:
  The plains extend far to the south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5017

Direction west . Keyword : (null)
Description:
  A small path is running through the plains.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5005
*/
