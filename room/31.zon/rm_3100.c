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
    SetShort("Northwest end of Concourse");
    SetLong("  You are at the concourse, the city wall is just west. A small promenade\n"+
        "goes east, and the bridge is just north of here. The concourse continues\n"+
        "south along the city wall.");
    SetItems( ([
        "north" : "You see the Bridge.",
        "east" : "You see the promenade.",
        "south" : "The promenade continues far south.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3051",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3101",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3127",
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
Room name: Northwest end of Concourse, Of zone : 2. V-Number : 3100, R-number : 58
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are at the concourse, the city wall is just west.  A small promenade
goes east, and the bridge is just north of here.  The concourse continues
south along the city wall.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the Bridge.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3051

Direction east . Keyword : (null)
Description:
  You see the promenade.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3101

Direction south . Keyword : (null)
Description:
  The promenade continues far south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3127
*/
