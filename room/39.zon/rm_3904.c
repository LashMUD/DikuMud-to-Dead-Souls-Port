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
    
    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("The long dusty trail following the north wall.");
    SetLong(" You are walking along the north wall. This is the rear of the Temple.\n"+
        "It is not as pompous and impressive from this side. To the north the plains\n"+
        "extend towards the horizon.\n"+
        "You notice some markings on the wall here.");
    SetItems( ([
        "north" : "A small path extends into the plains.",
        "east" : "The dusty trail is winding along the north wall of Midgaard.",
        "west" : "The dusty trail is winding along the north wall of Midgaard.",
        ({"wall", "writing", "markings", "wall markings"}) :
            "The markings are made with the hand of a child.\n"+
            "They read : Tear down the Wall   -Pink Floyd",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5000",
        "east" : "/domains/diku-alfa/room/39.zon/rm_3905",
        "west" : "/domains/diku-alfa/room/39.zon/rm_3903",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The long dusty trail following the north wall., Of zone : 7. V-Number : 3904, R-number : 165
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
You are walking along the north wall. This is the rear of the Temple.
It is not as pompous and impressive from this side. To the north the plains
extend towards the horizon.
You notice some markings on the wall here.

Extra description keywords(s): 
wall markings writing

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  A small path extends into the plains.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5000

Direction east . Keyword : (null)
Description:
  The dusty trail is winding along the north wall of Midgaard. 
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3905

Direction west . Keyword : (null)
Description:
  The dusty trail is winding along the north wall of Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3903
*/
