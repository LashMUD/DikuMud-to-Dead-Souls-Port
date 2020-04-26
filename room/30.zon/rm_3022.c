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
    SetShort("The Bar of Swordsmen");
    SetLong(" The bar of swordsmen, once upon a time beautifully furnished. But right now the\n"+ 
        "furniture is all around you in small pieces. To the south is the yard, and\n"+
        "to the west is the entrance hall.");
    SetItems( ([
        "south" : "You see the practise yard.",
        "west" : "You see the entrance to the swordsman guild.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3045_f_waiter" : 1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/30.zon/rm_3023",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3021",
        ]) );
}

void init(){
    ::init();
}

/* NO_NPC's allowed in Swodsman's Bar unless following a player*/
int CanReceive(object ob){
    if( ob && (base_name(ob)=="/domains/diku-alfa/room/30.zon/npc/3045_f_waiter" 
        || playerp(ob) || adminp(ob) || ob->GetLeader(this_player())) ){
        return 1;
    }
    else
        return 0;
}

/* Extra Information Original Diku Output 
Room name: The Bar of Swordsmen, Of zone : 1. V-Number : 3022, R-number : 28
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
   The bar of swordsmen, once upon a time beautifully furnished.  But now the
furniture is all around you in small pieces.  To the south is the yard, and
to the west is the entrance hall.

Extra description keywords(s): None
------- Chars present -------
waiter(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see the practise yard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3023

Direction west . Keyword : (null)
Description:
  You see the entrance hall to the thieves guild.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3021
*/
