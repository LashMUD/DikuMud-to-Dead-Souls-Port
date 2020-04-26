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
    SetShort("The terrace");
    SetLong("   You are standing on a sunlit terrace in front of Dragon's mansion. To the\n"+
        "west, there is a splendid view over the field down over the lake. To the north\n"+
        "is the greenhouse, its large windowpanes shimmering with weird and wonderful\n"+
        "colors, while a double door leads into the house proper to the east. It is\n"+
        "warm and calm here. There is a white-painted table with a parasol here,\n"+
        "together with a matched set of chairs.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "west" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/89.zon/rm_8917",
        "east" : "/domains/diku-alfa/room/89.zon/rm_8918",
        "west" : "/domains/diku-alfa/room/89.zon/rm_8908",
        ] ));
    SetDoor("north", "/domains/diku-alfa/room/doors/8917_8919");
    SetDoor("east", "/domains/diku-alfa/room/doors/8918_8919");
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
Room name: The terrace, Of zone : 22. V-Number : 8919, R-number : 656
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
   You are standing on a sunlit terrace in front of Dragon's mansion. To the
west, there is a splendid view over the field down over the lake. To the north
is the greenhouse, its large windowpanes shimmering with weird and wonderful
colors, while a double door leads into the house proper to the east. It is
warm and calm here. There is a white-painted table with a parasol here,
together with a matched set of chairs.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8917

Direction east . Keyword : double door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8918

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8908
*/
