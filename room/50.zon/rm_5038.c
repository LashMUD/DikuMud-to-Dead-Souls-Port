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

    SetTerrainType(T_OUTDOORS);
    SetAmbientLight(30);
    SetShort("Grassy plains");
    SetLong("You walk in the grassy plains among the herbs which grow here. The wind is\n"+
        "strong and rough. Far to the north you can see the foothills and further on\n"+
        "mountain peaks are visible. VERY steep, and dangerous slopes are just\n"+
        "south and east of here. To the east you notice some sort of stone formation\n"+
        "and further away you can just see some mountains which must be famous Moravia.");
    SetItems( ([ 
        "north" : "The plains extend far to the north.",
        "east" : "Some VERY steep slopes prevent you from going this way, it might kill you.",
        "south" : "Some VERY steep slopes prevent you from going this way, it might kill you.",
        "west" : "The plains extend far to the east.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/50.zon/obj/5004_wildflowers" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5021",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5045",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5045",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5017",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Grassy plains, Of zone : 9. V-Number : 5038, R-number : 305
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
You walk in the grassy plains among the herbs which grow here. The wind is
strong and rough. Far to the north you can see the foothills and further on
mountainpeaks are visible. VERY steep, and dangerous slopes is just
south and east of here. To the east you notice some sort of stoneformation
and further away you can just see some mountains which must be famous Moria.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
wild flowers

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The plains extend far to the north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5021

Direction east . Keyword : (null)
Description:
  Some VERY steep slopes prevent you from going this way, it might kill you.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5045

Direction south . Keyword : (null)
Description:
  Some VERY steep slopes prevent you from going this way, it might kill you.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5045

Direction west . Keyword : (null)
Description:
  The plains extend far to the east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5017
*/
