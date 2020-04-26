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

    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("The crawlway.");
    SetLong("You are in a narrow crawlway. Here is very boring.");
    SetItems( ([ 
        "east" : "You see a four-way junction.",
        "west" : "You see the entrance to a lair.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/72.zon/rm_7210",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7208",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The crawlway., Of zone : 16. V-Number : 7209, R-number : 491
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a narrow crawlway. Here is very boring.
Extra description keywords(s): None
------- Chars present -------
wererat rat were(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see a four-way junction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7210

Direction west . Keyword : (null)
Description:
  You see the entrance to a lair.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7208
*/
