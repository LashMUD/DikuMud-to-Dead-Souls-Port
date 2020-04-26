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
    SetAmbientLight(0);
    SetShort("The lair end");
    SetLong("You can see a table in front of you. It's very dusty.\n"+
        "Around the table five skeletons are siting.Exits are\n"+
        "north and east.");
    SetItems( ([ 
        "north" : "the northern part of the lair.",
        "east" : "the eastern part of the lair.",
        "table" : "On the tabel there is dust, in the center there is a small statue of a\n"+
            "Dragon sleeping.",
        ({"skeleton", "skeletons"}) : "You can see that they have been killed in some sort of way. Not\n"+
            "by sword or club.",
        ({"dragon", "statue"}) : "it looks like a silver dragon. It is nailed onto the tabel.\n"+
            "The dragon sits on a red dragon that looks dead. But the\n"+
            "eyes of the red dragon is glowing pulsating red. You feel\n"+
            "drained.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7419",
        "east" : "/domains/diku-alfa/room/74.zon/rm_7417",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The lair end, Of zone : 17. V-Number : 7420, R-number : 544
Sector type : City Special procedure : No
Room flags: DARK INDOORS 
Description:
You can see a tabel in front of you. It's very dusty.
Around the tabel five skeletons are siting.Exits are
north and east.
Extra description keywords(s): 
dragon statue
skeleton skeletons
tabel

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  the northern part of the lair.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7419

Direction east . Keyword : (null)
Description:
  the eastern part of the lair.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7417
*/
