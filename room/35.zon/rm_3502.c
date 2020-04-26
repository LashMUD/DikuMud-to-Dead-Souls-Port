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
    SetShort("The Turning Point");
    SetLong(" This is where the Midgaard Road turns north and away from the city. To the\n"+
        "west, the road continues towards what looks like a fairly large city. The\n"+
        "mute sounds of city commotion reach your ears from a distance; stray dogs\n"+
        "barking, children crying, and street salesmen shouting. To the east, you can\n"+
        "see the stately oaks and poplars of the holy grove");
    SetItems( ([
        "east" : "You can see a narrow path leading in between the trees, into the grove.",
        ]) );  
    SetExits( ([
        "north" : "/domains/diku-alfa/room/35.zon/rm_3501",
        "east" : "/domains/diku-alfa/room/89.zon/rm_8904",
        "west" : "/domains/diku-alfa/room/35.zon/rm_3503",
        ]) );
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
Room name: The Turning Point, Of zone : 6. V-Number : 3502, R-number : 125
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
  This is where the Midgaard Road turns north and away from the city.  To the
west, the road continues towards what looks like a fairly large city.  The
mute sounds of city commotion reach your ears from a distance; stray dogs
barking, children crying, and street salesmen shouting.  To the east, you can
see the stately oaks and poplars of the holy grove

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 3501

Direction east . Keyword : (null)
Description:
  You can see a narrow path leading in between the trees, into the grove.

Exit flag: NOBITS 
Key no: 0
To room (V-Number): 8904

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 3503
*/
