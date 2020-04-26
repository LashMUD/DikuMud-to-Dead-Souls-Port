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

    SetTerrainType(T_UNDERGROUND |T_ROUGH);
    SetAmbientLight(0);
    SetShort("The southeastern corner of the ledge");
    SetLong("This seems like a ledge that is a little broader than the one just to the\n"+
        "north of here. The ledge seems to lead around some sort of abyss of total\n"+
        "darkness.");
    SetItems( ([ 
        "north" : "North of here you can see a ledge.",
        "west" : "The ledge leads further west.",
        "down" : "The Abyss lies down there. Who knows what might lurk down there?",
        ({"edge", "odd-looking"}) : "This is truly a weird piece of craftsmanship in your eyes. The edge seems to\n"+
            "form a step leading down, but WHAT a STEP DOWN. The Abyss opens down there \n"+
            "leading to seemingly total destruction.",
        "step" : "A small rock sticks out right under it, otherwise the way is DOWN, DOWN, and\n"+
            "SPLAT!!!",
        "rock" : "It looks as if it can be opened in a door-like fashion. Maybe this will lead\n"+
            "the way down.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/71.zon/rm_7120",
        "west" : "/domains/diku-alfa/room/71.zon/rm_7115",
        "down" : "/domains/diku-alfa/room/72.zon/rm_7279",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The southeastern corner of the ledge, Of zone : 15. V-Number : 7121, R-number : 475
Sector type : Mountains Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
This seems like a ledge that is a little broader than the one just to the
north of here. The ledge seems to lead around some sort of abyss of total
darkness.
Extra description keywords(s): 
rock
step
edge odd-looking

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  North of here you can see a ledge.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7120

Direction west . Keyword : (null)
Description:
  The ledge leads further west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7115

Direction down . Keyword : rock step edge
Description:
  The Abyss lies down there. Who knows what might lurk down there?
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7279
*/
