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

    SetClimate("indoors");
    SetAmbientLight(0);
    SetShort("A junction");
    SetLong(" This one seems interesting, a big difference from all the other junctions.\n"+
        "It seems cleaner than the rest of them. Weird. Something that looks like\n"+
        "an air shaft leads upwards, but it looks far too slippery to climb.\n"+
        "The pipes lead to the south, west and north.");
    SetExits(([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7025",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7013",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7028", 
      ]));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: A junction, Of zone : 14. V-Number : 7026, R-number : 415
Sector type : Inside Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
This one seems interesting, a big difference from all the other junctions.
It seems cleaner than the rest of them. Weird. Something that looks like 
an air shaft leads upwards, but it looks far too slippery to climb.
The pipes lead to the south, west and north.
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  North. You see an intersection there, leading north and east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7025

Direction south . Keyword : (null)
Description:
  To the south there's ANOTHER junction leading west and east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7028

Direction west . Keyword : (null)
Description:
  To the west you see a load of mud and sediment in the sewer. That should
be an intersection there but you're not quite sure.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7013
*/
