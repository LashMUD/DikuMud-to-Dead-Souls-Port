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
    SetShort("The fissure under the ledge");
    SetLong("This is a small fissure in the solid rock. Under you lies the deep dark pool.\n"+
        "The water trickles quietly down from the ledge above you. The water smells \n"+
        "like the water in a sewer.");
    SetItems( ([ 
        "up" : "",
        "down" : "The water edge.",
        ] ));
    SetExits( ([
        "up" : "/domains/diku-alfa/room/70.zon/7070",
        "down" : "/domains/diku-alfa/room/71.zon/7199",
        ] ));
}

void init(){
   ::init();
}

/* NO_NPC's allowed in room*/
int CanReceive(object ob) {
    if(ob && !inherits(LIB_NPC, ob)){
    return 1;
    }
    else
    return 0;
}

/* Extra Information Original Diku Output 
Room name: The fissure under the ledge, Of zone : 14. V-Number : 7099, R-number : 454
Sector type : Mountains Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
This is a small fissure in the solid rock. Under you lies the deep dark pool.
The water trickles quietly down from the ledge above you. The water smells 
like the water in a sewer.
Extra description keywords(s): None

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7070

Direction down . Keyword : (null)
Description:
  The water edge.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7199
*/
