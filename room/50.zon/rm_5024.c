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
    
    SetTerrainType(T_ROUGH);
    SetAmbientLight(30);
    SetShort("The steep foothills");
    SetLong("   You are walking in the steep foothills. It is rather hard to move here. \n"+
        "To the north you can see the mountains towering over you. Several pinetrees\n"+
        "grow here.");
    SetItems( ([ 
        "north" : "The mountains block you way to the north there is NO way you can\n"+
        "make it that way.",
        "east" : "The foothills extend far to the east.",
        "south" : "The foothills extend downwards to the south. In the horizon you can\n"+
            "see the City Of Midgaard.",
        "west" : "The foothills extend far to the west.",
        "mountains" : "The mountains seems dark and allmost alive, as they contrast against\n"+
            "the sky.",
        ({"pine", "tree", "trees", "pines"}) : "The all too quiet trees suggest that something roams theese woods.....",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/50.zon/npc/6001_rabbit" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5025",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5022",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5023",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The steep foothills, Of zone : 9. V-Number : 5024, R-number : 293
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
   You are walking in the steep foothills. It is rather hard to move here. 
To the north you can see the mountains towering over you. Several pinetrees
grow here 

Extra description keywords(s): 
pine tree trees pines
mountains

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The mountains block you way to the north there is NO way you can
make it that way.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction east . Keyword : (null)
Description:
  The foothills extend far to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5025

Direction south . Keyword : (null)
Description:
  The foothills extend downwards to the south. In the horizon you can
see the City Of Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5022

Direction west . Keyword : (null)
Description:
  The foothills extend far to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5023
*/
