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
    SetShort("The sewer");
    SetLong("You are in a sewer, where the slimy water runs down through a tiny hole.\n"+
        "You see some odd scrates on the pipe wall, as from a gigantic rat. There \n"+
        "is a sewer drain south.");
    SetItems( ([ 
        "south" : "You see a sewer drain.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7203_wererat" :1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/72.zon/rm_7224",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sewer, Of zone : 16. V-Number : 7225, R-number : 507
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a sewer, where the slimy water runs down through a tiny hole.
You see some odd scrates on the pipe wall, as from a gigantic rat. There 
is a sewer drain south.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see a sewer drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7224
*/
