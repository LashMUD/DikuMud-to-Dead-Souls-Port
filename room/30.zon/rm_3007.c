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
    SetShort("The Grunting Boar");
    SetLong("  You are standing in the bar. The bar is set against the northern wall, old\n"+
        "archaic writing, carvings and symbols cover its top. A fireplace is built into\n"+
        "the western wall, and through the southeastern windows you can see the temple\n"+
        "square. This place makes you feel like home.\n "+
        "A small sign with big letters is fastened to the bar.");
    SetItems( ([
        "sign" : "Free instructions provided by the Grunting Boar Inn.\n\n"+
                 "   Buy  - Buy something (drinkable) from the bartender.\n"+
                 "   List - The bartender will show you all the different drinks and\n"+
                 "          specialities, and tell the price of each.",
        "west" : "You see the exit to the entrance hall.",
        ({"writing", "carving", "carvings", "symbols", "symbol"}) :  "Although it is very hard to understand, you think it looks a lot like beer, "+
          "poems about beer, and small beer mugs.", 
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3040_bartender" : ({60, 1}),
        "/domains/diku-alfa/room/30.zon/npc/3064_drunk" : 1,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/30.zon/rm_3006",
        ]) );
    SetRead( ([
        ({"instructions","sign"}) : (: ReadSign :)
        ]) );
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/30.zon/txt/boarbar.txt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Grunting Boar, Of zone : 1. V-Number : 3007, R-number : 13
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are standing in the bar.  The bar is set against the northern wall, old
archaic writing, carvings and symbols cover its top.  A fireplace is built into
the western wall, and through the southeastern windows you can see the temple
square.  This place makes you feel like home.
A small sign with big letters is fastened to the bar.

Extra description keywords(s): 
writing carving carvings symbols symbol
sign

------- Chars present -------
drunk(MOB)
bartender(MOB)

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  You see the exit to the entrance hall.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3006
*/
