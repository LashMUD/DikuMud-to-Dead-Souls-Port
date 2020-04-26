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
    SetShort("The Leather Shop");
    SetLong(" An acrid smell fills this large room. Along the walls are numerous\n"+
        "shelves containing all sorts of animal hide and in the crackling fireplace\n"+
        "hangs a big iron pot with boiling water. In the middle of the room is a\n"+
        "large oak table.\n"+
        "A wooden sign is hanging above the fireplace.");
    SetItems( ([
        "fireplace" : "It is a rather large fireplace made from heavy granite rocks.",
        "table" : "It is made from solid oak but appears to be very used. Its surface is\n"+
        "covered in marks and scratches. A large burning candle stands directly on\n"+
        "the table surface, tallow flowing down its sides.",
        "pot" : "Several large pieces of leather hide are boiling in the iron pot.",
        "sign" : "The wooden sign says :-\n\n"+
                 "    Use 'list' to see what is in store,\n"+
                 "        'buy <item>' to buy an item,\n"+
                 "        'sell <item>' to sell an item and\n"+
                 "        'value <item>' to make the leather worker evaluate an item.",
        "south" : "You see the alley.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3010_leatherworker" : 1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/30.zon/rm_3044",
        ]) );
    SetRead( ([
        "sign" : (:ReadSign:),
        ]) );
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/30.zon/txt/leathershop.txt");   
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Leather Shop, Of zone : 1. V-Number : 3035, R-number : 41
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   An acrid smell fills this large room.  Along the walls are numerous
shelves containing all sorts of animal hide and in the crackling fireplace
hangs a big iron pot with boiling water.  In the middle of the room is a
large oak table.
A wooden sign is hanging above the fireplace.

Extra description keywords(s): 
sign
pot
table
fireplace

------- Chars present -------
leather worker(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see the alley.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3044
*/
