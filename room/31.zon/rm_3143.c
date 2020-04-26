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
    SetShort("The Jail");
    SetLong("  You are in a dark and humid jail. The dark stone walls are hard and cold\n"+
        "to the touch. A heavy steel door is to the north.");
    SetItems( ([
        ({ "wall", "walls" }) : "The walls are marked with lots of scratches. Some of them spell sentences\n"+
        "like \"JAIL IS BETTER THAN SQL\" and \"INGRES STRIKES AGAIN.\"",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3142",
        ]) );
    SetDoor("north", "/domains/diku-alfa/room/doors/3142_3143");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Jail, Of zone : 2. V-Number : 3143, R-number : 101
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are in a dark and humid jail.  The dark stone walls are hard and cold
to the touch.  A heavy steel door is to the north.

Extra description keywords(s): 
wall walls

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : door
Description:
  You see the heavy steel door.
Exit flag: IS-DOOR CLOSED LOCKED  
Key no: 3137
To room (V-Number): 3142
*/
