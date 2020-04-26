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
    SetShort("The strange sewer");
    SetLong("You are in an ordinary sewer exept for a lot of scrates on the sewer wall,\n"+
        "and a lot of debris on the floor.");
    SetItems( ([ 
        "east" : "You see a sewer.",
        "west" : "You see another sewer.",
        "debris" : "You see a lot of organic decay on the floor.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/72.zon/rm_7230",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7232",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The strange sewer, Of zone : 16. V-Number : 7231, R-number : 510
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in an ordinary sewer exept for a lot of scrates on the sewer wall,
ad a lot of debris on the floor.
Extra description keywords(s): 
debris

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see a sewer.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7230

Direction west . Keyword : (null)
Description:
  You see another sewer.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7232
*/
