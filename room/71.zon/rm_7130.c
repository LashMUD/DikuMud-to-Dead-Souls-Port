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

    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("The sewer pipe.");
    SetLong("You are in an odd sewer pipe You see some odd scrates on the pipe wall, as\n"+
        "from a gigantic rat. You can see some slimy water gently running down into\n"+
        "a sewer drain, and north the drain continues.");
    SetItems( ([ 
        ] ));
    SetExits( ([
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sewer pipe., Of zone : 15. V-Number : 7130, R-number : 479
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in an odd sewer pipe You see some odd scrates on the pipe wall, as
from a gigantic rat. You can see some slimy water gently running down into
a sewer drain, and north the drain continues.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
*/
