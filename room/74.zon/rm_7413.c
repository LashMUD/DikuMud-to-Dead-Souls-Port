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
    SetAmbientLight(30);
    SetShort("The spongy room");
    SetLong("You definately do NOT like this area. It is very dank, and most\n"+
        "of the places it is wet.");
    SetItems( ([ 
        "east" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7412",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7445",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The spongy room, Of zone : 17. V-Number : 7413, R-number : 537
Sector type : Forest Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
You definatly NOT like this area. It is very dank, and most
of the places it is wet.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7412

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7445
*/
