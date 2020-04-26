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
    SetShort("The Armoury");
    SetLong(" The armoury with all kinds of armours on the walls and in the window. You\n"+
        "see helmets, shields and chain mails. To the north is the main street.\n"+
        "On the wall is a small note.");
    SetItems( ([
        "north" : "You see the main street",
        "note" : "You can use these commands for trading:\n\n"+
                 "  value <item>     To get the price of an item in your possession.\n"+
                 "  sell <item>      To sell something.\n"+
                 "  buy <item>       To buy something (provided that the shop has it in store).\n"+
                 "  list             Gives you a listing of the shop's inventory.\n\n"+
                 "        WE DON'T GIVE CREDIT; WE DON'T EXPECT TO RECEIVE CREDIT!\n"+
                 "                             NO HAGGLING",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3004_armourer" : 1,
        ]) );
    SetRead( ([
        "note" : (:ReadSign:),
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3013",
        ]) );
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/30.zon/txt/armourynote.txt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Armoury, Of zone : 1. V-Number : 3020, R-number : 26
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   The armoury with all kinds of armours on the walls and in the window.  You
see helmets, shields and chain mails.  To the north is the main street.
On the wall is a small note.

Extra description keywords(s): 
note

------- Chars present -------
armourer(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the main street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3013
*/
