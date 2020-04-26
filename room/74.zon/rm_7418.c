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
    SetAmbientLight(0);
    SetShort("The square lair");
    SetLong("You are standing in the north-east part of the lair. You see\n"+
        "a sign at the wall");
    SetItems( ([ 
        "east" : "You see a wooden door",
        "south" : "another part of the lair.",
        "west" : "another part of the lair.",
        ({"sign", "wall"}) : "The sign says 'Gods of War I call you, my sword is by my side,\n"+
            "               I seek a light free from all false pride'\n"+
            "                       Reyemle Grug.....",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7421",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7417",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7419",
        ] ));
SetDoor("east", "/domains/diku-alfa/room/doors/7418_7421");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The square lair, Of zone : 17. V-Number : 7418, R-number : 542
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in the north-east part of the lair. You see
a sign at the wall
Extra description keywords(s): 
sign wall

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : wooden door
Description:
  You see a wooden door
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7421

Direction south . Keyword : (null)
Description:
  another part of the lair.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7417

Direction west . Keyword : (null)
Description:
  another part of the lair.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7419
*/
