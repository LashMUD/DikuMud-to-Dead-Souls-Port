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
    
    SetTerrainType(T_INDOORS);
    SetAmbientLight(30);
    SetShort("Hermits hut");
    SetLong("   You are inside the hermits hut.  It is rather old, but serves it purpose\n"+
        "It keeps its habitant from the rough winds and dangerous beasts of the \n"+
        "plains and foothills. There is a small fireplace here.");
    SetItems( ([ 
        "east" : "Through the door you can see the foothills.",
        "fireplace" : "This is your typical fireplace, the hermit probably use it to cook on.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/50.zon/npc/5001_sorbus" : 1,
        "/domains/diku-alfa/room/50.zon/meals/5009_roast_rabbit" : 1,
        "/domains/diku-alfa/room/50.zon/meals/3102_water" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5030",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Hermits hut, Of zone : 9. V-Number : 5031, R-number : 298
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are inside the hermits hut.  It is rather old, but serves it purpose
It keeps its habitant from the rough winds and dangerous beasts of the 
plains and foothills. There is a small fireplace here.

Extra description keywords(s): 
fireplace

------- Chars present -------
rabbit(MOB)
hermit sorbus(MOB)

--------- Contents ---------
water cup
rabbit roast wabbit

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  Through the door you can see the foothills.
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 5030
*/
