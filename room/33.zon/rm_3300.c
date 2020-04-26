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
    SetShort("Papi's Cosy Cottage");
    SetLong("  You are inside Papi's living room, a light room at around three by four\n"+
        "meters in size. The nicely carved oaken front door is set in the middle of\n"+
        "the western wall, just between two windows. A small fire crackels in the\n"+ 
        "fireplace which is set against the northern wall.");
    SetExits( ([
        "west" : "/domains/diku-alfa/room/31.zon/rm_3118",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/33.zon/npc/3090_cat_Papis" : 1,
        "/domains/diku-alfa/room/33.zon/meals/3100_tea" : 1,
        ]) );
    SetDoor("west", "/domains/diku-alfa/room/doors/3118_3300");//requires key "3300"
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Papi's Cosy Cottage, Of zone : 4. V-Number : 3300, R-number : 108
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are inside Papi's living room, a light room at around three by four
meters in size.  The nicely carved oaken front door is set in the middle of
the western wall, just between two windows.  A small fire crackels in the
fireplace which is set against the northern wall.

Extra description keywords(s): None
------- Chars present -------
cat(MOB)

--------- Contents ---------
tea cup

------- Exits defined -------
Direction west . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3300
To room (V-Number): 3118
*/
