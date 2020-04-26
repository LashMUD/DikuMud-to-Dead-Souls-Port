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

int ReadSign();

static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Reception");
    SetLong("  You are standing in the reception. The staircase leads down to the\n"+
        "entrance hall. There is a small sign on the counter.");
    SetItems ( ([
        "sign" : "Rooms are expensive but good! You may:\n\n"+
                 "   Offer - get an offer on a room - Time is in real life days.\n"+
                 "   Rent  - Rent a room (saves your stuff, and quits the game),\n"+
                 "           minimum charge is one day.\n\n"+
                 "                          MY WAY OR THE HIGHWAY\n"+
                 "                             PAY YOUR RENT!\n"+
                 "                WE WON'T THINK TWICE BEFORE KICKING YOU OUT.",
        "down" : "You see the entrance hall.",
        ]) );
    SetRead ( ([
        ({"sign", "small", "small sign"}) : (:ReadSign:)
        ]) );    
    SetExits( ([
        "down" : "/domains/diku-alfa/room/30.zon/rm_3006",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3005_receptionist" : 1,
        ]) );
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/30.zon/txt/reception.txt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Reception, Of zone : 1. V-Number : 3008, R-number : 14
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are standing in the reception.  The staircase leads down to the
entrance hall.  There is a small sign on the counter.

Extra description keywords(s): 
sign

------- Chars present -------
receptionist(MOB)

--------- Contents ---------

------- Exits defined -------
Direction down . Keyword : (null)
Description:
  You see the entrance hall.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3006
*/
