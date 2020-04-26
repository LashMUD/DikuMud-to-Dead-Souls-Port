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

int ReadSign();

static void create() {
    room::create();

    SetTerrainType(T_OUTDOORS);
    SetAmbientLight(30);
    SetShort("Park Road");
    SetLong("  The road continues north and south. A building is just west of here, you\n"+
        "notice a sign on the door. The park entrance is to the east.");
    SetItems( ([
        ({ "door", "building", "sign" }) : "The sign on the door says:-\n"+
            "                  Cityguard Head Quarters",
        "east" : "You see the park entrance.",
        "west" : "You see the cityguard headquarters.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/npc/3060_cityguard" : 3,
        "/domains/diku-alfa/room/31.zon/npc/3060_cityguard_wkey" : 1,
        ]) );
    SetRead( ([
        ({ "door", "building", "sign" }) : (:ReadSign:),
        ]) ); 
   SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3131",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3112",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3118",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3110",
        ]) );
    SetDoor("west","/domains/diku-alfa/room/doors/3110_3111");
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/31.zon/txt/HQ_door_sign.txt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Park Road, Of zone : 2. V-Number : 3111, R-number : 69
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   The road continues north and south.  A building is just west of here, you
notice a sign on the door.  The park entrance is to the east.

Extra description keywords(s): 
building door sign

------- Chars present -------
cityguard guard(MOB)
cityguard guard(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3131

Direction east . Keyword : (null)
Description:
  You see the park entrance.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3112

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3118

Direction west . Keyword : door
Description:
  You see the cityguard head quarters.
Exit flag: IS-DOOR  
Key no: -1
To room (V-Number): 3110
*/
