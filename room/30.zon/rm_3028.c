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
    SetShort("The Thieves Bar");
    SetLong(" The bar of the thieves. Once upon a time this place was beautifully\n"+
        "furnished, but now it seems almost empty. To the south is the yard, and to\n"+
        "the west is the entrance hall.\n"+
        "   (Maybe the furniture has been stolen?!)");
    SetItems( ([
        "south" : "You see the secret yard.",
        "west" : "You see the entrance hall to the thieves guild.",
        "furniture" : "As you look at the furniture, the chair you sit on disappears.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3044_t_waiter" : 1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/30.zon/rm_3029",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3027",
        ]) );
}

void init(){
    ::init();
}

/* NO_NPC's allowed in Thieve's Bar unless following a player*/
int CanReceive(object ob){
    if( ob && (base_name(ob)=="/domains/diku-alfa/room/30.zon/npc/3044_t_waiter" 
        || playerp(ob) || adminp(ob) || ob->GetLeader(this_player())) ){
        return 1;
    }
    else
        return 0;
}


/* Extra Information Original Diku Output 
Room name: The Thieves Bar, Of zone : 1. V-Number : 3028, R-number : 34
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
   The bar of the thieves.  Once upon a time this place was beautifully
furnished, but now it seems almost empty.  To the south is the yard, and to
the west is the entrance hall.
   (Maybe the furniture has been stolen?!)

Extra description keywords(s): 
furniture

------- Chars present -------
waiter(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see the secret yard.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3029

Direction west . Keyword : (null)
Description:
  You see the entrance hall to the thieves guild.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3027
*/
