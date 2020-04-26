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

inherit LIB_SHOP;

int ReadSign();

static void create() {
    ::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Jeweller's Shop");
    SetLong("  You are in a small, beautifully furnished room. The warm light emanating\n"+
        "from the small oil lamps on the walls is reflected in the hard, polished\n"+
        "surface of the big mahogany desk that stands in the centre of the room.\n"+
        "A small sign with golden letters stands on the desk.");
    SetItems( ([
        ({ "oil", "lamps", "oil lamps", "oil lamp" }) : 
            "They are made from polished gold and looks as if they are securely fastened to smooth stone walls.",
        "desk" : "Your face is reflected in its surface.",
        "sign" : "The golden letters say :-\n\n"+
                 "    Use 'list' to see what is in store,\n"+
                 "        'buy <item>' to buy an item,\n"+
                 "        'sell <item>' to sell an item and\n"+
                 "        'value <item>' to make the jeweller evaluate an item.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3009_jeweller" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3015",
        ]) );
    SetRead( ([
        "sign" : (:ReadSign:),
        ]) );
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/30.zon/txt/jewelers.txt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Jeweller's Shop, Of zone : 1. V-Number : 3034, R-number : 40
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are in a small, beautifully furnished room.  The warm light emanating
from the small oil lamps on the walls is reflected in the hard, polished
surface of the big mahogany desk that stands in the centre of the room.
A small sign with golden letters stands on the desk.

Extra description keywords(s): 
sign
desk
oil lamps

------- Chars present -------
jeweller(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see Main Street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3015
*/
