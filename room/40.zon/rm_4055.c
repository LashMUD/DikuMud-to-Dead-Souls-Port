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
    SetShort("The maze");
    SetLong("   You are in a maze of small damp tunnels. Only exit is west to a \n"+
        "light cave.");
    SetItems( ([ 
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/npc/4051_tall_warrior" : 1,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/40.zon/rm_4054",
        ] ));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The maze, Of zone : 7. V-Number : 4055, R-number : 200
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a maze of small damp tunnels. Only exit is west to a 
light cave.

Extra description keywords(s): None
------- Chars present -------
hobgoblin(MOB)
hobgoblin(MOB)

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4054
*/
