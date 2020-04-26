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

//inherit LIB_SHOP;
inherit LIB_ROOM;

int ReadSign();

 static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Bakery");
    SetLong("  You are standing inside the small bakery. A sweet scent of Danish and\n"+
        "fine bread fills the room. The bread and Danish are arranged in fine order\n"+
        "on the shelves, and seem to be of the finest quality.\n "+
        "A small sign is on the counter.");
    SetItems( ([
        "south" : "You see the main street.",
        ({"pastry", "danish"}) : "You see that this is truly delicious pastry. Must be made by a Dane from\n"+    
            "Denmark which surely is not the capital of Sweden!. Former ruler of\n"+
            "Scandinavia, England, Northern Germany, Northern France, Russia, Greenland,\n"+
            "Iceland, Estonia etc. etc.\n"+
            "   The sight of those large, wholesome chokoladeboller makes your mouth water\n"+
            "and your soul sing.",
            "sign" : "Free instructions provided by the store:\n\n"+
                     "   Buy  - Will buy you some bread or pastry.\n"+
                     "   List - The baker will kindly tell you the price and sort of the bread in\n"+
                     "          his bakery.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3001_baker" :({60, 1}),
        ]) );
    SetRead( ([
        "sign" : (:ReadSign:)
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/30.zon/rm_3013",
        ]) );
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/30.zon/txt/baker.txt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Bakery, Of zone : 1. V-Number : 3009, R-number : 15
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are standing inside the small bakery.  A sweet scent of Danish and
fine bread fills the room.  The bread and Danish are arranged in fine order
on the shelves, and seem to be of the finest quality.
A small sign is on the counter.

Extra description keywords(s): 
sign
danish pastry

------- Chars present -------
cityguard guard(MOB)
baker(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see the main street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3013
*/
