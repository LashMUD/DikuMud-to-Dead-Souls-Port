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
    SetShort("Mapmaker's Living Room");
    SetLong("  You have arrived to Mapmaker's living room. There's a fireplace on the\n"+
        "western wall and standing by it is a huge book-shelf. In the middle of the\n"+
        "room is a purple sofa (what a terrible color) and near it against the wall\n"+
        "is Mapmaker's working table..");
    SetExits( ([
        "east" : "/domains/diku-alfa/room/33.zon/rm_3307",        
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Mapmaker's Living Room, Of zone : 4. V-Number : 3308, R-number : 116
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You have arrived to Mapmaker's living room.  There's a fireplace on the
western wall and standing by it is a huge book-shelf.  In the middle of the
room is a purple sofa (what a terrible color) and near it against the wall
is Mapmaker's working table.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3307
*/
