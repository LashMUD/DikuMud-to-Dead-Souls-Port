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
    SetShort("The South end of the Grand Pipe");
    SetLong("You stand in water to your knees. A doorway leads west from here. The Pipe\n"+
        "stretches north.");
    SetItems( ([ 
        "north" : "You see a lot of pictures decorating the walls.",
        "west" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7052",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7047",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The South end of the Grand Pipe, Of zone : 14. V-Number : 7053, R-number : 437
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
You stand in water to your knees. A doorway leads west from here. The Pipe
stretches north.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see a lot of pictures decorating the walls.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7052

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7047
*/
