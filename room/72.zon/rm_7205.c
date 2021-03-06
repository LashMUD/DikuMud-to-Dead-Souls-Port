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
    SetShort("The Lair");
    SetLong("On the floor you see a lot of human decay, like bones and skulls. You also\n"+
        "see a lot of slime. On the wall is a torch sitting in its sconce.");
    SetItems( ([ 
        "south" : "You see another part of the lair.",
        "west" : "You see another part of the lair.",
        ({"skull", "skulls", "bones", "decay"}) : "On all the skulls you notice that there is a three inch hole in the \n"+
            "forehead. All the bones are broken and old.",
        "slime" : "The slime is slimy and uninteresting.",
        ({"torch", "sconce"}) : "The torch is bolted to the sconce and the sconce to the wall.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7202_mindflayer_junior" :1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/72.zon/rm_7206",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7202",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Lair, Of zone : 16. V-Number : 7205, R-number : 487
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
On the floor you see a lot of human decay, like bones and skulls. You also
see a lot of slime. On the wall is a torch sitting in its sconce.
Extra description keywords(s): 
torch sconce
slime
skull skulls bones decay

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see another part of the lair.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7206

Direction west . Keyword : (null)
Description:
  You see another part of the lair.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7202
*/
