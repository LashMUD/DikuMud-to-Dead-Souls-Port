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

mixed ReadSign();

static void create() {
    room::create();

    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("Park Road");
    SetLong("  You are on Park Road which leads north and south.\n"+
        "A cottage is just east of here and a house is to the west.");
    SetItems( ([
        "east" : "You see a small cottage with an oaken door. A name plate has been set on it.",
        "west" : "On the wooden door is the name 'Mapmaker'.",
        ({"plate", "name", "name plate"}) : "The name 'Papi Llon' has been carved into the name plate.",
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/31.zon/rm_3135",
        "north" : "/domains/diku-alfa/room/31.zon/rm_3111",
        "east" : "/domains/diku-alfa/room/33.zon/rm_3300",
        "west" : "/domains/diku-alfa/room/33.zon/rm_3307",
        ]) );
    SetRead( ([
        ({"plate", "name", "name plate"}) : (:ReadSign:),
        ]) );
    SetDoor("east", "/domains/diku-alfa/room/doors/3118_3300");
    SetDoor("west", "/domains/diku-alfa/room/doors/3118_3307");
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/31.zon/txt/papi.txt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Park Road, Of zone : 2. V-Number : 3118, R-number : 76
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are on Park Road which leads north and south.
A cottage is just east of here and a house is to the west.

Extra description keywords(s): 
plate name

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3111

Direction east . Keyword : door oaken
Description:
  You see a small cottage with an oaken door.  A name plate has been set on it.
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3300
To room (V-Number): 3300

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3135

Direction west . Keyword : door wooden
Description:
  On the wooden door is the name 'Mapmaker'.
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3321
To room (V-Number): 3307
*/
