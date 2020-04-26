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
    SetLong("You are standing in the middle of a bend of the sewer pipe. It is very\n"+
        "dark around here and the mud is sticking to your legs, not very pleasant.\n"+
        "The pipe leads east and south from here.");
    SetItems( ([ 
        "east" : "East. The mud stretches on into the darkness.",
        "south" : "South. There is even more mud in that direction than where you are now. \n"+
            "Incredible.",
        "mud" : "It's dark as tar and looks like something out of a toilet, on top of THAT\n"+
            "the smell is absolutely OVERWHELMING.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/70.zon/rm_7011",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7006",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The muddy sewer, Of zone : 14. V-Number : 7005, R-number : 397
Sector type : Hills Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in the middle of a bend of the sewer pipe. It is very
dark around here and the mud is sticking to your legs, not very pleasant.
The pipe leads east and south from here.
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  East. The mud stretches on into the darkness.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7011

Direction south . Keyword : (null)
Description:
  South. There is even more mud in that direction than where you are now. 
Incredible.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7006
*/
