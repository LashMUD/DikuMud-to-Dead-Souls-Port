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
    SetShort("Inside the cave");
    SetLong("You are in a natural cave.  Various sorts of debris cover the stone floor,\n"+
        "emitting a rather unpleasant smell that makes the air thick and hard to\n"+
        "breathe.  The only obvious exit is east.");
    SetItems( ([ 
        "east" : "The cave opening is to the east.",
        "debris" : "It consists mostly of gnawed bones mixed with small pieces of torn fur.",
        ({"cave", "walls", "floor", "stone"}) : "Quite uninteresting.",
        ({"air", "smell"}) : "Kind of transparent, but quite noticeable nevertheless.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/60.zon/npc/6002_bear_brown" : 1,
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/60.zon/rm_6021",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: Inside the cave, Of zone : 11. V-Number : 6022, R-number : 343
Sector type : Inside Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a natural cave.  Various sorts of debris cover the stone floor,
emitting a rather unpleasant smell that makes the air thick and hard to
breathe.  The only obvious exit is east.
Extra description keywords(s): 
air smell
cave walls floor stone
debris

------- Chars present -------
bear(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The cave opening is to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6021
*/
