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
    SetAmbientLight(30);
    SetShort("The long tunnel");
    SetLong("   You are in a long east-west leading tunnel. The tunnel is quite\n"+
	"narrow at this point. You notice a small hole leading south.");
    SetItems( ([ 
        "east" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetInventory( ([
         "/domains/diku-alfa/room/41.zon/npc/4103_thief" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/41.zon/rm_4102",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4106",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4104",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The long tunnel, Of zone : 8. V-Number : 4103, R-number : 223
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a long east-west leading tunnel. The tunnel is quite
narrow at this point. You notice a small hole leading south.

Extra description keywords(s): None
------- Chars present -------
thief(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4102

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4106

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4104
*/
