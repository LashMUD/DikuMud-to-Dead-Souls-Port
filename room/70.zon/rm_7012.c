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
    SetShort("The bend in the Muddy sewer");
    SetLong("This is not your idea of a holiday. You stand in mud up to your knees.\n"+
        "It's absolutely inconceivable how all this mud could have been placed\n"+
        "here. The pipe leads to the west and south.");
    SetItems( ([ 
        "south" : "South. There's even more mud that way, incredible! Although it looks\n"+
            "like an intersection in the sewer system that leads east and south.",
        "west" : "West. All you can see, is that the pipe leads into a bend that goes\n"+
            "north. But there's less mud in that direction, however odd that sounds.",
        "mud" : "It's dark as tar and looks like something out of a toilet, on top of THAT\n"+
            "the smell is absolutely OVERWHELMING.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/70.zon/rm_7013",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7006",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The bend in the Muddy sewer, Of zone : 14. V-Number : 7012, R-number : 404
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
This is not your idea of a holiday. You stand in mud up to your knees.
It's absolutely inconceivable how all this mud could have been placed
here. The pipe leads to the west and south.
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  South. There's even more mud that way, incredible! Although it looks
like an intersection in the sewer system that leads east and south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7013

Direction west . Keyword : (null)
Description:
  West. All you can see, is that the pipe leads into a bend that goes
north. But there's less mud in that direction, however odd that sounds.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7006
*/
