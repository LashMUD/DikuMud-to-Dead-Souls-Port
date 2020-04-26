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
    SetShort("The Shaft");
    SetLong("You are standing by the edge of a deep, dark shaft leading down. A single\n"+
        "ladder is your tool to work your way down if you so wish. The sewer pipe\n"+
        "leads south from here.");
    SetItems( ([ 
        "south" : "To the south you can see the pipe leading further south into darkness.",
        "down" : "Down and utter darkness. There's absolutely nothing to be seen in that \n"+
            "direction.",
        "ladder" : "Firmly set into the wall of the shaft it's impossible to even rock, is your\n"+
            "estimate.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/70.zon/npc/7001_bat" :1,
        ]) );
 SetExits( ([
        "south" : "/domains/diku-alfa/room/70.zon/rm_7043",
        "down" : "/domains/diku-alfa/room/71.zon/rm_7123",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Shaft, Of zone : 14. V-Number : 7041, R-number : 426
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing by the edge of a deep, dark shaft leading down. A single
ladder is your tool to work your way down if you so wish. The sewer pipe
leads south from here.
Extra description keywords(s): 
ladder

------- Chars present -------
bat(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  To the south you can see the pipe leading further south into darkness.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7043

Direction down . Keyword : (null)
Description:
  Down and utter darkness. There's absolutely nothing to be seen in that 
direction.

Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7123
*/
