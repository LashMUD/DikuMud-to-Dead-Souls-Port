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
    SetShort("Inside the Chapel");
    SetLong(" You are in a small, dark chapel. The dark brown glass in the tiny windows\n"+
        "do not let much light through. A few rows of worn wooden benches stand here.");
    SetItems( ([
        "north" : "The chapel door is made of dark wood.",
        ({"glass", "windows", "glass windows"}) : "The windows must be meant to be dark. At least they are completely clean.",
        ({"benches", "rows"}) : "The benches are not of the comfortable kind.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/36.zon/obj/c_bench" : 1,
        "/domains/diku-alfa/room/36.zon/obj/3600_candlestick" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/36.zon/rm_3604",
        ]) );
    SetDoor("north", "/domains/diku-alfa/room/doors/3604_3605");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Inside the Chapel, Of zone : 6. V-Number : 3605, R-number : 132
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
   You are in a small, dark chapel.  The dark brown glass in the tiny windows
do not let much light through.  A few rows of worn wooden benches stand here.

Extra description keywords(s): 
benches rows
glass windows

------- Chars present -------

--------- Contents ---------
candlestick

------- Exits defined -------
Direction north . Keyword : door
Description:
  The chapel door is made of dark wood.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 3604
*/
