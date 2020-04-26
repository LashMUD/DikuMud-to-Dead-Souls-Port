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
    SetShort("The kitchen");
    SetLong("   You are standing in the middle of Dragon's kitchen. Contrary to popular\n"+
        "belief, He *Doesn't* eat virgins, which is amply demonstrated by the large\n"+
        "variety of foodstuffs found here on the shelves. There are numerous cans of\n"+
        "tomatoes, peas, corn etc., vines of garlic, a *Huge* array of small spice jars\n"+
        "along several shelves and a large combo refrigerator/freezer. A big oven and\n"+
        "stove is lurking in a corner. There is some proof here that Dragon is a less\n"+
        "than meticulous housekeeper... There are doors to the north and west.");
    SetItems( ([ 
        "north" : "",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/89.zon/obj/8499_wad_paper" : 1,
        "/domains/diku-alfa/room/89.zon/obj/8402_jar_spice_corn" : 1,
        "/domains/diku-alfa/room/89.zon/obj/8402_jar_spice_pepper" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/89.zon/rm_8913",
        "west" : "/domains/diku-alfa/room/89.zon/rm_8918",
        ] ));
SetDoor("north", "/domains/diku-alfa/room/doors/8913_8915");
SetDoor("west", "/domains/diku-alfa/room/doors/8915_8918");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The kitchen, Of zone : 22. V-Number : 8915, R-number : 652
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are standing in the middle of Dragon's kitchen. Contrary to popular
belief, He *Doesn't* eat virgins, which is amply demonstrated by the large
variety of foodstuffs found here on the shelves. There are numerous cans of
tomatoes, peas, corn etc., vines of garlic, a *Huge* array of small spice jars
along several shelves and a large combo refrigerator/freezer. A big oven and
stove is lurking in a corner. There is some proof here that Dragon is a less
than meticulous housekeeper... There are doors to the north and west.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
paper wad
jar

------- Exits defined -------
Direction north . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8913

Direction west . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8918
*/
