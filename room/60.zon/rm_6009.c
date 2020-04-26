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
    SetAmbientLight(30);
    SetShort("Outside a small cabin in the forest");
    SetLong("You are outside a small cabin built entirely from heavy logs.  There is a\n"+
        "wooden door to the north and small paths lead west and south through the trees.");
    SetItems( ([ 
        "north" : "The wooden door is quite sturdy but does not appear to be equipped with a lock.",
        "south" : "The small path leads south through the dense forest.",
        "west" : "The small path leads west through the light forest.",
        ({"cabin", "logs"}) : "It looks simple but comfortable and the slender trees make the whole place seem\n"+
	    "pretty idyllic.  It's a cabin built from logs.  Wooden logs, not system logs.",
        ({"path", "paths"}) : "The path is probably used by the cabin's inhabitants.",
        ({"tree", "trees"}) : "The trees are fairly young, not much more than a hundred years or so.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/60.zon/npc/6000_john_lumberjack" : 1,
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/60.zon/rm_6010",
        "south" : "/domains/diku-alfa/room/60.zon/rm_6014",
        "west" : "/domains/diku-alfa/room/60.zon/rm_6008",
        ] ));
    SetDoor("north" , "/domains/diku-alfa/room/doors/6009_6010");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output
Room name: Outside a small cabin in the forest, Of zone : 11. V-Number : 6009,
R-number : 330
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
You are outside a small cabin built entirely from heavy logs.  There is a
wooden door to the north and small paths lead west and south through the trees.
Extra description keywords(s): 
tree trees
path paths
cabin logs

------- Chars present -------
john lumberjack(MOB)
rabbit(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : door wooden
Description:
  The wooden door is quite sturdy but does not appear to be equipped with a
lock.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 6010

Direction south . Keyword : (null)
Description:
  The small path leads south through the dense forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6014

Direction west . Keyword : (null)
Description:
  The small path leads west through the light forest.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6008
*/
