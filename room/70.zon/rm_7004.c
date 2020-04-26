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

    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(0);
    SetShort("The Dark Pit");
    SetLong("You are standing by the edge of a dark pit that leads down into even\n"+
        "deeper darkness. >BWWAAADDRR< - The smell from down there is unbearable.\n"+
        "The sewer stretches into the darkness to the east.");
    SetItems( ([ 
        "east" : "East. The sewer leads into the sewer junction.",
        "down" : "The Dark Pit leads down an down and down ... well you can't see the \n"+
	"bottom anyway. There are bars that function as a ladder on the side.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/70.zon/npc/7001_bat" :2,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/70.zon/rm_7009",
        "down" : "/domains/diku-alfa/room/71.zon/rm_7102",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Dark Pit, Of zone : 14. V-Number : 7004, R-number : 396
Sector type : Inside Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing by the edge of a dark pit that leads down into even
deeper darkness. >BWWAAADDRR< - The smell from down there is unbearable.
The sewer stretches into the darkness to the east.
Extra description keywords(s): None
------- Chars present -------
bat(MOB)
bat(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  East. The sewer leads into the sewer junction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7009

Direction down . Keyword : (null)
Description:
  The Dark Pit leads down an down and down ... well you can't see the 
bottom anyway. There are bars that function as a ladder on the side.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7102
*/
