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
    
    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("West trail around Midgaard");
    SetLong(" You are on a dusty trail following the outside wall of Midgaard.\n"+
        "To the east the wall towers over you and to the west you see the\n"+
        "forest of Haon-Dor. The trail leads north and south along the wall. ");
    SetItems( ([
        "north" : "The dusty trail winds north closely to the wall.",
        "south" : "The dusty trail leads to outside the west gate of Midgaard.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/39.zon/rm_3901",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3052",
        ]) );
}

void init(){
    ::init();
}

int CanReceive(object ob) {
    if(ob && !ob->GetProperty("STAY_ZONE")){
        return 1;
    }
    else
        return 0;
}

/* Extra Information Original Diku Output 
Room name: West trail around Midgaard, Of zone : 7. V-Number : 3900, R-number : 161
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are on a dusty trail following the outside wall of Midgaard.
To the east the wall towers over you and to the west you see the
forest of Haon-Dor. The trail leads north and south along the wall. 

Extra description keywords(s): None
------- Chars present -------
fido dog(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The dusty trail winds north closely to the wall.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3901

Direction south . Keyword : (null)
Description:
  The dusty trail leads to outside the west gate of Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3052
*/
