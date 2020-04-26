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
	"strong and rough. To the north you can see the foothills and just behind\n"+
	"mountainpeaks are visible.");
    SetItems( ([ 
        "north" : "To the north, the plains extend into small foothills, behind a small hill\n"+
	"you notice something....",
        "east" : "The plains extend far to the east.",
        "south" : "The plains extend far to the south.",
        "west" : "The plains is gradually replaced with light forrest in this direction.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/50.zon/meals/5001_gyvel" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5030",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5020",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5018",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Grassy plains, Of zone : 9. V-Number : 5019, R-number : 288
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
   You walk in the grassy plains among the herbs which grow here. The wind is
strong and rough. To the north you can see the foothills and just behind
mountainpeaks are visible.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
herbs herb gyvel

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north, the plains extend into small foothills, behind a small hill
you notice something....
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5030

Direction east . Keyword : (null)
Description:
  The plains extend far to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5020

Direction south . Keyword : (null)
Description:
  The plains extend far to the south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5018

Direction west . Keyword : (null)
Description:
  The plains is gradually replaced with light forrest in this direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
