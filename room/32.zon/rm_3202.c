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
    SetShort("On the River");
    SetLong("  North of here you see the dump. The river flows from east to west. The\n"+
        "riverbanks are too steep to climb.");
    SetItems( ([
        "west" : "You see the river flowing west into the Forest of Haon-Dor.",
        ({"wall", "walls"}) : "It is built from large grey rocks that have been fastened to each other with\n"+
            "some kind of mortar. Looks pretty solid."
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/32.zon/rm_3203",
        "west" : "/domains/diku-alfa/room/32.zon/rm_3201",
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
Room name: On the River, Of zone : 3. V-Number : 3202, R-number : 104
Sector type : Water NoSwim Special procedure : No
Room flags: NOBITS
Description:
   North of here you see the dump.  The river flows from east to west.  The
riverbanks are too steep to climb.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3203

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3201
*/
