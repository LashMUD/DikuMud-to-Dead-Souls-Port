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
    SetShort("Cleric's Bar");
    SetLong("  The bar is one of the finest in the land, lucky it is members only. Fine\n"+
        "furniture is set all around the room. A small sign is hanging on the wall.");
    SetItems( ([
        "sign" : "The sign reads:\n"+
                 "Free instructions provided by the waiter:\n\n"+
                 "   Buy  - Buy something (drinkable) from the waiter.\n"+
                 "   List - The waiter will show you all the different drinks and\n"+
                 "          specialities, and tell the price of each.",
        "south" : "You see the entrance.",
        "west" : "You see the inner sanctum.",
        ]) );
    SetInventory(([
        "/domains/diku-alfa/room/30.zon/npc/3043_c_waiter" : 1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/30.zon/rm_3004",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3002",
        ]) );
    SetRead( ([
        "sign" : (:ReadSign:),
       ]) );
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/30.zon/txt/clericbar.txt");

}

void init(){
    ::init();
}

/* NO_NPC's allowed in Mage's Lab unless following a player*/
int CanReceive(object ob){
    if( ob && (base_name(ob)=="/domains/diku-alfa/room/30.zon/npc/3043_c_waiter" 
        || playerp(ob) || adminp(ob) || ob->GetLeader(this_player())) ){
        return 1;
    }
    else
        return 0;
}

/* Extra Information Original Diku Output 
Room name: Cleric's Bar, Of zone : 1. V-Number : 3003, R-number : 9
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
   The bar is one of the finest in the land, lucky it is members only.  Fine
furniture is set all around the room.  A small sign is hanging on the wall.

Extra description keywords(s): 
sign
------- Chars present -------
waiter(MOB)
--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see the entrance.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3004

Direction west . Keyword : (null)
Description:
  You see the inner sanctum.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3002
*/
