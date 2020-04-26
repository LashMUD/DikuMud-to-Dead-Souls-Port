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
    SetShort("Park Road");
    SetLong("  You are on Park Road which continues north. The Concourse is south of\n"+
        "here.\n"+
        "An old two-storey house is to the east.");
    SetItems( ([
        "east" : "A heavy oaken door is to the east.",
        "house" : "The house is obviously very old and needs painting. The heavy oaken door is\n"+
            "equipped with a brass door knocker shaped as a goblin's head. No name plate\n"+
            "is to be seen anywhere.",
            //need to make the following a function - Lash
        ({"door", "knocker", "door knocker"}) : "As you look at it, the goblin door knocker comes alive!\n\n"+
            "The head splutters 'Tiz iz da houze uff Kwiff... Kuiffe... Qwiff... Erhm...'\n"+
            "The head splutters 'Quiff... Quiffil...  Ne'er mind!  Quiffy livez ere!'\n\n"+

            "It opens its mouth wide and gobbles 'Unlokk me!'",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3122",
        "east"  : "/domains/diku-alfa/room/69.zon/rm_6904",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3129",
        ]) );
    SetDoor("east", "/domains/diku-alfa/room/doors/3126_6904");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Park Road, Of zone : 2. V-Number : 3126, R-number : 84
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are on Park Road which continues north.  The Concourse is south of
here.
An old two-storey house is to the east.

Extra description keywords(s): 
door knocker
house

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3122

Direction east . Keyword : door
Description:
  A heavy oaken door is to the east.
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3301
To room (V-Number): 6904

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3129
*/
