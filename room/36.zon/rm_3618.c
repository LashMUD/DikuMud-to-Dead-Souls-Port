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
    
    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("A Gravel Path on the Graveyard");
    SetLong(" You are on a gravel path winding its way between dark evergreen trees on\n"+
        "the graveyard. The path leads north and east. An old tomb is here.");
    SetItems( ([
        "north" : "The gravel path continues northwards.",
        "east" : "The gravel path continues eastwards towards a building of some sort.",
        ({"tomb stone", "tomb", "stone"}) :
            "It is a large rectangular slab of dark grey stone that has been placed face\n"+
            "up in the ground. The name has been erased by the ravages of time.",
        ]) );  
    SetExits( ([
        "north" : "/domains/diku-alfa/room/36.zon/rm_3616",
        "east" : "/domains/diku-alfa/room/36.zon/rm_3604",
        "down" : "/domains/diku-alfa/room/36.zon/rm_3619",                
        ]) );
    SetObviousExits("north, east");
    SetDoor("down", "/domains/diku-alfa/room/doors/3618_3619");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: A Gravel Path on the Graveyard, Of zone : 6. V-Number : 3618, R-number : 145
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
  You are on a gravel path winding its way between dark evergreen trees on
the graveyard.  The path leads north and east.  An old tomb is here.

Extra description keywords(s): 
tomb stone

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The gravel path continues northwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3616

Direction east . Keyword : (null)
Description:
  The gravel path continues eastwards towards a building of some sort.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3604

Direction down . Keyword : tomb stone
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 3619
*/
