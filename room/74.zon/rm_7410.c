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
    SetShort("The small room");
    SetLong("As you look around you notice a small statue. There are\n"+
        "exits to the west and to the east.");
    SetItems( ([ 
        "east" : "It is pitch dark out there.",
        "west" : "You see a VERY long hallway.",
        ({"small", "statue"}) : "This is a statue of a imp, pointing to the west. The imp\n"+
            "looks like a man with horns and a tail.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7409",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7411",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The small room, Of zone : 17. V-Number : 7410, R-number : 534
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
As you look around you notice a small statue. There are
exits to the west and to the east.
Extra description keywords(s): 
small statue

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  It is pitch dark out there.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7409

Direction west . Keyword : (null)
Description:
  You see a VERY long hallway.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7411
*/
