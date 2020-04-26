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
    SetShort("The muddy sewer bend");
    SetLong("This isn't your idea of a place to stay too long. You're in up to your\n"+
        "knees in something that resembles mud, but you're not quite sure. The\n"+
        "bend in which you stand leads west and south.");
    SetItems( ([ 
        "south" : "The pipe leads into a intersection that goes south and east. The floor here \n"+
            "is still covered in mud.",
        "west" : "The pipe (still filled with mud) leads into a intersection that goes north \n"+
            "and south. Interesting.",
        "mud" : "It's dark as tar and looks like something out of a toilet, on top of THAT\n"+
            "the smell is absolutely OVERWHELMING.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/70.zon/rm_7008",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7002",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The muddy sewer bend, Of zone : 14. V-Number : 7007, R-number : 399
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
This isn't your idea of a place to stay too long. You're in up to your
knees in something that resembles mud, but you're not quite sure. The
bend in which you stand leads west and south.
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  The pipe leads into a intersection that goes south and east. The floor here 
is still covered in mud.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7008

Direction west . Keyword : (null)
Description:
  The pipe (still filled with mud) leads into a intersection that goes north 
and south. Interesting.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7002
*/
