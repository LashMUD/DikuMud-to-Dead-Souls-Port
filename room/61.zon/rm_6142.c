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

    SetTerrainType(T_WOODS);
    SetAmbientLight(0);
    SetShort("Outside a cave in the deep, dark forest");
    SetLong("You are at the end of a broad, irregular path.  To the north is a very large\n"+
        "ominous-looking cave opening.  The trees here have many marks as if something\n"+
        "with huge claws has been tearing at them in rage.");
    SetItems( ([ 
        "north" : "The disgusting smell of a large reptile emanates from the cave opening.",
        "west" : "The path winds its way westwards.",
        ({"tree", "trees"}) :
            "The ancient grey giants have many marks as if something with huge claws has\n"+
            "been tearing at them in rage.",
        ({"cave", "opening"}) : "The disgusting smell of a large reptile emanates from the cave opening.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/61.zon/rm_6143",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6136",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Outside a cave in the deep, dark forest, Of zone : 12. V-Number : 6142, R-number : 383
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are at the end of a broad, irregular path.  To the north is a very large
ominous-looking cave opening.  The trees here have many marks as if something
with huge claws has been tearing at them in rage.
Extra description keywords(s): 
cave opening
tree trees

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The disgusting smell of a large reptile emanates from the cave opening.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6143

Direction west . Keyword : (null)
Description:
  The path winds its way westwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6136
*/
