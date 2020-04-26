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
    SetShort("The damp sewer");
    SetLong("You are in a sewer drain with a funny damp substance on the floor, in the \n"+
        "substance you see a lot of decay. You see some odd scrates on the wall, as\n"+
        "from a gigantic rat. Both to the east and west the pipe seems to run down.");
    SetItems( ([ 
        "east" : "You see a sewer.",
        "west" : "You see a sewer.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/obj/7208_stick_light" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/72.zon/rm_7229",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7231",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The damp sewer, Of zone : 16. V-Number : 7230, R-number : 509
Sector type : Forest Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You are in a sewer drain with a funny damp substance on the floor, in the 
substance you see a lot of decay. You see some odd scrates on the wall, as
from a gigantic rat. Both to the east and west the pipe seems to run down.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
stick small light

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see a sewer.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7229

Direction west . Keyword : (null)
Description:
  You see a sewer.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7231
*/
