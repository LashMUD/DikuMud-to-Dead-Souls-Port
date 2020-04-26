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
    SetShort("The secret passageroom");
    SetLong("You have entered a tiny room. There is an exit down, and an\n"+
        "exit to the west.");
    SetItems( ([ 
        "west" : "You can see a light to the west",
        ] ));
    SetExits( ([
        "west" : "/domains/diku-alfa/room/74.zon/rm_7431",
         ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The secret passageroom, Of zone : 17. V-Number : 7432, R-number : 556
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You have entered a tiny room. There is an exit down, and an
exit to the west.
Extra description keywords(s): None
------- Chars present -------
Lash(PC)

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  You can see a light to the west

Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7431
*/
