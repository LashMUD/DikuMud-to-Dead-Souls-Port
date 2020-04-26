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
    SetAmbientLight(30);
    SetShort("The foyer");
    SetLong("   You are standing in the foyer of Dragon's mansion. The wide double door to\n"+
        "the croquet lawn is to the north, flanked by large windows. There is a wide\n"+
        "oaken staircase up to the first floor, and a smaller one down to the cellar.\n"+
        "The walls are all oak panelled, and hung with strange paintings. There is a\n"+
        "door in the south wall.");
    SetItems( ([ 
        "north" : "Through the windows next to the door you can see the croquet lawn, bathed in\n"+
            "afternoon sunlight.",
        "south" : "",
        ({"staircase", "west"}) : "The staircase up is lined with more strange paintings. The stairs fade out\n"+
            "of existence some 20 steps up.",
        "down" : "Down the stairwell You can see a flickering light. There are no steps down.",
        ({"painting", "paintings"}) : "They are strange indeed, works of breathtaking precision depicting obviously\n"+
            "impossible motifs, like a sky filled with headless men, all dressed in some\n"+
            "black costume (including hats), or a lady standing, blue from the waist up, or\n"+
            "some pieces of plankwood that seems to be melting away like snow, or a night\n"+
            "sky with a dove-shaped hole of bright daysky in the middle.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/89.zon/rm_8909",
        "south" : "/domains/diku-alfa/room/89.zon/rm_8911",
        ] ));
    SetDoor("north", "/domains/diku-alfa/room/doors/8909_8910");
    SetDoor("south", "/domains/diku-alfa/room/doors/8910_8911");
}

void init(){
   ::init();
}

/* NO_NPC's allowed in room*/
int CanReceive(object ob) {
    if(ob && !inherits(LIB_NPC, ob)){
    return 1;
    }
    else
    return 0;
}

/* Extra Information Original Diku Output 
Room name: The foyer, Of zone : 22. V-Number : 8910, R-number : 647
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
   You are standing in the foyer of Dragon's mansion. The wide double door to
the croquet lawn is to the north, flanked by large windows. There is a wide
oaken staircase up to the first floor, and a smaller one down to the cellar.
The walls are all oak panelled, and hung with strange paintings. There is a
door in the south wall.
Extra description keywords(s): 
painting paintings

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : door
Description:
  Through the windows next to the door you can see the croquet lawn, bathed in
afternoon sunlight.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8909

Direction south . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8911

Direction west . Keyword : (null)
Description:
  The staircase up is lined with more strange paintings. The stairs fade out
of existence some 20 steps up.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction up . Keyword : (null)
Description:
  Down the stairwell You can see a flickering light. There are no steps down.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
