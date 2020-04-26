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
    SetShort("The hills");
    SetLong("   You are surrounded by dark and sinister hills. Although they seemed fairly\n"+
	"small from a distance you now get the feeling that they're closing in on you,\n"+
	"towering over you, overwhelming you...\n"+
	"The small path seems to have second thoughts about these hills because it\n"+
	"starts winding unnecessarily, turning several times around itself.\n"+
	"To the south the hills have a lighter hue of dark. To the north however, the\n"+
	"hills have become nightblack holes in the distant mountains.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        ] ));
    SetExits( ([
         "north" : "/domains/diku-alfa/room/40.zon/rm_4002",
         "south" : "/domains/diku-alfa/room/40.zon/rm_4000",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The hills, Of zone : 7. V-Number : 4001, R-number : 171
Sector type : Hills Special procedure : No
Room flags: NO_MOB 
Description:
   You are surrounded by dark and sinister hills. Although they seemed fairly
small from a distance you now get the feeling that they're closing in on you,
towering over you, overwhelming you...
The small path seems to have second thoughts about these hills because it
starts winding unnecessarily, turning several times around itself.
To the south the hills have a lighter hue of dark. To the north however, the
hills have become nightblack holes in the distant mountains.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4002

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4000
*/
