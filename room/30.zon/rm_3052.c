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
    SetShort("Outside the West Gate of Midgaard");
    SetLong("  You are by two small towers that have been built into the city wall and\n"+
        "connected with a footbridge across the heavy wooden gate. To the west you\n"+
        "can see the edge of a big forest. A small dusty trail leads north along the\n"+
        "wall.");
    SetItems( ([
        "north" : "The trail continues around the City of Midgaard.",
        "east" : "The city gate is to the east.",
        "west" : "The forest edge is to the west.",
        ({ "wall", "walls" }) : "It is built from large grey rocks that have been fastened to each other with\n"+
                                "some kind of mortar.  It is far too high to climb.",
        ({ "bridge", "footbridge" }) : "It is too high up to reach but it looks as if one easily could walk across it\n"+
                                       "from one tower to the other.",
        ({ "tower", "towers" }) : "Both of the towers are built from large grey rocks that have been fastened to\n"+
                                  "each other with some kind of mortar, just like the city wall.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/39.zon/rm_3900",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3040",
        "west" : "/domains/diku-alfa/room/60.zon/rm_6000",
        ]) );
    SetDoor("east", "/domains/diku-alfa/room/doors/3040_3052");
}

void init(){
    ::init();
}

int CanReceive(object ob) {
    if(ob && !ob->GetProperty("STAY_ZONE")){
        return 1;
    }
    else
        return 0;
}

/* Extra Information Original Diku Output 
Room name: Outside the West Gate of Midgaard, Of zone : 1. V-Number : 3052, R-number : 54
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are by two small towers that have been built into the city wall and
connected with a footbridge across the heavy wooden gate.  To the west you
can see the edge of a big forest. A small dusty trail leads noth along the
wall.

Extra description keywords(s): 
wall
tower towers
gate
bridge footbridge

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The trail continues around the City of Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3900

Direction east . Keyword : gate
Description:
  The city gate is to the east.
Exit flag: IS-DOOR  
Key no: 3133
To room (V-Number): 3040

Direction west . Keyword : (null)
Description:
  The forest edge is to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6000
*/
