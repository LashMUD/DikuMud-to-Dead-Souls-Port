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
    SetShort("The small room");
    SetLong("The only thing in this room of interest is a chair, and that's tight to the \n"+
        "rock floor. A doorway leads south and another leads east into darkness.");
    SetItems( ([ 
        "east" : "Utter darkness...!",
        "south" : "You can see a room with a lot of light in it. You can't make out any details.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/70.zon/npc/7003_spider" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/70.zon/rm_7055",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7051",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The small room, Of zone : 14. V-Number : 7050, R-number : 434
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
The only thing in this room of interest is a chair, and that's tight to the 
rock floor. A doorway leads south and another leads east into darkness.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  Utter darkness...!
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7055

Direction south . Keyword : (null)
Description:
  You can see a room with a lot of light in it. You can't make out any details.
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7051
*/
