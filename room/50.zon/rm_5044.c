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
    SetShort("The Hall of G'harne");
    SetLong("   You stand in the hall of G'harne. The walls are dressed with strange\n"+
        "carving, symbolising human sacrifice and people worshipping giant worms.\n"+
        "Disgusting slime and gore are also very dominant in your view of this\n"+
        "room.");
    SetItems( ([ 
        "east" : "It looks like a good idear just to run in this direction....",
        ({"slime", "gore"}) : "You puke.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/50.zon/npc/5005_worm" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5043",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Hall of G'harne, Of zone : 9. V-Number : 5044, R-number : 311
Sector type : Inside Special procedure : No
Room flags: DARK INDOORS TUNNEL 
Description:
   You stand in the hall of G'harne. The walls are dressed with strange
carving, symbolising human sacrifice and people worshipping giant worms.
Disgusting slime and gore are also very dominant in your view of this
room.

Extra description keywords(s): 
slime gore

------- Chars present -------
worm Shudde-M'ell(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  It looks like a good idear just to run in this direction....
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5043
*/
