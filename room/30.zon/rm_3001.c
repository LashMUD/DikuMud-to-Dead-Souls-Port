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

    object ob;

    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Temple of Midgaard");
    SetLong("  You are in the southern end of the temple hall in the Temple of Midgaard.\n"+
            "The temple has been constructed from giant marble blocks, eternal in\n"+
            "appearance, and most of the walls are covered by ancient wall paintings\n"+
            "picturing Gods, Giants and peasants.\n"+
            "  Large steps lead down through the grand temple gate, descending the huge\n"+
            "mound upon which the temple is built and ends on the temple square below.");
    ob = new("/lib/bboard");
    ob->SetKeyName("bulletin board");
    ob->SetId( ({ "board", "bulletin", "dusty board", "bulletin board" }) );
    ob->set_board_id("midgaard_general_board");
    ob->set_max_posts(30);
    ob->SetShort("a bulletin board");
    ob->SetLong("A large bulletin board is mounted on a wall here.\n"+
                "It is a board for reading and posting messages. To read the\n"+
                "first message: read 1\nTo post a message: post <message title>\n");
    ob->eventMove(this_object());
    SetItems( ([
           "north" : "At the northern end of the temple hall is a statue and a huge altar.",
           "south" : "You look down at the huge stone steps at the temple square below.",
           "down" : "You see the temple square.",
        ]) );
    SetExits( ([
           "south" : "/domains/diku-alfa/room/30.zon/rm_3005",
           "down" : "/domains/diku-alfa/room/30.zon/rm_3005",
           "north" : "/domains/diku-alfa/room/30.zon/rm_3054",
        ]) );
}

void init(){
    ::init();
}

/* NO_NPC's allowed in bulletin board room unless following player*/
int CanReceive(object ob){
    if( ob && (!inherits(LIB_NPC, ob)) || ob->GetLeader(this_player()) ){
        return 1;
    }
    else
        return 0;
}

/* Extra Information Original Diku Output 
Room name: The Temple Of Midgaard, Of zone : 1. V-Number : 3001, R-number : 7
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS
Description:
   You are in the southern end of the temple hall in the Temple of Midgaard.
The temple has been constructed from giant marble blocks, eternal in
appearance, and most of the walls are covered by ancient wall paintings
picturing Gods, Giants and peasants.
   Large steps lead down through the grand temple gate, descending the huge
mound upon which the temple is built and ends on the temple square below.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------
board bulletin
------- Exits defined -------
Direction north . Keyword : (null)
Description:
  At the northern end of the temple hall is a statue and a huge altar.
Exit flag: NOBITS
Key no: -1
To room (V-Number): 3054

Direction south . Keyword : (null)
Description:
  You look down the huge stone steps at the temple square below.
Exit flag: NOBITS
Key no: -1
To room (V-Number): 3005

Direction down . Keyword : (null)
Description:
  You see the temple square.
Exit flag: NOBITS
Key no: -1
To room (V-Number): 3005
*/
