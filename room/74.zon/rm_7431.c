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
    SetShort("The glittering room");
    SetLong("This room are all bright. In the walls you can see some\n"+
        "silver. Exits are: West, east and south.");
    SetItems( ([ 
        "east" : "",
        "south" : "",
        "west" : "",
        ({"glitter", "walls", "silver"}) : "The glittering silver looks like it is INSIDE the walls.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7432",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7426",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7433",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The glittering room, Of zone : 17. V-Number : 7431, R-number : 555
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
This room are all bright. In the walls you can see some
silver. Exits are: West, east and south.
Extra description keywords(s): 
glitter walls silver

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7432

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7426

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7433
*/
