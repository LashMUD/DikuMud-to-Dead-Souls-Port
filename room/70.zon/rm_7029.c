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

    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(0);
    SetShort("The Triple Junction");
    SetLong("You stand in the middle of a huge junction of concrete sewer pipes. The \n"+
        "pipes lead into three different directions : east, south and west.");
    SetItems( ([ 
        "east" : "East. You can see a bend in the sewer pipe leading north.",
        "south" : "To the south there's a ENORMOUS quadruple sewer junction, all lit up by\n"+
            "an odd light.",
        "west" : "To the west you can just make out another junction similar to the one \n"+
            "you are standing in.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/70.zon/rm_7035",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7030",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7021",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Triple Junction, Of zone : 14. V-Number : 7029, R-number : 417
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in the middle of a huge junction of concrete sewer pipes. The 
pipes lead into three different directions : east, south and west.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  East. You can see a bend in the sewer pipe leading north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7035

Direction south . Keyword : (null)
Description:
  To the south there's a ENORMOUS quadruple sewer junction, all lit up by
an odd light.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7030

Direction west . Keyword : (null)
Description:
  To the west you can just make out another junction similar to the one 
you are standing in.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7021
*/
