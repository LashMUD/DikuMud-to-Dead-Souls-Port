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
    SetShort("The round room");
    SetLong("As you enter the room it starts rotating - at first slowly, later faster\n"+
        "and faster - You get totally confused as to where up and down is, but you are\n"+
        "certain that the doorway is in the opposite direction of what it was when\n"+
        "you entered. It now leads east. There was only this one exit.");
    SetItems( ([ 
        "east" : "You can just make out a smaller room with a chair.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/70.zon/npc/7003_spider" :2,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/70.zon/rm_7050",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The round room, Of zone : 14. V-Number : 7037, R-number : 423
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
As you enter the room it starts rotating - at first slowly, later faster
and faster - You get totally confused as to where up and down is, but you are
certain that the doorway is in the opposite direction of what it was when
you entered. It now leads east. There was only this one exit.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You can just make out a smaller room with a chair.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7050
*/
