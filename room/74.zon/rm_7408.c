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
    SetShort("The long tunnel");
    SetLong("Here There is almost no mud, as you stand at the top\n"+
        "of a small rock. Just beside you there are a sign which\n"+
        "says 'WARNING! The worms are dangerous!'.");
    SetItems( ([ 
        "north" : "You can see a lot of mud..Yarck!",
        "south" : "The tunnel goes a little downwards.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7403",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7407",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The long tunnel, Of zone : 17. V-Number : 7408, R-number : 532
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
Here There is almost no mud, as you stand at the top
of a small rock. Just beside you there are a sign which
says 'WARNING! The worms are dangerous!'.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can see a lot of mud..Yarck!
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7403

Direction south . Keyword : (null)
Description:
  The tunnel goes a little downwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7407
*/
