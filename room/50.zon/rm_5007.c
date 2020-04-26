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
    SetShort("Path in foothills");
    SetLong("   You are walking on a path situated in the small foothills.\n"+
	"The winds are more than average here but it feels nice. You can follow\n"+
	"the path east or west.");
    SetItems( ([ 
        "east" : "The path continues in the foothills",
        "west" : "To the west the path takes a bend southwards.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5008",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5006",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Path in foothills, Of zone : 9. V-Number : 5007, R-number : 276
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are walking on a path situated in the small foothills.
The winds are more than average here but it feels nice. You can follow
the path east or west.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The path continues in the foothills
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5008

Direction west . Keyword : (null)
Description:
  To the west the path takes a bend southwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5006
*/
