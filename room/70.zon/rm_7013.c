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
    SetShort("A MUDDY intersection");
    SetLong("You wouldn't want to know the true feeling of standing in this mud up to \n"+
        "your hips. >BWAADR<. All that fills your mind right now is the dream of \n"+
        "a hot bath. This is NOT very clean mud you know, remember you're in the\n"+
        "sewer! The pipes leads north, south and east.");
    SetItems( ([ 
        "north" : "North. Sludge and sediment fills this corridor of the sewer that leads\n"+
            "into a bend going west.",
        "east" : "East. You can see absolutely nothing of interest in that direction (Maybe\n"+
            "that's why it's so damn interesting.??) There's no mud in that direction\n"+
            "either, GREAT!",
        "south" : "South. All you can see is more mud! Although the pipe goes into a bend\n"+
            "leading west.",
        "mud" : "It's dark as tar and looks like something out of a toilet, on top of THAT\n"+
            "the smell is absolutely OVERWHELMING.",
        "sediment" : "It's NOT the kind of matter that would concern you too much, normally, but\n"+
            "as you are in the middle of it, it just might become your main concern.\n"+
            "REAL YUCKY!",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7012",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7026",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7014",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A MUDDY intersection, Of zone : 14. V-Number : 7013, R-number : 405
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You wouldn't want to know the true feeling of standing in this mud up to 
your hips. >BWAADR<. All that fills your mind right now is the dream of 
a hot bath. This is NOT very clean mud you know, remember you're in the
sewer! The pipes leads north, south and east.
Extra description keywords(s): 
sediment
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  North. Sludge and sediment fills this corridor of the sewer that leads
into a bend going west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7012

Direction east . Keyword : (null)
Description:
  East. You can see absolutely nothing of interest in that direction (Maybe
that's why it's so damn interesting.??) There's no mud in that direction
either, GREAT!
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7026

Direction south . Keyword : (null)
Description:
  South. All you can see is more mud! Although the pipe goes into a bend
leading west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7014
*/
