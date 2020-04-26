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
    SetShort("In the water");
    SetLong("   You are standing in the water, it continues west. To the\n"+
	"east you see a small cliff.");
    SetItems( ([ 
        "east" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4150_blue_bat" : 1,
        "/domains/diku-alfa/room/41.zon/npc/4153_white_bat" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/41.zon/rm_4172",
        "west" : "/domains/diku-alfa/room/41.zon/rm_4169",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: In the water, Of zone : 8. V-Number : 4170, R-number : 266
Sector type : Water Swim Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are standing in the water, it continues west. To the
east you see a small cliff.

Extra description keywords(s): None
------- Chars present -------
orc(MOB)
bat white(MOB)
bat blue(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4172

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4169
*/
