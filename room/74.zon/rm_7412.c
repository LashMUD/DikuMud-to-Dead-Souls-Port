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

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The stalagmite tunnel");
    SetLong("You have entered a small tunnel. Here it is quite dry.\n"+
        "Mabye it would be an idea to rest here.");
    SetItems( ([ 
        "north" : "You can see a small cave to the north.",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7013_mudmonster_aggressive" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7411",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7413",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The stalagmite tunnel, Of zone : 17. V-Number : 7412, R-number : 536
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You has entered a small tunnel. Here it is quite dry.
Mabye it would be an idea to rest here.
Extra description keywords(s): None
------- Chars present -------
rat(MOB)
mud monster mudmonster(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can see a small cave to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7411

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7413
*/
