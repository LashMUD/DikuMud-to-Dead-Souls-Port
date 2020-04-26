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

    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("A muddy intersection");
    SetLong("You have both your feet safely stuck in mud. It isn't the mud that's wrong\n"+
        "it's the smell, the sounds, the total darkness that surrounds you. Everything\n"+
        "here is so depressing. The pipe leads on with a trail of thick mud to the\n"+
        "north, east and south.");
    SetItems( ([ 
        "north" : "North. The pipe goes into a bend with a load of mud all the way up the walls.\n"+
            "The bend leads west.",
        "east" : "East. This way like a place for the annual mud festival, although the stench\n"+
            "wouldn't allow any happiness at all. The pipe leads into a bend that leads \n"+
            "north.",
        "south" : "South. There's less mud in that direction. *smile*. Your light doesn't \n"+
            "cover enough space for you to see much more than that it leads into some\n"+
            "sort of junction.",
        "mud" : "It's dark as tar and looks like something out of a toilet, on top of THAT\n"+
            "the smell is absolutely OVERWHELMING.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7007",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7014",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7009",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A muddy intersection, Of zone : 14. V-Number : 7008, R-number : 400
Sector type : Hills Special procedure : No
Room flags: DARK INDOORS 
Description:
You have both your feet safely stuck in mud. It isn't the mud that's wrong
it's the smell, the sounds, the total darkness that surrounds you. Everything
here is so depressing. The pipe leads on with a trail of thick mud to the
north, east and south.
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  North. The pipe goes into a bend with a load of mud all the way up the walls.
The bend leads west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7007

Direction east . Keyword : (null)
Description:
  East. This way like a place for the annual mud festival, although the stench
wouldn't allow any happiness at all. The pipe leads into a bend that leads 
north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7014

Direction south . Keyword : (null)
Description:
  South. There's less mud in that direction. *smile*. Your light doesn't 
cover enough space for you to see much more than that it leads into some
sort of junction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7009
*/
