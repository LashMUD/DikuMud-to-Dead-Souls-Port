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
    SetShort("Gimli's chamber");
    SetLong("This is an exact replica of the thronehall of Moravia, before the dark ages of\n"+
        "destruction. It is dominated by a throne on a platform in the center of the\n"+
        "room. The walls still contain uncut gems and to the east you can see that\n"+
        "the stone contains Mithril.");
    SetItems( ([
        "throne" : "The throne is made of solid Mithril and looks incredibly valuable.",
        ]) );
    SetExits( ([
        "up" : "/domains/diku-alfa/room/33.zon/rm_3303",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Gimli's chamber, Of zone : 4. V-Number : 3304, R-number : 112
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
This is an exact replica of the thronehall of Moria, before the dark ages of
destruction.  It is dominated by a throne on a platform in the center of the
room.  The walls still contain uncut gems and to the east you can see that
the stone contains Mithril.

Extra description keywords(s): 
throne

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3303
*/
