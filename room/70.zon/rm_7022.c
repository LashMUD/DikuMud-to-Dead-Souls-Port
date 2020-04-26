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
    SetShort("The odd room with smooth walls");
    SetLong("As you enter you hear a loud click from one of the walls ... and you fall\n"+
        "and fall and fall ...\n"+
        ".\n"+
        ".\n"+
        ".\n"+
        ".\n"+
        " ... And come to an abrupt end. THIS is strange indeed. There's an arched\n"+
        "entryway leading down.");
    SetItems( ([ 
        "down" : "Down. It's utterly dark that way, though you can make out an intersection\n"+
        "of sewer pipes leading west, north and east.",
        ] ));
    SetExits( ([
        "down" : "/domains/diku-alfa/room/71.zon/rm_7112",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The odd room with smooth walls, Of zone : 14. V-Number : 7022, R-number : 412
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
As you enter you hear a loud click from one of the walls ... and you fall
and fall and fall ...
.
.
.
.
 ... And come to an abrupt end. THIS is strange indeed. There's an arched
entryway leading down.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction down . Keyword : entryway
Description:
  Down. It's utterly dark that way, though you can make out an intersection
of sewer pipes leading west, north and east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7112
*/
