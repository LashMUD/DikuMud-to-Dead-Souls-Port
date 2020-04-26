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
    SetShort("The sewer junction");
    SetLong("You are in a junction that leads north, west and south.");
    SetItems( ([ 
        "north" : "North. You see a bend.",
        "south" : "South. It looks like a pipe junction just like this one. Only that one\n"+
            "leads east and west.",
        "west" : "West. There's a junction with four pipelines in that direction.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7016",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7018",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7009",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sewer junction, Of zone : 14. V-Number : 7017, R-number : 409
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a junction that leads north, west and south.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  North. You see a bend.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7016

Direction south . Keyword : (null)
Description:
  South. It looks like a pipe junction just like this one. Only that one
leads east and west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7018

Direction west . Keyword : (null)
Description:
  West. There's a junction with four pipelines in that direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7009
*/
