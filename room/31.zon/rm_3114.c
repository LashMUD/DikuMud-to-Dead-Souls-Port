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

    SetTerrainType(T_OUTDOORS);
    SetAmbientLight(30);
    //SetTerrainType(T_SURFACE);
    SetMedium(MEDIUM_SURFACE);
    SetShort("The Pond");
    SetLong("  You are swimming around in the pond, feeling rather stupid. You can get\n"+
        "back on the path from the eastern and western end of the pond.");
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/npc/3121_swan" : 1,
        "/domains/diku-alfa/room/31.zon/npc/3122_duckling" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3115",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3113",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Pond, Of zone : 2. V-Number : 3114, R-number : 72
Sector type : Water Swim Special procedure : No
Room flags: NOBITS
Description:
   You are swimming around in the pond, feeling rather stupid.  You can get
back on the path from the eastern and western end of the pond.

Extra description keywords(s): None
------- Chars present -------
duckling(MOB)
swan(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3115

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3113
*/
