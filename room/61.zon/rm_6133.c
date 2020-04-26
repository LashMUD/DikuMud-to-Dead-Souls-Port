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
    SetShort("On the spider web");
    SetLong("You are balancing carefully on the giant sticky threads that holds the giant\n"+
        "web in place.  To the east is a giant tree trunk and to the west is an entrance\n"+
        "to a cave-like structure made from many layers of spider web.");
    SetItems( ([ 
        "east" : "To the east is the giant tree trunk.",
        "west" : "To the west is the entrance to the cave-like structure.",
        "web" : "The immense spider web moves softly.",
        ({"cave", "structure"}) :
            "It covers a ground area corresponding to an irregular circle with a diameter of\n"+
            "about 20 feet and is nearly 10 feet tall.  It looks very old.",
        ] ));
    SetInventory( ([
        "domains/diku-alfa/room/61.zon/npc/6113_spider" : 3,
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/61.zon/rm_6132",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6134",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: On the spider web, Of zone : 12. V-Number : 6133, R-number : 378
Sector type : Water Swim Special procedure : No
Room flags: DARK INDOORS 
Description:
You are balancing carefully on the giant sticky threads that holds the giant
web in place.  To the east is a giant tree trunk and to the west is an entrance
to a cave-like structure made from many layers of spider web.
Extra description keywords(s): 
cave structure
web

------- Chars present -------
spider poisonous(MOB)
spider poisonous(MOB)
spider poisonous(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  To the east is the giant tree trunk.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6132

Direction west . Keyword : (null)
Description:
  To the west is the entrance to the cave-like structure.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6134
*/
