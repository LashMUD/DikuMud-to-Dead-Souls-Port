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

    SetTerrainType(T_ROUGH);
    SetAmbientLight(30);
    SetShort("The pool in the foothills");
    SetLong("   You are standing by a pool in the small foothills, It is of crystal\n"+
        "clear wather and icily cold for some reason. A steep slope rises up\n"+
        "into the foothills to the north. Behind them ... the mountains.");
    SetItems( ([ 
        "north" : "It looks like quite a climb...",
        "east" : "To the east you notice a small path in the foothills.",
        "south" : "To the south a path winds its way south into the plains.",
        "west" : "The foothills extend far to the west.",
        "pool" : "   The pool is crytal clear, but as you look into it you notice that\n"+
	"you can't see the bottom of it ... it must be pretty deep.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5025",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5009",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5006",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5022",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The pool in the foothills, Of zone : 9. V-Number : 5026, R-number : 295
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
   You are standing by a pool in the small foothills, It is of crystal
clear wather and icily cold for some reason. A steep slope rises up
into the foothills to the north. Behind them ... the mountains.

Extra description keywords(s): 
pool

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  It looks like quite a climb...
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5025

Direction east . Keyword : (null)
Description:
  To the east you notice a small path in the foothills.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5009

Direction south . Keyword : (null)
Description:
  To the south a path winds its way south into the plains.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5006

Direction west . Keyword : (null)
Description:
  The foothills extend far to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5022
*/
