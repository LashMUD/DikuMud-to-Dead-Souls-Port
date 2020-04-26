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
    SetShort("Muddy sewer");
    SetLong("You stand in a bend of the pipe system of the sewer with mud up to your\n"+
        "thighs. Contemplating a higher level of existence here would be utterly\n"+
        "inappropriate, as the smell would keep any intelligent creature from even\n"+
        "thinking of anything but getting away from this foul end of the WORLD.\n"+
        "The bend goes from north to west.");
    SetItems( ([ 
        "north" : "North. Filled with mud, that place looks like an impassable intersection\n"+
            "with pipes leading north and east.",
        "west" : "West. There's less mud that way, maybe you're on your way out of this foul\n"+
            "place.",
        "mud" : "It's dark as tar and looks like something out of a toilet, on top of THAT\n"+
            "the smell is absolutely OVERWHELMING.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7013",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7008",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Muddy sewer, Of zone : 14. V-Number : 7014, R-number : 406
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in a bend of the pipe system of the sewer with mud up to your
thighs. Contemplating a higher level of existence here would be utterly
inappropriate, as the smell would keep any intelligent creature from even
thinking of anything but getting away from this foul end of the WORLD.
The bend goes from north to west.
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  North. Filled with mud, that place looks like an impassable intersection
with pipes leading north and east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7013

Direction west . Keyword : (null)
Description:
  West. There's less mud that way, maybe you're on your way out of this foul
place.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7008
*/
