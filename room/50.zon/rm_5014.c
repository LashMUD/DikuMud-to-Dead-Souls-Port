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
    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("Outside Ofcol");
    SetLong("   You are standing outside the village of Ofcol.\n"+
	"The village looks very small, but still a nice and safe place to stay.\n"+
	"You may enter the city to the north or journey towards the\n"+
	"T-intersection in the southern direction.");
    SetItems( ([ 
        "north" : "You notice a sign saying : Stranger we welcome you to the\n"+
	    "                           peacefull city of Ofcol.",
        "south" : "Here you see the road go towards the intersection.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/55.zon/rm_5550",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5013",
        ] ));
}

void init(){
   ::init();
}

int CanReceive(object ob) {
    if(ob && !ob->GetProperty("STAY_ZONE")){
        return 1;
    }
    else
        return 0;
}

/* Extra Information Original Diku Output 
Room name: Outside Ofcol, Of zone : 9. V-Number : 5014, R-number : 283
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing outside the village of Ofcol.
The village looks very small, but still a nice and safe place to stay.
You may enter the city to the north or journey towards the
T-intersection in the southern direction.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You notice a sign saying : Stranger we welcome you to the
                           peacefull city of Ofcol.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5550

Direction south . Keyword : (null)
Description:
  Here you see the road go towards the intersection.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5013
*/
