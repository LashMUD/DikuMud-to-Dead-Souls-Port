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
    SetShort("Cave tunnel");
    SetLong("You are walking in a tunnel. It is very cold. You\n"+
        "can feel the presence of a living thing ... SOMEWHERE.");
    SetItems( ([ 
        "north" : "To the north you can see the tunnel continuing.",
        "south" : "To the south tunnel continuing.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7008_homonculus" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7402",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7400",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Cave tunnel, Of zone : 17. V-Number : 7401, R-number : 525
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are walking in a tunnel. It is very cold. You
can feel the presence of a living thing ... SOMEWHERE.
Extra description keywords(s): None
------- Chars present -------
lemure blob(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north you can see the tunnel continuing.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7402

Direction south . Keyword : (null)
Description:
  To the south tunnel continuing.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7400
*/
