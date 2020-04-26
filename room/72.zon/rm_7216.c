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
#include <medium.h>

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("indoors");
     SetMedium(MEDIUM_SURFACE);
    SetAmbientLight(0);
    SetShort("Under water in the sewer.");
    SetLong("You swim in some dirty water and is holding you breath. You'll better \n"+
        "continue before you drown. It is a good thing that you can hold your light\n"+
        "above water-level.");
    SetItems( ([ 
        "north" : "It is hard to see, but it looks like the drain runs slightly upwards.",
        "south" : "It is hard to see, but it looks like the drain runs a little bit upwards.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/72.zon/rm_7215",
        "south" : "/domains/diku-alfa/room/72.zon/rm_7217",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Under water in the sewer., Of zone : 16. V-Number : 7216, R-number : 498
Sector type : Water Swim Special procedure : No
Room flags: DARK INDOORS 
Description:
You swim in some dirty water and is holding you breath. You'll better 
continue before you drown. It is a good thing that you can hold your light
above water-level.

Extra description keywords(s): None
------- Chars present -------
wererat rat were(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  It is hard to see, but it looks like the drain runs slightly upwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7215

Direction south . Keyword : (null)
Description:
  It is hard to see, but it looks like the drain runs a little bit upwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7217
*/
