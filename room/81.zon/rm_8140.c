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

    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(0);
    SetShort("The deep cave");
    SetLong("   You are standing knee-deep in cold water, flowing into this cave \n"+
        "from some unknown direction, but obviously leaving through a \n"+
        "low-ceilinged tunnel to the south. To the west a tunnel slopes up \n"+
        "out of the water.");
    SetItems( ([ 
        "east" : "At the far end of the tunnel, you seem to be able to make out a \n"+
            "faint light.",
        "tunnel" : "The tunnel south is barred by a strong grille, on which a sign is \n"+
            "fixed securely.",
        "water" : "It is very cold, you can feel your feet growing numb.",
        ({"sign", "text", "letters"}) : "On the sign is written in atrocious purple letters:\n\n"+
            "                ====================================\n"+
            "                           N O   E N T R Y\n\n"+
            "                      ACCESS TEMPORARILY CLOSED\n"+
            "                         SECTOR UNDER REPAIR\n\n"+
            "                                  / MATRIX CONTROL\n"+
            "                ====================================\n\n"+
            "It is apparently written using spray-paint and a letter template.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/81.zon/rm_8124",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The deep cave, Of zone : 21. V-Number : 8140, R-number : 636
Sector type : Inside Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are standing knee-deep in cold water, flowing into this cave 
from some unknown direction, but obviously leaving through a 
low-ceilinged tunnel to the south. To the west a tunnel slopes up 
out of the water.
Extra description keywords(s): 
sign text letters
water
tunnel

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  At the far end of the tunnel, you seem to be able to make out a 
faint light.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8124
*/
