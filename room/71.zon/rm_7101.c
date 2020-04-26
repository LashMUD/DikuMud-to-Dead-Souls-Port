
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
    SetShort("Under the mudhole");
    SetLong("You stand in a small room with a great big opening in the ceiling. From this\n"+
        "opening there's mud dripping down in large lumps. >YUCK<. You can smell the \n"+
        "foul stench of the slimy sediment as you try not to get covered by the \n"+
        "falling sludge. To the east there is an entryway leading out from here and \n"+
        "it seems absolutely impossible to force the muddy decent.");
    SetItems( ([ 
        "east" : "East. You see nothing of interest.",
        "mud" : "You never saw such disgusting matter before, it nearly makes you puke.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/71.zon/npc/7006_snake_slithering" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/71.zon/rm_7103",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Under the mudhole, Of zone : 15. V-Number : 7101, R-number : 455
Sector type : Mountains Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You stand in a small room with a great big opening in the ceiling. From this
opening there's mud dripping down in large lumps. >YUCK<. You can smell the 
foul stench of the slimy sediment as you try not to get covered by the 
falling sludge. To the east there is an entryway leading out from here and 
it seems absolutely impossible to force the muddy decent.
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  East. You see nothing of interest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7103
*/
