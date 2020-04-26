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

static void create() {
    room::create();

    SetTerrainType(T_ROAD | T_WOODS);
    SetAmbientLight(30);
    SetShort("The wooden bridge");
    SetLong("   You have stepped upon a wooden bridge. It looks old but also\n"+
        "faily safe to cross.\n"+
        "It is made of a tree-sort you haven't seen around as far as you know.");
    SetItems( ([ 
        "east" : "The path continues, further ahead you notice some rock formations.",
        "west" : "The ancient path leads west and turns north further ahead.",
        ({"rock", "formation", "formations"}) : "The rock formations are made of 7 huge, monolith like stones, placed\n"+
            "in a symbolic circle.\n"+
            "You notice it's possible to enter the ring.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5037",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5035",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The wooden bridge, Of zone : 9. V-Number : 5036, R-number : 303
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You have stepped upon a wooden bridge. It looks old but also
faily safe to cross.
It is made of a tree-sort you haven't seen around as ar as you know.

Extra description keywords(s): 
rock formation formations

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The path continues, further ahead you notice some rock formations.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5037

Direction west . Keyword : (null)
Description:
  The ancient path leads west and turns north further ahead.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5035
*/
