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
    SetShort("Dragons lair");
    SetLong("You can see burned walls, the floorstones are fiery red.\n"+
        "All kinds of bones are scattered all over the floor. On\n"+
        "the walls you can see some burned shapes. You smell burned\n"+
        "flesh. Two creatures are like melted into the floor.");
    SetItems( ([ 
        "north" : "You can see a long tunnel.",
        "west" : "You can see nothing but darkness.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7040_dragon_red" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7429",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7427",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Dragons lair, Of zone : 17. V-Number : 7428, R-number : 552
Sector type : Field Special procedure : No
Room flags: INDOORS 
Description:
You can see burned walls, the floorstones are fiery red.
All kinds of bones are scattered all over the floor. On
the walls you can see some burned shapes. You smell burned
flesh. Two creatures are like melted into the floor.
Extra description keywords(s): None
------- Chars present -------
chr-eff'n chr(MOB)
red dragon(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can see a long tunnel.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7429

Direction west . Keyword : (null)
Description:
  You can see nothing but darkness.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7427
*/
