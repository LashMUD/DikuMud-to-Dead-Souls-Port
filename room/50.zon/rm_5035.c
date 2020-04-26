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

    SetTerrainType(T_ROAD | T_WOODS);
    SetAmbientLight(30);
    SetShort("The ancient path");
    SetLong("   The Path runs north and east from here.\n"+
        "You notice some well hidden markers, placed along the side of the\n"+
        "path.");
    SetItems( ([ 
        "north" : "You see the ancient path winding it's way north from here. Looks safe.",
        "east" : "Further ahead you see a bridge over a small creak.",
        "markers" : "The markers seems like normal stones, but the way they are\n"+
	"arranged makes you think there is something special about them.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5034",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5036",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The ancient path, Of zone : 9. V-Number : 5035, R-number : 302
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
   The Path runs north and east from here.
You notice some well hidden markers, placed along the side of the
path.

Extra description keywords(s): 
markers

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the ancient path winding it's way north from here. Looks safe.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5034

Direction east . Keyword : (null)
Description:
  Further ahead you see a bridge over a small creak.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5036
*/
