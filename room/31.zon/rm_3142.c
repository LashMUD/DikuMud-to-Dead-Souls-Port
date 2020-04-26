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
    SetShort("Captain's Office");
    SetLong("  You are in the Office of the Captain of the Guard. The Midgaard Coat of\n"+
        "Arms is hanging on the north wall and a heavy steel door is to the south.");
    SetItems( ([
        ({ "arms", "coat of arms", "coat" }) : 
            "Although a bit dusty the Coat of Arms is an excellent piece of work.",
            "east" : "You see the Cityguard Head Quarters.",
            "south" : "You see the heavy steel door.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/obj/3130_desk" : 1,
        "/domains/diku-alfa/room/31.zon/obj/dummy_drawer" : 1,
        "/domains/diku-alfa/room/31.zon/obj/3131_safe" : 1,
        "/domains/diku-alfa/room/31.zon/npc/3140_capguard" : 1,
        "/domains/diku-alfa/room/31.zon/npc/3141_cityguard" : 4,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3110",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3143",
        ]) );
    SetDoor("east", "/domains/diku-alfa/room/doors/3110_3142");
    SetDoor("south", "/domains/diku-alfa/room/doors/3142_3143");

}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Captain's Office, Of zone : 2. V-Number : 3142, R-number : 100
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are in the Office of the Captain of the Guard.  The Midgaard Coat of
Arms is hanging on the north wall and a heavy steel door is to the south.

Extra description keywords(s): 
arms

------- Chars present -------
cityguard guard(MOB)
cityguard guard(MOB)
cityguard guard(MOB)
cityguard guard(MOB)
captain(MOB)

--------- Contents ---------
safe
desk drawer

------- Exits defined -------
Direction east . Keyword : door
Description:
  You see the Cityguard Head Quarters.
Exit flag: IS-DOOR CLOSED LOCKED  
Key no: 3120
To room (V-Number): 3110

Direction south . Keyword : door
Description:
  You see the heavy steel door.
Exit flag: IS-DOOR CLOSED LOCKED  
Key no: 3137
To room (V-Number): 3143
*/
