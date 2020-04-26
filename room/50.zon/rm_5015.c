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

    SetAmbientLight(30);
    SetShort("Gallow hill");
    SetLong("   You walk in the grassy plains. On this litlle hill you can see \n"+
	"two gallows, with rotting human tissue hanging from the robe.\n"+
	"There is a sign here.");
    SetItems( ([ 
        "north" : "The plains extend far to the north.",
        "east" : "To the east you can see a small path in the plains.",
        "south" : "To the south you can see a small path in the plains.",
        "west" : "The plains extend far to the west.",
        "sign" : "The sign says:\n\n"+
        "  Loyal citizens of Midgaard. These are the earthly remains of the\n"+
        "  two herretics 'Dim' and 'Gamma' of this world. Having forged them-\n"+
        "  selves to immortality, they called upon themselves the anger of the\n"+
        "  implementators. Let this be a lesson too all ..... \n\n"+
        "                                    -- the Powers that Be.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5020",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5003",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5000",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5018",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Gallow hill, Of zone : 9. V-Number : 5015, R-number : 284
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
   You walk in the grassy plains. On this litlle hill you can see 
two gallows, with rotting human tissue hanging from the robe.
There is a sign here.
Extra description keywords(s): 
sign

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The plains extend far to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5020

Direction east . Keyword : (null)
Description:
  To the east you can see a small path in the plains.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5003

Direction south . Keyword : (null)
Description:
  To the south you can see a small path in the plains.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5000

Direction west . Keyword : (null)
Description:
  The plains extend far to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5018
*/
