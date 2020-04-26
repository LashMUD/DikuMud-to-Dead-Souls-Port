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
    SetShort("The very small room.");
    SetLong("You are in a very small room, it is pretty uninteresting.");
    SetItems( ([ 
        "west" : "Through the little hole you can see a half-dry drain.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/obj/7208_stick_light" : 1,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/72.zon/rm_7217",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The very small room., Of zone : 16. V-Number : 7218, R-number : 500
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a very small room, it is pretty uninteresting.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
stick small light

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  Through the little hole you can see a half-dry drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7217
*/
