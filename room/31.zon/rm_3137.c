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

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Waiting Room");
    SetLong("  You are standing in the waiting room at the town hall. Wooden chairs stand\n"+
        "along the walls and a long desk with a typewriter is placed in the middle of\n"+
        "the room.");
    SetItems( ([
        "east" : "It looks like some kind of office.",
        "west" : "The exit west leads to Emerald Avenue.",
        ({"chair", "chairs"}) : "Not the very least comfortable.",
            "desk" : "An extremely heavy desk. It is so large that it doesn't even need drawers.\n"+
            "Everything can be stored on its top.",
            "typewriter" : "It is an ancient Quifatronic T-1000 mk I. These machines are known for their\n"+
            "incredible durability, and for their even more incredible weight. They make\n"+
            "a Cray II look like a laptop.",
        ]) );
    SetInventory(([
        "/domains/diku-alfa/room/31.zon/npc/3142_secretary" : 1,
        ]));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3138",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3117",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Waiting Room, Of zone : 2. V-Number : 3137, R-number : 95
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are standing in the waiting room at the town hall.  Wooden chairs stand
along the walls and a long desk with a typewriter is placed in the middle of
the room.

Extra description keywords(s): 
typewriter
desk
chair chairs

------- Chars present -------
secretary(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  It looks like some kind of office.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3138

Direction west . Keyword : (null)
Description:
  The exit west leads to Emerald Avenue.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3117
*/
