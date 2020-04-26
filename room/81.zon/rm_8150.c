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
    SetShort("The cave");
    SetLong("   This is the Daemon's Lair. It is suffused in a purple glow from \n"+
        "the myriad multishaped and -sized screens covering most of three \n"+
        "walls. There is a rung ladder on the only uncluttered wall, going \n"+
        "up through a shaft in the ceiling. There is an easy chair, a \n"+
        "rumpled bed and a table piled high with yestercycle's dirty dishes. \n"+
        "In the wall to the west, a tunnel leads out to the Matrix Fault.");
    SetItems( ([ 
        "west" : "You can see faint sparking out there.",
        "up" : "Looking up the shaft, you see a trapdoor some four or five yards up, \n"+
            "with a heavy lock on it.",
        ({"lock", "trap", "trapdoor", "door"}) : "There is a heavy lock hanging on it, but fortunately it is unlocked.",
        ({"screens", "glow", "screen"}) : "The purple glowing screens are in many different shapes and sizes.\n"+
            "They all display some line-drawing moving about in apparent con-\n"+
            "fusion, except some few that are merely black. Some of the line-\n"+
            "drawings are very confusing, and when one tries to look closer, the \n"+
            "eyes start to hurt. They definitely don't look as if they belong in\n"+
            "either 2- or 3-space.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/81.zon/npc/8003_daemon" :1,
        "/domains/diku-alfa/room/81.zon/obj/8101_dish_dirty" :2,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/81.zon/rm_8124",
        "up" : "/domains/diku-alfa/room/80.zon/rm_8045",
        ] ));
    SetDoor("up", "/domains/diku-alfa/room/doors/8045_8150");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The cave, Of zone : 21. V-Number : 8150, R-number : 637
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   This is the Daemon's Lair. It is suffused in a purple glow from 
the myriad multishaped and -sized screens covering most of three 
walls. There is a rung ladder on the only uncluttered wall, going 
up through a shaft in the ceiling. There is an easy chair, a 
rumpled bed and a table piled high with yestercycle's dirty dishes. 
In the wall to the west, a tunnel leads out to the Matrix Fault.
Extra description keywords(s): 
screens glow screen
lock trap trapdoor door

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  You can see faint sparking out there.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8124

Direction up . Keyword : trapdoor door
Description:
  Looking up the shaft, you see a trapdoor some four or five yards up, 
with a heavy lock on it.
Exit flag: IS-DOOR CLOSED  
Key no: 8100
To room (V-Number): 8045
*/
