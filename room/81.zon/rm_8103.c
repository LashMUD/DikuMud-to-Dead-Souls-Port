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

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(0);
    SetShort("The ring");
    SetLong("   You are standing in a curving corridor, going north and east. \n"+
        "Skeletons and pieces of skeletons, clad in once-bright tatters, are \n"+
        "stapled to the wall on the outside of the curve.");
    SetItems( ([ 
        "north" : "The corridor continues to curve right for as long as your light \n"+
	    "reaches.",
        "east" : "For as long as you can see, the corridor keeps turning left.",
        ({"skeleton", "skeletons", "bones"}) : "The skeletons are, upon closer examination, actually made from glass, \n"+
	    "by someone obviously good at what he does. Their clothes are \n"+
	    "coarsely woven from spun glass.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/81.zon/weap/8113_bone" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/81.zon/rm_8101",
        "east" : "/domains/diku-alfa/room/81.zon/rm_8104",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The ring, Of zone : 21. V-Number : 8103, R-number : 625
Sector type : Inside Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are standing in a curving corridor, going north and east. 
Skeletons and pieces of skeletons, clad in once-bright tatters, are 
stapled to the wall on the outside of the curve.
Extra description keywords(s): 
skeleton skeletons bones

------- Chars present -------

--------- Contents ---------
bone

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The corridor continues to curve right for as long as your light 
reaches.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8101

Direction east . Keyword : (null)
Description:
  For as long as you can see, the corridor keeps turning left.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8104
*/
