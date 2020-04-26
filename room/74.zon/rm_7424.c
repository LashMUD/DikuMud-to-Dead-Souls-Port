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
    SetShort("The Circular hall.");
    SetLong("You are standing in round hall. To the north, east and south you\n"+
        "can see a stone head hanging on the walls.");
    SetItems( ([ 
        "east" : "you see nothing special.",
        "west" : "you see a room far away.",
        ({"head", "heads"}) : "When you study the faces of the heads you see that it\n"+
            "is faces of dragons. The face to the north is red, the\n"+
            "face to the east is green and the face to the south is\n"+
            "blue.",
        "green" : "This looks like a evil dragon",
        "red" : "This looks like a neutral dragon",
        "blue" : "This looks like a good dragon",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7046_herald_ettin" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7425",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7423",
        ] ));
    SetDoor("east", "/domains/diku-alfa/room/doors/7424_7425");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Circular hall., Of zone : 17. V-Number : 7424, R-number : 548
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in round hall. To the north, east and south you
can see a stone head hanging on the walls.
Extra description keywords(s): 
blue
red
green
head heads

------- Chars present -------
herald mouse killer ettin(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : green head dragon sculpture face
Description:
  you see nothing special.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7425

Direction west . Keyword : (null)
Description:
  you see a room far away.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7423
*/
