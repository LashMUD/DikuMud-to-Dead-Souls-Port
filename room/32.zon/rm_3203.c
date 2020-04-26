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
#include <medium.h>

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("outdoors");
    SetAmbientLight(30);
    //SetTerrainType(T_SURFACE);
    //SetMedium(MEDIUM_SURFACE);
    AddProperty("boat", 1);
    SetShort("On the River");
    SetLong("  The levee is directly north of here. The river flows in an east west\n"+
        "direction.");
    SetItems( ([
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3049",
        "east" : "/domains/diku-alfa/room/32.zon/rm_3204",
        "west" : "/domains/diku-alfa/room/32.zon/rm_3202",
        ]) );
}

int CanReceive(mixed ob){
    ob = present("boat",this_player());
        if(!ob) {
            write("You need a boat to go there.");
        return 0;
        }
    return 1;
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: On the River, Of zone : 3. V-Number : 3203, R-number : 105
Sector type : Water NoSwim Special procedure : No
Room flags: NOBITS
Description:
   The levee is directly north of here.  The river flows in an east west
direction.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3049

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3204

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3202
*/
