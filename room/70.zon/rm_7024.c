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
    SetShort("The sewer");
    SetLong("You are standing in mud up to your ankles. This is an intersection with \n"+
        "sewer pipes leading east, south and west.");
    SetItems( ([ 
        "east" : "To the east there's a peculiar looking round room.",
        "south" : "To the south there's another intersection with pipes going south and east.",
        "west" : "To the west there's another intersection like this one, with sewer pipes\n"+
            "leading south and west.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/70.zon/rm_7037",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7025",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7011",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sewer, Of zone : 14. V-Number : 7024, R-number : 413
Sector type : City Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You are standing in mud up to your ankles. This is an intersection with 
sewer pipes leading east, south and west.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  To the east there's a peculiar looking round room.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7037

Direction south . Keyword : (null)
Description:
  To the south there's another intersection with pipes going south and east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7025

Direction west . Keyword : (null)
Description:
  To the west there's another intersection like this one, with sewer pipes
leading south and west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7011
*/
