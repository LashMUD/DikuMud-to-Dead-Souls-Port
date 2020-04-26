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
    SetShort("End of Elm Street");
    SetLong("  You are at the end of Elm Street. A white bungalow lies to the east.\n"+
        "An old elm tree grows here.");
    SetItems( ([
        ({"elm", "tree", "elm tree"}) : "The fresh young leaves of the elm tree wave gently in the wind.",
            "bungalow" : "A beautiful bungalow, made of white marble. It's not very large, but it\n"+
            "looks like a nice place to live in. As your eyes linger on the house, you\n"+
            "see a faint glow coming from the door.",
        "door" : "The door looks sturdy enough to keep everyone but a tree out. When you look\n"+
            "closer you see the name of the owner of the house in blueglowing letters. It\n"+
            "says \"Manxam\". Underneath it, someone has scribbled \"and Fzoul\".",
      ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/33.zon/rm_3301",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3123",
      ]) );
    SetDoor("east", "/domains/diku-alfa/room/doors/3124_3301");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: End of Elm Street, Of zone : 2. V-Number : 3124, R-number : 82
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are at the end of Elm Street.  A white bungalow lies to the east.
An old elm tree grows here.

Extra description keywords(s): 
door
bungalow
elm tree

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3302
To room (V-Number): 3301

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3123
*/
