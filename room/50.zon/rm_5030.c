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
    SetShort("In front of hut in foothills");
    SetLong("   You are standing in the foothills. To the west, well hidden among the small \n"+
        "foothills and pines, you see a small hut. To the north you can see\n"+
        "the foothills, and some pineforrest. Further on mountainpeaks are visible.");
    SetItems( ([ 
        "north" : "The steep foothills seems hard to climb",
        "east" : "The foothills extend far to the east.",
        "south" : "To the south the foothills extend into plains far to the south.",
        "west" : "You see a small crumbled Hut here, must be a hermit living here.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5023",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5022",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5019",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5031",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: In front of hut in foothills, Of zone : 9. V-Number : 5030, R-number : 297
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
   You are standing in the foothills. To the west, well hidden among the small 
foothills and pines, you see a small hut. To the north you can see
the foothills, and some pineforrest. Further on mountainpeaks are visible.

Extra description keywords(s): None
------- Chars present -------
druid Aruncus(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The steep foothills seems hard to climb
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5023

Direction east . Keyword : (null)
Description:
  The foothills extend far to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5022

Direction south . Keyword : (null)
Description:
  To the south the foothills extend into plains far to the south.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5019

Direction west . Keyword : (null)
Description:
  You see a small crumbled Hut here, must be a hermit living here.
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 5031
*/
