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
    SetShort("The mudhole");
    SetLong("You stand in mud all the way up to your thighs and it's not too \n"+
        "comfortable since you are used to a somewhat different environment.\n"+
        "The sewer leads to the north of here. In the middle you can just make\n"+
        "out an enormous drainpipe leading down.");
    SetItems( ([ 
        "north" : "North. The muddy junction lies in that direction.",
        "down" : "The muddy drainpipe leads down through the mud, otherwise it is utterly dark.",
        "mud" : "It's dark as tar and looks like something out of a toilet, on top of THAT\n"+
            "the smell is absolutely OVERWHELMING.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7002",
        "down" : "/domains/diku-alfa/room/71.zon/rm_7101",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The mudhole, Of zone : 14. V-Number : 7003, R-number : 395
Sector type : Mountains Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
You stand in mud all the way up to your thighs and it's not too 
comfortable since you are used to a somewhat different environment.
The sewer leads to the north of here. In the middle you can just make
out an enormous drainpipe leading down.
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  North. The muddy junction lies in that direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7002

Direction down . Keyword : (null)
Description:
  The muddy drainpipe leads down through the mud, otherwise it is utterly dark.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7101
*/
