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
    SetShort("The sewer drain.");
    SetLong("You are in a sewer drain, there is nothing special inhere, exept for a \n"+
        "loud echo.");
    SetItems( ([ 
        "east" : "You can see another sewer drain.",
        "west" : "You can make out a sewer drain to the west.",
        "up" : "You can see a sewer line.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7203_wererat" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/72.zon/rm_7222",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7220",
        "up" : "/domains/diku-alfa/room/71.zon/rm_7129",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sewer drain., Of zone : 16. V-Number : 7221, R-number : 503
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a sewer drain, there is nothing special inhere, exept for a 
loud echo.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You can see another sewer drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7222

Direction west . Keyword : (null)
Description:
  You can make out a sewer drain to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7220

Direction up . Keyword : (null)
Description:
  You can see a sewer line.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7129
*/
