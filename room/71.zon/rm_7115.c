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
    SetShort("The Broad ledge");
    SetLong("You are standing on a ledge that seems quite a lot larger than the rest \n"+
        "of the ledges. This one leads to the west and the east, plus it has an exit\n"+
        "going to the south. Though you could jump into mid-air, but it probably \n"+
        "wouldn't be such a good idea. The way south is in utter darkness.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "south" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/71.zon/rm_7114",
        "east" : "/domains/diku-alfa/room/71.zon/rm_7121",
        "south" : "/domains/diku-alfa/room/71.zon/rm_7129",
        "west" : "/domains/diku-alfa/room/71.zon/rm_7111",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Broad ledge, Of zone : 15. V-Number : 7115, R-number : 469
Sector type : Hills Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You are standing on a ledge that seems quite a lot larger than the rest 
of the ledges. This one leads to the west and the east, plus it has an exit
going to the south. Though you could jump into mid-air, but it probably 
wouldn't be such a good idea. The way south is in utter darkness.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7114

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7121

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7129

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7111
*/
