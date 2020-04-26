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
#include <terrain_types.h>

inherit LIB_ROOM;

static void create() {
    room::create();

    SetTerrainType(T_WOODS);
    SetAmbientLight(0);
    SetShort("Up in the tree");
    SetLong("You are hanging on the outside of a huge tree trunk covered in a sticky\n"+
        "substance.  Directly to the west is an immense spider web suspended between\n"+
        "numerous of the giant trees including the one you are hanging on.");
    SetItems( ([ 
        "west" : "To the west is the immense spider web.  It seems to move softly.",
        "down" : "Downwards is the narrow forest path.",
        "web" : "The spider web stretches out to the west.  It looks as if it is possible to\n"+
            "walk on it.",
        ] ));
    SetExits( ([
        "west" : "/domains/diku-alfa/room/61.zon/rm_6133",
        "down" : "/domains/diku-alfa/room/61.zon/rm_6130",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Up in the tree, Of zone : 12. V-Number : 6132, R-number : 377
Sector type : Water Swim Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You are hanging on the outside of a huge tree trunk covered in a sticky
substance.  Directly to the west is an immense spider web suspended between
numerous of the giant trees including the one you are hanging on.
Extra description keywords(s): 
web

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  To the west is the immense spider web.  It seems to move softly.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6133

Direction down . Keyword : (null)
Description:
  Downwards is the narrow forest path.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6130
*/
