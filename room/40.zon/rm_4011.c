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
    SetShort("The tunnel");
    SetLong("   You squeeze your way through a small, narrow tunnel. The sharp-edged rocks\n"+
	"protruding from the walls threathen to scratch and cut you. \n"+
	"To the south you sense a freshness in the air which is rather unusual in these\n"+
	"damp, stuffy tunnels. To the north the tunnel continues.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        ] ));
    SetExits( ([
         "north" : "/domains/diku-alfa/room/40.zon/rm_4014",
         "south" : "/domains/diku-alfa/room/40.zon/rm_4010",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The tunnel, Of zone : 7. V-Number : 4011, R-number : 174
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You squeeze your way through a small, narrow tunnel. The sharp-edged rocks
protruding from the walls threathen to scratch and cut you. 
To the south you sense a freshness in the air which is rather unusual in these
damp, stuffy tunnels. To the north the tunnel continues.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4014

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4010
*/
