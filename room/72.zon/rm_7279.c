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
    SetShort("The Wall of the Abyss");
    SetLong("You hang onto some steps leading down into utter darkness. There's an exit \n"+
        "leading up as well, though you'll have to open the tiny rock again to do so.");
    SetItems( ([ 
        "up" : "",
        "down" : "",
        ] ));
    SetExits( ([
        "up" : "/domains/diku-alfa/room/71.zon/rm_7111",
        "down" : "/domains/diku-alfa/room/73.zon/rm_7399",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Wall of the Abyss, Of zone : 16. V-Number : 7279, R-number : 514
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You hang onto some steps leading down into utter darkness. There's an exit 
leading up as well, though you'll have to open the tiny rock again to do so.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : rock
Description:
  UNDEFINED
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7111

Direction down . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7399
*/
