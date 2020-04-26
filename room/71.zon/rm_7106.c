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
    SetShort("The northwestern corner of the ledge");
    SetLong("You stand, swaying out from the ledge, with only a couple of inches of safe, \n"+
        "solid ledge under your feet. The ledge continues to the east but not back\n"+
        "south. It seems that the ledge is too narrow to turn on so you'll have to\n"+
        "continue foreward.");
    SetItems( ([ 
        "east" : "The ledge continues east.",
        "south" : "The ledge continues south.",
        "west" : "",
        "down" : "The Abyss lies down there. Who knows what might lurk down there?",
        ({"edge", "odd-looking"}) : "This is truly a weird piece of craftsmanship in your eyes. The edge seems to\n"+
            "form a step leading down, but WHAT a STEP DOWN. The Abyss opens down there \n"+
            "leading to seemingly total destruction.",
        "rock" : "It looks as if it can be opened in a door-like fashion. Maybe this will lead\n"+
            "the way down.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/71.zon/rm_7113",
        "south" : "/domains/diku-alfa/room/71.zon/rm_7107",
        "down" : "/domains/diku-alfa/room/72.zon/rm_7279",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The northwestern corner of the ledge, Of zone : 15. V-Number : 7106, R-number : 460
Sector type : Mountains Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You stand, swaying out from the ledge, with only a couple of inches of safe, 
solid ledge under your feet. The ledge continues to the east but not back
south. It seems that the ledge is too narrow to turn on so you'll have to
continue foreward.
Extra description keywords(s): 
rock
step
edge odd-looking

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The ledge continues east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7113

Direction south . Keyword : (null)
Description:
  The ledge continues south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7107

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 8309

Direction down . Keyword : rock step edge
Description:
  The Abyss lies down there. Who knows what might lurk down there?
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7279
*/
