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
    SetShort("A bend in sewer pipe");
    SetLong("You are in a bend in the sewer pipe. A strong smell seeps in from the north.\n"+
        "The sewer goes north and east.");
    SetItems( ([ 
        "north" : "North. You are staring into a huge junction with exits in all directions.",
        "east" : "East. The Pipe leads into utter darkness that way.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7009",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7018",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A bend in sewer pipe, Of zone : 14. V-Number : 7010, R-number : 402
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a bend in the sewer pipe. A strong smell seeps in from the north.
The sewer goes north and east.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  North. You are staring into a huge junction with exits in all directions.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7009

Direction east . Keyword : (null)
Description:
  East. The Pipe leads into utter darkness that way.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7018
*/
