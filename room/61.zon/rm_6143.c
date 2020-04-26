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
    SetShort("The cave of the Green Dragon");
    SetLong("You are in a big natural cave.  The floor is littered with bones of all sorts\n"+
        "and the stench is so massive that you could cut it with a knife.  The only exit\n"+
        "is to the south.");
    SetItems( ([ 
        "south" : "The exit leads out into the forest.",
        ({"bone", "bones", "floor"}) : "Most of the bones on the floor appear to be of human origin.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/61.zon/npc/6112_dragon_green" : 1,
        "domains/diku-alfa/room/61.zon/armor/6111_shield_large" : 1,
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/61.zon/rm_6142",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The cave of the Green Dragon, Of zone : 12. V-Number : 6143, R-number : 384
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a big natural cave.  The floor is littered with bones of all sorts
and the stench is so massive that you could cut it with a knife.  The only exit
is to the south.
Extra description keywords(s): 
bone bones floor

------- Chars present -------
dragon green(MOB)

--------- Contents ---------
shield large

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  The exit leads out into the forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6142
*/
