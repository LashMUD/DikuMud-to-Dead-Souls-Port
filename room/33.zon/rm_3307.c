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

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Mapmaker's Entrance Hall");
    SetLong("  You are in a huge hall. A beautiful chandelier is hanging from the roof\n"+
        "and many closets are standing against the walls. Bearskin covers the floor\n"+
        "and looks like a nice place to rest..");
    SetItems( ([
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/33.zon/obj/3322_machine_mapmakercola" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3118",
        "west" : "/domains/diku-alfa/room/33.zon/rm_3308",
        ]) );
    SetDoor("east", "/domains/diku-alfa/room/doors/3118_3307");//requires key_3321
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Mapmaker's Entrance Hall, Of zone : 4. V-Number : 3307, R-number : 115
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are in a huge hall.  A beautiful chandelier is hanging from the roof
and many closets are standing against the walls.  Bearskin covers the floor
and looks like a nice place to rest.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
coke machine

------- Exits defined -------
Direction east . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3321
To room (V-Number): 3118

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3308
*/
