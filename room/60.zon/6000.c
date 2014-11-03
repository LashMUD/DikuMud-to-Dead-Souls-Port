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
    
    SetAmbientLight(30);
    SetShort("The edge of the forest");
    SetLong("You are standing at the eastern edge of a big forest.  To the east is the West\n"+
        "Gate of Midgaard and to the west is a narrow trail, leading in through the\n"+
        "forest.");
    SetItems( ([ 
        "east" : "You see the West Gate of the City of Midgaard.",
        "west" : "You see the narrow forest trail winding westwards in between the trees.",
        "trail" : "The forest trail winds westwards through the trees.",
        ({"tree", "trees"}) : "The trees are quite tall considering most of them appear to be quite young.\n"+
	    "On one of the trees, crude letters forming the word \"Haon-Dor\" have been\n"+
	    "carved into the bark.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/60.zon/obj/6012_sign" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/30.zon/3052",
        "west" : "/domains/diku-alfa/room/60.zon/6001",
        ] ));
}

void init(){
   ::init();
}

/* NO_NPC's allowed in room*/
int CanReceive(object ob) {
    if(ob && !inherits(LIB_NPC, ob) || !ob->GetProperty("STAY_ZONE")) {
    return 1;
    }
    else
    return 0;
}

/* Extra Information Original Diku Output
Room name: The edge of the forest, Of zone : 11. V-Number : 6000, R-number : 321
Sector type : Field Special procedure : No
Room flags: NO_MOB 
Description:
You are standing at the eastern edge of a big forest.  To the east is the West
Gate of Midgaard and to the west is a narrow trail, leading in through the
forest.
Extra description keywords(s): 
tree trees
trail

------- Chars present -------

--------- Contents ---------
sign

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see the West Gate of the City of Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3052

Direction west . Keyword : (null)
Description:
  You see the narrow forest trail winding westwards in between the trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6001
*/
