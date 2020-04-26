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
    SetShort("The foothills");
    SetLong("   You are walking in some foothills. It is rather hard to move here. \n"+
        "Further to the north you can see the mountains towering over you.\n"+
        "Several pinetrees grow here.");
    SetItems( ([ 
        "north" : "The mountains block you way to the north there is NO way you can\n"+
            "make it that way.",
        "east" : "To the east you notice a small path in the foothills.",
        "south" : "To the south a steep slope runs down to a small path in the foothills.",
        "west" : "The foothills extend far to the west.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/50.zon/meals/5000_timian" : 1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5013",
        "south" : "/domains/diku-alfa/room/50.zon/rm_5010",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5025",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The foothills, Of zone : 9. V-Number : 5027, R-number : 296
Sector type : Hills Special procedure : No
Room flags: NOBITS
Description:
   You are walking in some foothills. It is rather hard to move here. 
Further to the north you can see the mountains towering over you.
Several pinetrees grow here.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
herbs herb timian

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
  To the east you notice a small path in the foothills.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5013

Direction south . Keyword : (null)
Description:
  To the south a steep slope runs down to a small path in the foothills.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5010

Direction west . Keyword : (null)
Description:
  The foothills extend far to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5025
*/
