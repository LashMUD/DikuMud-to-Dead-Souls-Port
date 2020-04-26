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
    SetAmbientLight(30);
    SetShort("The sacred glade");
    SetLong("   You are standing in the middle of the sacred glades, where the citizens of\n"+
        "Midgaard come to celebrate the spring, where farmers give thanks for bountiful\n"+
        "harvest in the fall, and where lovers stroll in summer. You feel seasons of\n"+
        "remembered happiness and joy taking Your sorrows and worries away from You,\n"+
        "leaving You calm and invigorated, ready for the world. Paths lead into the\n"+
        "holy grove to the east, north and west, while to the south a wide, sunny field\n"+
        "slopes down to a sparkling lake.");
    SetItems( ([ 
        "north" : "The path wind its way north, disappearing through the tall trees.",
        "east" : "The path wind its way through the tall trees, disappearing out of sight.",
        "south" : "To the south, a wide, sunny field stretch out, sloping down towards a brightly\n"+
            "glittering lake.",
        "west" : "The path wind its way west between stately poplars and oaks.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/89.zon/npc/8900_hierophant" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/89.zon/rm_8902",
        "east" : "/domains/diku-alfa/room/89.zon/rm_8906",
        "south" : "/domains/diku-alfa/room/89.zon/rm_8908",
        "west" : "/domains/diku-alfa/room/89.zon/rm_8904",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The sacred glade, Of zone : 22. V-Number : 8905, R-number : 642
Sector type : Forest Special procedure : No
Room flags: NOBITS
Description:
   You are standing in the middle of the sacred glades, where the citizens of
Midgaard come to celebrate the spring, where farmers give thanks for bountiful
harvest in the fall, and where lovers stroll in summer. You feel seasons of
remembered happiness and joy taking Your sorrows and worries away from You,
leaving You calm and invigorated, ready for the world. Paths lead into the
holy grove to the east, north and west, while to the south a wide, sunny field
slopes down to a sparkling lake.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The path wind its way north, disappearing through the tall trees.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8902

Direction east . Keyword : (null)
Description:
  The path wind its way through the tall trees, disappearing out of sight.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8906

Direction south . Keyword : (null)
Description:
  To the south, a wide, sunny field stretch out, sloping down towards a brightly
glittering lake.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8908

Direction west . Keyword : (null)
Description:
  The path wind its way west between stately poplars and oaks.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8904
*/
