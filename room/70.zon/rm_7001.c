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
    SetShort("The muddy sewer");
    SetLong("You are standing in mud to your knees. This is not the kind of place\n"+
        "for a picnic. The muddy sewer stretches further into the south.");
    SetItems( ([ 
        "south" : "You see the muddy sewer continuing into the darkness to the south.",
        "mud" : "It's dark as tar and looks like something out of a toilet, on top of THAT\n"+
            "the smell is absolutely OVERWHELMING.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/70.zon/rm_7002",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The muddy sewer, Of zone : 14. V-Number : 7001, R-number : 393
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in mud to your knees. This is not the kind of place
for a picnic. The muddy sewer stretches further into the south.
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see the muddy sewer continuing into the darkness to the south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7002
*/
