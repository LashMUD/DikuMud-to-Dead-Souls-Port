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
    SetShort("End of long tunnel");
    SetLong("You are at a end of a long tunnel. Right in front of you,\n"+
        "you can see a grey mass. To the east you can see a tremendous\n"+
        "long tunnel, but you know that, you has just been there.");
    SetItems( ([ 
        "east" : "Long tunnel. JUST like in the description!",
        "west" : "A grey mass is blocking the way.",
        ({"grey", "mass"}) : "The mass is nothing but a mass, but it is quite suspecious!",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7431",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7434",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: End of long tunnel, Of zone : 17. V-Number : 7433, R-number : 557
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You are at a end of a long tunnel. Right in front of you,
you can see a grey mass. To the east you can see a tremendous
long tunnel, but you know that, you has just been there.
Extra description keywords(s): 
grey mass

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  Long tunnel. JUST like in the description!
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7431

Direction west . Keyword : (null)
Description:
  A grey mass is blocking the way.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7434
*/
