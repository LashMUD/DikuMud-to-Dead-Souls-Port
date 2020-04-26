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

    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(0);
    SetShort("The Quadruple Junction Under the Dump");
    SetLong("You are standing in something that reminds you of an entry to an ant hive.\n"+
        "There are enormous concrete pipes leading north, south, east and west. \n"+
        "There's also a metal ladder built into the concrete wall leading up through\n"+
        "a layer of garbage. ");
    SetItems( ([ 
        "north" : "To the north you can see a huge triple junction with sewer pipes leading\n"+
            "west and east.",
        "east" : "East. You can see a pit in the floor.",
        "south" : "To the south there's a huge junction with pipes leading east and west.",
        "west" : "To the west there's an odd looking room with totally smooth walls.",
        "up" : "Up through the garbage you can just make out what looks like the Dump in\n"+
            "Midgaard.",
        "ladder" : "It looks as if it's made of stainless steel, and it would very well function\n"+
            "as a club of considerable power, but alas ... You can't take at all since\n"+
            "it's firmly set into the concrete wall.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7029",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7036",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7031",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7022",
        "up" : "/domains/diku-alfa/room/30.zon/rm_3030",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Quadruple Junction Under the Dump, Of zone : 14. V-Number : 7030, R-number : 418
Sector type : City Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You are standing in something that reminds you of an entry to an ant hive.
There are enormous concrete pipes leading north, south, east and west. 
There's also a metal ladder built into the concrete wall leading up through
a layer of garbage. 
Extra description keywords(s): 
ladder

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north you can see a huge triple junction with sewer pipes leading
west and east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7029

Direction east . Keyword : (null)
Description:
  East. You can see a pit in the floor.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7036

Direction south . Keyword : (null)
Description:
  To the south there's a huge junction with pipes leading east and west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7031

Direction west . Keyword : (null)
Description:
  To the west there's an odd looking room with totally smooth walls.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7022

Direction up . Keyword : (null)
Description:
  Up through the garbage you can just make out what looks like the Dump in
Midgaard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3030
*/
