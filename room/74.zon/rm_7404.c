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
    SetShort("Cave turning-point");
    SetLong("The mud are getting deeper. You are wondering, 'Would\n"+
        "it be an idea to leave, before I disappear?'. To the\n"+
        "south you notice a flat round stone are blocking the\n"+
        "way. To the west you can see mud.");
    SetItems( ([ 
        "south" : "You can see an opening behind the stone.",
        "west" : "",
        ({"flat", "round", "stone"}) : "The stone looks very uninteresting. BUT as you are\n"+
            "about to turn away, you see a lightstribe coming\n"+
            "through a small hole. Conclusion: The stone is moveable.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/74.zon/rm_7405",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7403",
        ] ));
    SetDoor("south", "/domains/diku-alfa/room/doors/7404_7405");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Cave turning-point, Of zone : 17. V-Number : 7404, R-number : 528
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
The mud are getting deeper. You are wondering, 'Would
it be an idea to leave, before I disappear?'. To the
south you notice a flat round stone are blocking the
way. To the west you can see mud.
Extra description keywords(s): 
flat round stone

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : flat round stone
Description:
  You can see an opening behind the stone.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7405

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7403
*/
