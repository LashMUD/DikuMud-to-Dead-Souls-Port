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
    SetShort("The Edge of The Water Sewer");
    SetLong("You stand in a room where half of the floor is covered in water. The water\n"+
        "leads east and a doorway leads west.");
    SetItems( ([ 
        "east" : "You can hardly make out much more than that the next place is in a pipe \n"+
            "with more water.",
        "west" : "",
        "water" : "It looks dark and murky, and emanates a foul stench.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/70.zon/rm_7061",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7050",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Edge of The Water Sewer, Of zone : 14. V-Number : 7055, R-number : 438
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in a room where half of the floor is covered in water. The water
leads east and a doorway leads west.
Extra description keywords(s): 
water

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You can hardly make out much more than that the next place is in a pipe 
with more water.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7061

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7050
*/
