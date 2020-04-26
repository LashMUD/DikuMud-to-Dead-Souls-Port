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
    SetShort("End of the path");
    SetLong("   At this point the path has had enough. With a terrified shudder it cowers\n"+
	"to the ground, only staying here because you're standing on it. With a slight\n"+
	"feeling of unease you look around noticing only a few bushes and a large sign\n"+
	"carved into the mountain.\n"+
	"You feel you can hear the cry of help from a thousand silent voices all coming\n"+
	"from an even darker hole in the mountain to the north marking the entrance to\n"+
	"a cave (or a grave :-).");
SetItems( ([ 
        "north" : "",
        "south" : "",
        "bushes" : "Small crippled bushes desperately trying to grow south.",
        "sign" : "The sign says:\n"+
	"***********************************************************************\n"+
	"*                                                                     *\n"+
	"* ******************************************************************* *\n"+
	"* *                                                                 * *\n"+
	"* *                    The Mines of Moravia                           * *\n"+
	"* *                                                                 * *\n"+
	"* *                  Enter at your own risk.                        * *\n"+
	"* *                 Bring your own tombstone.                       * *\n"+
	"* *                                                                 * *\n"+
	"* *   Welcome to the mines of Moravia.. At present there are only   * *\n"+
	"* *   4 levels. The plan is to build 20... If you ever get there  * *\n"+
	"* *                                                                 * *\n"+
	"* *     Are you below level 3 Don't enter..                         * *\n"+
	"* *     Are you below level 8 Don't enter alone..unless you're blue * *\n"+
	"* *                                                                 * *\n"+
	"* ******************************************************************* *\n"+
	"*                                                                     *\n"+
	"***********************************************************************",
        ] ));
SetExits( ([
         "north" : "/domains/diku-alfa/room/40.zon/rm_4010",
         "south" : "/domains/diku-alfa/room/40.zon/rm_4001",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: End of the path, Of zone : 7. V-Number : 4002, R-number : 172
Sector type : Hills Special procedure : No
Room flags: NO_MOB 
Description:
   At this point the path has had enough. With a terrified shudder it cowers
to the ground, only staying here because you're standing on it. with a slight
feeling of unease you look around noticing only a few bushes and a large sign
carved into the mountain.
You feel you can hear the cry of help from a thousand silent voices all coming
from an even darker hole in the mountain to the north marking the entrance to
a cave (or a grave :-).

Extra description keywords(s): 
sign
bushes

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4010

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4001
*/
