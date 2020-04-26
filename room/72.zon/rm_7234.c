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
    SetShort("The rat's lair");
    SetLong("You are in a little cave. You are able to see quite a lot of debris on the \n"+
        "floor. There is a sewer drain west of here.");
    SetItems( ([ 
        "west" : "You see the sewer system that way.",
        ] ));
    SetExits( ([
        "west" : "/domains/diku-alfa/room/72.zon/rm_7233",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7204_rat_gigantic" :1,
        ]) );
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The rat's lair, Of zone : 16. V-Number : 7234, R-number : 513
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a little cave. You are able to see quite a lot of debris on the 
floor. There is a sewer drain west of here.
Extra description keywords(s): None
------- Chars present -------
rat gigantic(MOB)

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  You see the sewer system that way.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7233
*/
