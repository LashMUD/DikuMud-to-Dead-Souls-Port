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
    SetShort("Under the Dark Pit");
    SetLong("Nice place you found yourself. You stand in the middle of a room with only\n"+
        "two exits, Up and East. A tall ladder is left here so that you can climb\n"+
        "up through the Pit without the use of a rope.");
    SetItems( ([ 
        "east" : "",
        "up" : "Up. You can't see a thing up there, it's way too dark.",
        "down" : "",
        "ladder" : "This is funny enough a wooden ladder and, after closer inspection, you\n"+ 
            "discover it is magically held towards the wall! You can't, even with your\n"+
            "greatest effort, rock it at ALL!",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/71.zon/npc/7004_beetle_earth" :1,
        "/domains/diku-alfa/room/71.zon/npc/7006_snake_slithering" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/71.zon/rm_7104",
        "up" : "/domains/diku-alfa/room/70.zon/rm_7004",
        "down" : "/domains/diku-alfa/room/74.zon/rm_7400",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Under the Dark Pit, Of zone : 15. V-Number : 7102, R-number : 456
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
Nice place you found yourself. You stand in the middle of a room with only
two exits, Up and East. A tall ladder is left here so that you can climb
up through the Pit without the use of a rope.
Extra description keywords(s): 
ladder

------- Chars present -------
beetle(MOB)
beetle(MOB)
beetle(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7104

Direction up . Keyword : (null)
Description:
  Up. You can't see a thing up there, it's way too dark.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7004

Direction down . Keyword : trapdoor
Description:
  UNDEFINED
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7400
*/
