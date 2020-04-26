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

    SetTerrainType(T_OUTDOORS);
    SetAmbientLight(30);
    SetShort("Park Entrance");
    SetLong("  You are standing just inside the small park of Midgaard. To the north is\n"+
        "the promenade and a small path leads south into the park. To your east is\n"+
        "the famous Park cafe.");
    SetItems( ([
        "north" : "You see the promenade",
        "east" : "You see the Park cafe.",
        "south" : "You see the park.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3102",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3106",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3108",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Park Entrance, Of zone : 2. V-Number : 3105, R-number : 63
Sector type : City Special procedure : No
Room flags: NO_MOB 
Description:
   You are standing just inside the small park of Midgaard.  To the north is
the promenade and a small path leads south into the park.  To your east is
the famous Park Cafe.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the promenade.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3102

Direction east . Keyword : (null)
Description:
  You see Park Cafe.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3106

Direction south . Keyword : (null)
Description:
  You see the park.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3108
*/
