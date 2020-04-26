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
    SetShort("The muddy sewer junction");
    SetLong("The muddy sewer stretches into the dark to the south. It looks as if \n"+
        "no person has ever sat his foot here before. It's too muddy for that\n"+
        "anyway. The sewer leads north, south and east from here.");
    SetItems( ([ 
        "north" : "The muddy sewer stretches into the dark to the north.",
        "east" : "East. The muddy sewer leads into a bend that goes south.",
        "south" : "South. The muddy sewer ends in a mudhole that way.",
        "mud" : "It's dark as tar and looks like something out of a toilet, on top of THAT\n"+
            "the smell is absolutely OVERWHELMING.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7001",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7007",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7003",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The muddy sewer junction, Of zone : 14. V-Number : 7002, R-number : 394
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
The muddy sewer stretches into the dark to the south. It looks as if 
no person has ever sat his foot here before. It's too muddy for that
anyway. The sewer leads north, south and east from here.
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The muddy sewer stretches into the dark to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7001

Direction east . Keyword : (null)
Description:
  East. The muddy sewer leads into a bend that goes south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7007

Direction south . Keyword : (null)
Description:
  South. The muddy sewer ends in a mudhole that way.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7003
*/
