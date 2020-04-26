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
    SetShort("The old well");
    SetLong("You are standing by an old and worn well from before this century. The sewer\n"+
        "leads to the east from here and the well leads down into darkness. Metal\n"+
        "bars implanted in the side of the well lead down as a ladder.");

    SetItems( ([ 
        "east" : "East. You see, because of the utter darkness that surround you, absolutely\n"+
            "nothing. Your light isn't of much use for that kind of distance.",
        "down" : "Down the well there's even less light than up here, so ... sorry, you can't\n"+
            "see a thing. There are metal bars in the side leading down into the darkness.",
        "bars" : "These look like they're pretty slippery, and not very safe, but perhaps safe\n"+
            "enough for you to climb down, WITH both hands on them.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/70.zon/rm_7028",
        "down" : "/domains/diku-alfa/room/71.zon/rm_7105",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The old well, Of zone : 14. V-Number : 7015, R-number : 407
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing by an old and worn well from before this century. The sewer
leads to the east from here and the well leads down into darkness. Metal
bars implanted in the side of the well lead down as a ladder.
Extra description keywords(s): 
bars

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  East. You see, because of the utter darkness that surround you, absolutely
nothing. Your light isn't of much use for that kind of distance.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7028

Direction down . Keyword : (null)
Description:
  Down the well there's even less light than up here, so ... sorry, you can't
see a thing. There are metal bars in the side leading down into the darkness.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7105
*/
