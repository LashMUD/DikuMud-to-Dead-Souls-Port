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
    SetShort("The secret tunnel");
    SetLong("   You are in a secret tunnel that leads west, you feel evilness\n"+
	"approaching you as you continue west.");
    SetItems( ([ 
        "west" : "",
        ] ));
    SetExits( ([
        "west" : "/domains/diku-alfa/room/41.zon/rm_4122",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The secret tunnel, Of zone : 8. V-Number : 4121, R-number : 241
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a secret tunnel that leads west, you feel evilness
approaching you as you continue west.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4122
*/
