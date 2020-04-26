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
    SetShort("The sewer drain");
    SetLong("You stand in in a sewer drain, you are able to see some kind of cave-like\n"+
        "room. You see some odd scrates on the drain wall, as from a gigantic rat. \n"+
        "The sewer leads south.");
    SetItems( ([ 
        "east" : "You see a cave-like room.",
        "south" : "You see a sewer.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7203_wererat" :2,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/72.zon/rm_7234",
        "south" : "/domains/diku-alfa/room/72.zon/rm_7232",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sewer drain, Of zone : 16. V-Number : 7233, R-number : 512
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in in a sewer drain, you are able to see some kind of cave-like
room. You see some odd scrates on the drain wall, as from a gigantic rat. 
The sewer leads south.
Extra description keywords(s): None
------- Chars present -------
wererat rat were(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see a cave-like room.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7234

Direction south . Keyword : (null)
Description:
  You see a sewer.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7232
*/
