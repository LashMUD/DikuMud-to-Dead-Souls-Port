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

    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("The sewer pipe bend");
    SetLong("You can look in two different directions where the pipe goes : west and \n"+
        "north.");
    SetItems( ([ 
        "north" : "\n"+
	"North. You see another bend leading west.",
        "west" : "You can see another junction although this one is a triple one with pipes\n"+
            "going south and west.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7034",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7029",
        ] ));
}

void init(){
   ::init();
}


/* Extra Information Original Diku Output 
Room name: The sewer pipe bend, Of zone : 14. V-Number : 7035, R-number : 421
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
You can look in two different directions where the pipe goes : west and 
north.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  North. You see another bend leading west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7034

Direction west . Keyword : (null)
Description:
  You can see another junction although this one is a triple one with pipes
going south and west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7029
*/
