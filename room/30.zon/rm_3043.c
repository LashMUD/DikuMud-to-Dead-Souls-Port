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

int ReadLetters();

static void create() {
    room::create();

    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("Wall Road");
    SetLong(" You are walking next to the western city wall. Wall Road continues further\n"+
        "north and south. A small, poor alley leads east.\n"+
        "Some letters have been written on the wall here.");
    SetItems( ([
        "north" : "The road continues further north.",
        "east" : "The alley leads east.",
        "south" : "The road continues further south.",
        "letters" : "It says 'Who watches the watchmen?'",
        "wall" : "It is built from large grey rocks that have been fastened to each other with\n"+
                 "some kind of mortar. It is far too high to climb.",
        ]) );
    SetRead( ([
        "letters" : (:ReadLetters:)
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3042",
        "east" : "/domains/diku-alfa/room/30.zon/rm_3044",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3047",
        ]) );
}

mixed ReadLetters(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/30.zon/txt/wall.txt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Wall Road, Of zone : 1. V-Number : 3043, R-number : 45
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are walking next to the western city wall.  Wall Road continues further
north and south.  A small, poor alley leads east.
Some letters have been written on the wall here.

Extra description keywords(s): 
wall
letters

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The road continues further north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3042

Direction east . Keyword : (null)
Description:
  The alley leads east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3044

Direction south . Keyword : (null)
Description:
  The road continues further south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3047
*/
