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
    SetShort("North-eastern part of Basilisks cave");
    SetLong("It is hard to see here because of the smoke. To the north you\n"+
        "can see barly see a small tunnel. Other exits are to the south\n"+
        "and to the west.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7436",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7438",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7439",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: North-eastern part of Basilisks cave, Of zone : 17. V-Number : 7437, R-number : 561
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
It is hard to see here because of the smoke. To the north you
can see barly see a small tunnel. Other exits are to the south
and to the west.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7436

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7438

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7439
*/
