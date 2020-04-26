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
    SetShort("The drain end.");
    SetLong("You are at the end of the drain around you the sewer has collapsed, the only\n"+
        "exit is west.");
    SetItems( ([ 
        "west" : "You see the sewer drain.",
        ]) );
    SetInventory( ([
       "/domains/diku-alfa/room/72.zon/npc/7203_wererat" :1,
       "/domains/diku-alfa/room/72.zon/armor/7209_boots_muddy" : 1,
        ]) );
    SetExits( ([
         "west" : "/domains/diku-alfa/room/72.zon/rm_7213",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The drain end., Of zone : 16. V-Number : 7214, R-number : 496
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are at the end of the drain around you the sewer has collapsed, the only
exit is west.
Extra description keywords(s): None
------- Chars present -------
wererat rat were(MOB)

--------- Contents ---------
boots muddy

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  You see the sewer drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7213
*/
