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

static void create() {
    ::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Magic Shop");
    SetLong(" You are in a small room that smells of rare chemicals and spices.\n"+
        "Dividing the room in two is a large desk, and on the wall behind it are\n"+
        "numerous shelves crammed with jars, bottles, books and scrolls of all\n"+
        "sorts and sizes.");
    SetItems( ([
        ({ "jars", "bottles" }) : 
            "Some of them are transparent enabling you to see that some contain coloured\n"+
            "powders while others contain body parts of various animals.",
        "books" : "Most of them appear to be very old and dusty.",
        "scrolls" : "Each scroll is stored in a leather tube that protects it from moist.",
        "south" : "You see the main street.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3000_wiz_shopkeeper" : 1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/30.zon/rm_3012",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Magic Shop, Of zone : 1. V-Number : 3033, R-number : 39
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are in a small room that smells of rare chemicals and spices.
Dividing the room in two is a large desk, and on the wall behind it are
numerous shelves crammed with jars, bottles, books and scrolls of all
sorts and sizes.

Extra description keywords(s): 
scrolls
books
jars bottles

------- Chars present -------
wizard(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see the main street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3012
*/
