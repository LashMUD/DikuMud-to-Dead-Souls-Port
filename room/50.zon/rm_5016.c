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
    SetShort("Grassy plains");
    SetLong("   You walk in the grassy plains among the herbs which grow here. The wind is\n"+
	"strong and rough. Far to the north you can see the foothills and further on\n"+
	"mountainpeaks are visible.");
    SetItems( ([ 
        "north" : "The plains extend far to the north.",
        "east" : "When you look to the east you notice at small path.",
        "south" : "To the south you can see the city of Midgaard.",
        "west" : "The plains is gradually replaced with light forrest in this direction.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/50.zon/obj/5004_wildflowers" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5018",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5000",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Grassy plains, Of zone : 9. V-Number : 5016, R-number : 285
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
   You walk in the grassy plains among the herbs which grow here. The wind is
strong and rough. Far to the north you can see the foothills and further on
mountainpeaks are visible.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
wild flowers

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The plains extend far to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5018

Direction east . Keyword : (null)
Description:
  When you look to the east you notice at small path.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5000

Direction south . Keyword : (null)
Description:
  To the south you can see the city of Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction west . Keyword : (null)
Description:
  The plains is gradually replaced with light forrest in this direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
