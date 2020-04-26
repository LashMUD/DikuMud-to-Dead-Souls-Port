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

    SetTerrainType(T_WOODS);
    SetAmbientLight(0);
    SetShort("A narrow trail through the deep, dark forest");
    SetLong("You are on a dusty trail winding its way westwards just below huge sticky\n"+
        "wires suspended like ropes between the trees.  To the west the path seems to\n"+
        "be completely covered in a giant web made from huge threads covered with glue.\n"+
        "This place gives you the creeps.");
    SetItems( ([ 
        "east" : "The narrow, dusty trail leads east through the forest, away from the web.",
        "west" : "The structure to the west looks most of all like an immense spider web.\n"+
            "It does not look as if you can go further without getting caught in it.",
        "up" : "",
        "trail" : "The dark and dusty trail seems fragile compared to the massive trunks, and in\n"+
            "some places, giant grey roots have broken up through its surface.",
        ({"substance", "wire", "wires", "rope", "ropes", "tree", "trees", "trunk", "trunks"}) : 
            "The sticky substance is hanging like ropes between the ancient trees, crossing\n"+
            "the path just out of reach.  It might be possible to climb one of the sticky\n"+
            "trunks.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/61.zon/rm_6144",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6131",
        "up" : "/domains/diku-alfa/room/61.zon/rm_6132",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A narrow trail through the deep, dark forest, Of zone : 12. V-Number : 6130, R-number : 375
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are on a dusty trail winding its way westwards just below huge sticky
wires suspended like ropes between the trees.  To the west the path seems to
be completely covered in a giant web made from huge threads covered with glue.
This place gives you the creeps.
Extra description keywords(s): 
substance wire wires rope ropes tree trees trunk trunks
trail

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The narrow, dusty trail leads east through the forest, away from the web.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6144

Direction west . Keyword : (null)
Description:
  The structure to the west looks most of all like an immense spider web.
It does not look as if you can go further without getting caught in it.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6131

Direction up . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6132
*/
