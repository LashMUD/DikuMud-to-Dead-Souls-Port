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
    SetShort("The three way junction");
    SetLong("You are standing in a junction of pipes that lead west, east and south.");
    SetItems( ([ 
        "east" : "East. You can make out a dimly lit Guard Room.",
        "south" : "To the south you can see what looks like a store room.",
        "west" : "West. You see another junction similar to this one leading north and south.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/70.zon/rm_7045",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7039",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7025",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The three way junction, Of zone : 14. V-Number : 7038, R-number : 424
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in a junction of pipes that lead west, east and south.
Extra description keywords(s): None
------- Chars present -------
spider(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  East. You can make out a dimly lit Guard Room.
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7045

Direction south . Keyword : (null)
Description:
  To the south you can see what looks like a store room.
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7039

Direction west . Keyword : (null)
Description:
  West. You see another junction similar to this one leading north and south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7025
*/
