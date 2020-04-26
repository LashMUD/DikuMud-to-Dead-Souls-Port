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
    SetShort("The trash dump");
    SetLong("   You are standing knee-deep in a pile of assorted debris, cardboard- \n"+
        "like scraps and needle-like bits of bent metal. The room is in fact a \n"+
        "part of a curving corridor, going east and south.");
    SetItems( ([
        "east" : "The corridor continues turning right as long as your light reaches. It \n"+
	    "looks cleaner that way.",
        "south" : "The corridor continues turning left as long as you can see. There are \n"+
	    "no more debris a short stretch down this corridor.",
        "up" : "There is a small hole high above you, barely reachable from the top of \n"+
	    "the largest pile of trash.",
        "hole" : "It appears to be changing shape continually, widening and narrowing, \n"+
	    "though never quite closing.",
        ({"debris", "junk", "cardboard", "needle"}) : "It is obviously totally useless, even if you do not understand what it \n"+
	    "actually is.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/81.zon/npc/8001_bug" :1,
        "/domains/diku-alfa/room/81.zon/npc/8001_bug_withglass" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/81.zon/rm_8102",
        "south" : "/domains/diku-alfa/room/81.zon/rm_8103",
        "up" : "/domains/diku-alfa/room/80.zon/rm_8010",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The trash dump, Of zone : 21. V-Number : 8101, R-number : 623
Sector type : Inside Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are standing knee-deep in a pile of assorted debris, cardboard- 
like scraps and needle-like bits of bent metal. The room is in fact a 
part of a curving corridor, going east and south.
Extra description keywords(s): 
debris junk cardboard needle
hole

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The corridor continues turning right as long as your light reaches. It 
looks cleaner that way.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8102

Direction south . Keyword : (null)
Description:
  The corridor continues turning left as long as you can see. There are 
no more debris a short stretch down this corridor.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8103

Direction up . Keyword : (null)
Description:
  There is a small hole high above you, barely reachable from the top of 
the largest pile of trash.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8010
*/
