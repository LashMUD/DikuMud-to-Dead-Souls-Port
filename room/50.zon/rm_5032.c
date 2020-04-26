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

    SetTerrainType(T_ROAD | T_WOODS);
    SetAmbientLight(30);
    SetShort("The ancient path");
    SetLong("   You are moving on an ancient path. The path is slightly covered with\n"+
        "leaves and twitches.\n"+
        "To the north you can see the T-crossing and the path continues south.");
    SetItems( ([ 
        "north" : "As you look to the north you see a T-intersection.",
        "south" : "The ancient path continues through the plains.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5012",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5033",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The ancient path, Of zone : 9. V-Number : 5032, R-number : 299
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
   You are moving on an ancient path. The path is slightly covered with
leaves and twitches.
To the north you can see the T-crossing and the path continues south.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  As you look to the north you see a T-intersection.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5012

Direction south . Keyword : (null)
Description:
  The ancient path continues through the plains.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5033
*/
