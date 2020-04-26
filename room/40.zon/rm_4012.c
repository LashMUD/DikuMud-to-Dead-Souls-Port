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
    SetLong("   You are in a part of the tunnel that looks uncannily like the rest except\n"+
	"that it goes in a east-north direction. To the north the tunnel widens into\n"+
	"a cave.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        ] ));
SetExits( ([
         "north" : "/domains/diku-alfa/room/40.zon/rm_4016",
         "east" : "/domains/diku-alfa/room/40.zon/rm_4013",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The tunnel, Of zone : 7. V-Number : 4012, R-number : 175
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a part of the tunnel that looks uncannily like the rest except
that it goes in a east-north direction. To the north the tunnel widens into
a cave.

Extra description keywords(s): None
------- Chars present -------
orc(MOB)
kobold(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4016

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4013
*/
