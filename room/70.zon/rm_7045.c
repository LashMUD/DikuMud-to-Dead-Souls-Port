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
    SetAmbientLight(30);
    SetShort("The Sewer Room");
    SetLong("You are standing in a large room with chairs set in the walls. You have the\n"+
        "feeling of being watched. To the south there's an entry to a larger room.\n"+
        "The room is lit by five torches, also set in the walls. To the west there\n"+
        "is a doorway leading out to the sewers.");
    SetItems( ([ 
        "south" : "You can see an even larger room than this one, filled with light.",
        "west" : "To the west you can see the sewers.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/70.zon/rm_7046",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7038",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Sewer Room, Of zone : 14. V-Number : 7045, R-number : 429
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
You are standing in a large room with chairs set in the walls. You have the
feeling of being watched. To the south there's an entry to a larger room.
The room is lit by five torches, also set in the walls. To the west there
is a doorway leading out to the sewers.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You can see an even larger room than this one, filled with light.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7046

Direction west . Keyword : (null)
Description:
  To the west you can see the sewers.
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7038
*/
