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
    SetShort("The wind tunnel");
    SetLong("You are standing in a tunnel. Above you, you can feel\n"+
        "a breeze.");
    SetItems( ([ 
        "east" : "To dark to tell",
        "west" : "",
        "breeze" : "The breeze comes from a hole above you. NO way to get up\n"+
            "there.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7429",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7426",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The wind tunnel, Of zone : 17. V-Number : 7430, R-number : 554
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in a tunnel. Above you, you can feel
a breeze.
Extra description keywords(s): 
breeze

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  To dark to tell
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7429

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7426
*/
