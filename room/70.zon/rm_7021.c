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
    SetShort("A quiet pipe junction");
    SetLong("This is the kind of place to rest, though the smell could be a LOT better\n"+
        "than this. The sewer goes east, north and west from here.");
    SetItems( ([ 
        "north" : "In that direction, you can't see anything. It's just too dark.",
        "east" : "There's an ordinary junction in the pipe system to the east",
        "west" : "West. There's an ordinary bend leading south into the sewer system in\n"+
            "that direction.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7011",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7029",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7016",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A quiet pipe junction, Of zone : 14. V-Number : 7021, R-number : 411
Sector type : City Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
This is the kind of place to rest, though the smell could be a LOT better
than this. The sewer goes east, north and west from here.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  In that direction, you can't see anything. It's just too dark.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7011

Direction east . Keyword : (null)
Description:
  There's an ordinary junction in the pipe system to the east
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7029

Direction west . Keyword : (null)
Description:
  West. There's an ordinary bend leading south into the sewer system in
that direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7016
*/
