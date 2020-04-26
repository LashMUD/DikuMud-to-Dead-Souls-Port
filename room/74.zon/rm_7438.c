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
    SetShort("South-eastern part of basilisks cave");
    SetLong("There are a very small hole in wall, from where the smoke\n"+
        "are coming from. Otherwise it is pitch dark. Exits are north\n"+
        "and west.");
    SetItems( ([ 
        "north" : "You can see nothing but smoke",
        "west" : "You can see nothing but smoke",
        ({"hole", "small"}) : "It's a small hole. About 1 feet in diameter.",
        ] ));
     SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7437",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7440",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: South-eastern part of basilisks cave, Of zone : 17. V-Number : 7438, R-number : 562
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
There are a very small hole in wall, from where the smoke
are coming from. Otherwise it is pitch dark. Exits are north
and west.
Extra description keywords(s): 
hole small

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can see nothing but smoke
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7437

Direction west . Keyword : (null)
Description:
  You can see nothing but smoke
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7440
*/
