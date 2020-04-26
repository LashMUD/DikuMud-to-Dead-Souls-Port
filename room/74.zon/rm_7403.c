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
    SetShort("Cave T-cross");
    SetLong("You are standing in a mudlike substance. The smell here is\n"+
        "awful, it is rotten. To the west you can see some light.");
    SetItems( ([ 
        "east" : "To the east the tunnel still goes downwards.",
        "south" : "",
        "west" : "You can see some light to the west.",
        "mud" : "When you examine the mud, you notice small worms crawling\n"+
            "around.",
        "worms" : "The worms are purple. They do not look edible.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7013_mudmonster_aggressive" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7404",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7408",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7402",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Cave T-cross, Of zone : 17. V-Number : 7403, R-number : 527
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in a mudlike substance. The smell here is
awful, it is rotten. To the west you can see some light.
Extra description keywords(s): 
worms
mud

------- Chars present -------
mud monster mudmonster(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  To the east the tunnel still goes downwards.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7404

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7408

Direction west . Keyword : (null)
Description:
  You can see some light to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7402
*/
