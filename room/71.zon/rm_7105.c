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
    SetShort("Down the old well");
    SetLong("You are dangling on the slippery sides of the old well leading down and up.\n"+
        "The only secure point here is the metal bars that are cemented into the\n"+
        "sides, the ones that you cling frantically to so that you don't fall. Who\n"+
        "knows how deep this well is? The bars lead down and up and nowhere else.");
    SetItems( ([ 
        "up" : "There's a slight, dim light from above, or maybe it's your imagination.\n"+
            "Anyway it SEEMS darker down here than up there, if that is possible.",
        "down" : "Down there nothing at all can be spotted. The darkness that engulfs this\n"+
            "decent seems utterly impossible in a mortal world. It's so thick that a \n"+
            "torch down there would be utterly useless ... or so it seems to you. Not \n"+
            "the kind of thing to cheer you up on this voyage , eh?",
        "bars" : "These look like they're pretty slippery, and not very safe, but perhaps safe\n"+
            "enough for you to climb down, WITH both hands on them.",
        ] ));
    SetExits( ([
        "up" : "/domains/diku-alfa/room/70.zon/rm_7015",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Down the old well, Of zone : 15. V-Number : 7105, R-number : 459
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You are dangling on the slippery sides of the old well leading down and up.
The only secure point here is the metal bars that are cemented into the 
sides, the ones that you cling frantically to so that you don't fall. Who
knows how deep this well is? The bars lead down and up and nowhere else.
Extra description keywords(s): 
bars

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : (null)
Description:
  There's a slight, dim light from above, or maybe it's your imagination.
Anyway it SEEMS darker down here than up there, if that is possible.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7015

Direction down . Keyword : (null)
Description:
  Down there nothing at all can be spotted. The darkness that engulfs this
decent seems utterly impossible in a mortal world. It's so thick that a 
torch down there would be utterly useless ... or so it seems to you. Not 
the kind of thing to cheer you up on this voyage , eh?
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
