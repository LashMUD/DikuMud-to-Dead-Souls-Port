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
    SetShort("The muddy sewer");
    SetLong("You are standing in something that reminds you very much of porridge, this\n"+
        "has the advantage that it's not hot, it's rather cold actually. The pipe \n"+
        "bends to the north and east.");
    SetItems( ([ 
        "north" : "The muddy sewer pipe leads into a bend that goes east.",
        "east" : "The pipe leads into a bend that goes south. Interesting, there's mud on the\n"+
            "floor there.",
        "mud" : "It's dark as tar and looks like something out of a toilet, on top of THAT\n"+
            "the smell is absolutely OVERWHELMING.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7005",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7012",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The muddy sewer, Of zone : 14. V-Number : 7006, R-number : 398
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in something that reminds you very much of porridge, this
has the advantage that it's not hot, it's rather cold actually. The pipe 
bends to the north and east.
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The muddy sewer pipe leads into a bend that goes east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7005

Direction east . Keyword : (null)
Description:
  The pipe leads into a bend that goes south. Interesting, there's mud on the
floor there.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7012
*/
