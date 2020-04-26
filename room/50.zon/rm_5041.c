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
    SetShort("Dead end of tunnel");
    SetLong("   The tunnel comes to an abrupt end here. It simply looks like it\n"+
        "hasn't been excavated further.\n"+
        "North of here the tunnel makes a turn east.");
    SetItems( ([ 
        "north" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5040",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Dead end of tunnel, Of zone : 9. V-Number : 5041, R-number : 308
Sector type : Inside Special procedure : No
Room flags: DARK INDOORS TUNNEL 
Description:
   The tunnel comes to an abrupt end here. It simply looks like it
hasn't been excavated further.
North of here the tunnel makes a turn east.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5040
*/
