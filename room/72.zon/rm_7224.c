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
    SetShort("The sewer junction");
    SetLong("You stand in a junction of three sewer drains. You see some odd scrates on\n"+
        "the pipe wall, as from a gigantic rat.North and south the sewer continues \n"+
        "as usual, but west it looks a little strange.");
    SetItems( ([ 
        "north" : "You see nothing but a sewer drain.",
        "south" : "You see nothing vut a sewer drain.",
        "west" : "You see a strange sewer pipe.",
        ] ));
    SetExits( ([
         "north" : "/domains/diku-alfa/room/72.zon/rm_7225",
         "south" : "/domains/diku-alfa/room/72.zon/rm_7223",
         "west" : "/domains/diku-alfa/room/72.zon/rm_7229",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sewer junction, Of zone : 16. V-Number : 7224, R-number : 506
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in a junction of three sewer drains. You see some odd scrates on
the pipe wall, as from a gigantic rat.North and south the sewer continues 
as usual, but west it looks a little strange.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see nothing but a sewer drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7225

Direction south . Keyword : (null)
Description:
  You see nothing vut a sewer drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7223

Direction west . Keyword : (null)
Description:
  You see a strange sewer pipe.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7229
*/
