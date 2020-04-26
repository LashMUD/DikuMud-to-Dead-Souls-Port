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

    SetTerrainType(T_WOODS);
    SetAmbientLight(0);
    SetShort("The Den of the Queen Spider");
    SetLong("You are inside a cave-like structure that seems to be made entirely from\n"+
        "countless layers of spider web.  Temperature and humidity is very high making\n"+
        "it hard to breathe the foul air that lingers here.  The walls are covered with\n"+
        "open cocoons.");
    SetItems( ([ 
        "east" : "Compared to this place the east exit looks inviting.",
        ({"web", "wall", "walls"}) : "The sticky walls are covered with open cocoons.",
        ({"cocoon", "cocoons"}) : "The cocoons are burst open as if something inside really wanted to get out.\n"+
            "They are at the size of a human head.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/61.zon/npc/6114_spider_queen" : 1,
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/61.zon/rm_6133",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Den of the Queen Spider, Of zone : 12. V-Number : 6134, R-number : 379
Sector type : Water Swim Special procedure : No
Room flags: DARK INDOORS 
Description:
You are inside a cave-like structure that seems to be made entirely from
countless layers of spider web.  Temperature and humidity is very high making
it hard to breathe the foul air that lingers here.  The walls are covered with
open cocoons.
Extra description keywords(s): 
cocoon cocoons
web wall walls

------- Chars present -------
queen spider(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  Compared to this place the east exit looks inviting.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6133
*/
