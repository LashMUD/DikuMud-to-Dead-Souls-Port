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

int ReadSign();

static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Cityguard Head Quarters");
    SetLong("  You are inside a tidy office. A big desk made from dark wood is standing\n"+
        "in the centre of the room and a door with a big warning sign is to the west.");
    SetItems( ([
        ({ "sign", "door", "warning", "warning sign" }) : "\nThe sign says:-\n\n
                 Captains Office
                 --------------- 

       WARNING: Authorized Personnel Only!
       -----------------------------------",
        "east" : "You see Park Road.",
        "west" : "You see a big warning sign hanging on the door.",
        ]) );
    SetRead( ([
        ({ "sign", "door", "warning", "warning sign" }) : (:ReadSign:),
        ]) );        
    SetExits( ([
        "east" : "/domains/diku-alfa/room/31.zon/rm_3111",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3142",
        ]) );
    SetDoor("east","/domains/diku-alfa/room/doors/3110_3111");
    SetDoor("west", "/domains/diku-alfa/room/doors/3110_3142");
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/31.zon/txt/HQ_interior_door_sign.txt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Cityguard Head Quarters, Of zone : 2. V-Number : 3110, R-number : 68
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are inside a tidy office.  A big desk made from dark wood is standing
in the centre of the room and a door with a big warning sign is to the west.

Extra description keywords(s): 
sign

------- Chars present -------
cityguard guard(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : door
Description:
  You see Park Road.
Exit flag: IS-DOOR  
Key no: -1
To room (V-Number): 3111

Direction west . Keyword : door
Description:
  You see a big warning sign hanging on the door.
Exit flag: IS-DOOR CLOSED LOCKED  
Key no: 3120
To room (V-Number): 3142
*/
