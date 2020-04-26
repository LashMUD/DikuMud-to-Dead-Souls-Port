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
    SetShort("The sewer line.");
    SetLong("You are in a narrow part of the sewer. Down the sewer continues and to the\n"+
        "north is the ledge.");
    SetItems( ([ 
        "north" : "You can see the southern part of the ledge.",
        "down" : "You look deeper down into the drain.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/71.zon/rm_7115",
        "down" : "/domains/diku-alfa/room/72.zon/rm_7221",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sewer line., Of zone : 15. V-Number : 7129, R-number : 478
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a narrow part of the sewer. Down the sewer continues and to the
north is the ledge.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can see the southern part of the ledge.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7115

Direction down . Keyword : (null)
Description:
  You look deeper down into the drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7221
*/
