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
    SetLong("   You walk in the steep foothills. It is rather hard to move here. \n"+
	"To the north you can see the mountains. Several pinetrees is growing here,\n"+
	"making the place look dark and evil.");
    SetItems( ([ 
        "north" : "The mountains block your way.",
        "east" : "The foothills extend far to the east.",
        "south" : "The foothills extend far down to the south, In the horizon you can\n"+
            "see the City of Midgaard.",
        "west" : "To the west mountains block your way.",
        ({"pine", "tree", "trees", "pines"}) : "You notice nothing special about the pines, it just so ... quiet here.",
            "mountains" : "The mountains seems dark and allmost alive, as they contrast against\n"+
	    "the sky.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/50.zon/npc/5000_aruncus" : 1,
        "/domains/diku-alfa/room/50.zon/obj/5004_wildflowers" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5024",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5030",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The steep foothills, Of zone : 9. V-Number : 5023, R-number : 292
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
   You walk in the steep foothills. It is rather hard to move here. 
To the north you can see the mountains. Several pinetrees is growing here,
making the place look dark and evil.

Extra description keywords(s): 
mountains
pine tree trees pines

------- Chars present -------

--------- Contents ---------
wild flowers

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The mountains block your way.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction east . Keyword : (null)
Description:
  The foothills extend far to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5024

Direction south . Keyword : (null)
Description:
  The foothills extend far down to the south, In the horizon you can
see the City of Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5030

Direction west . Keyword : (null)
Description:
  To the west mountains block your way.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
