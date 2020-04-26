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

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Entrance to the Grunting Boar Inn.");
    SetLong("  You are standing in the entrance hall of the Grunting Boar Inn. The hall\n"+
        "has been wisely decorated with simple but functional furniture. A small\n"+
        "staircase leads up to the reception and the bar is to the east.");
    SetExits( ([
        "east" : "/domains/diku-alfa/room/30.zon/rm_3007",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3005",
        "up" : "/domains/diku-alfa/room/30.zon/rm_3008",
        ]) );
    SetItems( ([
        "east" : "Surprise! You see the bar.",
        "west" : "You see the Temple Square.",
        "up" : "You see the room reception.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3061_janitor" : 1,
        ]) );

}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Entrance to the Grunting Boar Inn, Of zone : 1. V-Number : 3006, R-number : 12
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are standing in the entrance hall of the Grunting Boar Inn.  The hall
has been wisely decorated with simple but functional furniture.  A small
staircase leads up to the reception and the bar is to the east.
Extra description keywords(s): None
------- Chars present -------
janitor(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  Surprise! You see the bar.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3007

Direction west . Keyword : (null)
Description:
  You see the temple square.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3005

Direction up . Keyword : (null)
Description:
  You see the room reception.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3008
*/
