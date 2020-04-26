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

inherit LIB_SHOP;

static void create() {
    ::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Park Cafe");
    SetLong("  You are inside Park cafe, a very well lighted, cosy place. The cafe\n"+
        "is built from large logs. Through the windows in the northern wall you\n"+
        "see the river, and through the southern window you see many vigorous\n"+
        "colourful plants.");
    SetItems( ([
        "west" : "You see the park entrance.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/npc/3100_maid" : 1,
        "/domains/diku-alfa/room/31.zon/npc/3120_sexton" : 1,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/31.zon/rm_3105",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Park Cafe, Of zone : 2. V-Number : 3106, R-number : 64
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are inside Park Cafe, a very well lighted, cosy place. The cafe
is built from large logs. Through the windows in the northern wall you
see the river, and through the southern window you see many vigorous
colourful plants.

Extra description keywords(s): None
------- Chars present -------
sexton(MOB)
maid(MOB)

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  You see the park entrance.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3105
*/
