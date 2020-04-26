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

    SetTerrainType(T_UNDERGROUND |T_ROUGH);
    SetAmbientLight(0);
    SetShort("The Edge of the Water");
    SetLong("The pool side is dimly lit up by your light. You can see absolutely nothing\n"+
        "else nearby. The darkness her seems enormously oppressive here. The air is\n"+
        "damp and the rock on which you stand is slippery. The pool seems too dark \n"+
        "to make anything clear. The pool seems to extend to the east. The rock can \n"+
        "be climbed upwards from here.");
    SetItems( ([ 
        "east" : "",
        "up" : "",
        ] ));
    SetExits( ([
       "up" : "/domains/diku-alfa/room/70.zon/rm_7099",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Edge of the Water, Of zone : 15. V-Number : 7199, R-number : 481
Sector type : Mountains Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
The pool side is dimly lit up by your light. You can see absolutely nothing
else nearby. The darkness her seems enormously oppressive here. The air is
damp and the rock on which you stand is slippery. The pool seems too dark 
to make anything clear. The pool seems to extend to the east. The rock can 
be climbed upwards from here.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction up . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7099
*/
