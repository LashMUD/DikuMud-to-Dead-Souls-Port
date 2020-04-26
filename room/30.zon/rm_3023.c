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
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Tournament and Practise Yard");
    SetLong(" The practise yard of the fighters. To the north is the bar. A well leads down into darkness.");
    SetItems( ([
        "north" : "You see the bar.",
        "down" : "You can't see what is down there, it is too dark. Looks like it would be\n"+
            "impossible to climb back up.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3023_f_guildmaster" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3022",
        "down" : "/domains/diku-alfa/room/70.zon/rm_7048",
        ]) );
}

void init(){
    ::init();
}

/* NO_NPC's allowed in Practise Yard unless following a player*/
int CanReceive(object ob){
    if( ob && (base_name(ob)=="/domains/diku-alfa/room/30.zon/npc/3023_f_guildmaster" 
        || playerp(ob) || adminp(ob) || ob->GetLeader(this_player())) ){
        return 1;
    }
    else
        return 0;
}

/* Extra Information Original Diku Output 
Room name: The Tournament and Practise Yard, Of zone : 1. V-Number : 3023, R-number : 29
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
   The practise yard of the fighters.  To the north is the bar.  A well leads
down into darkness.

Extra description keywords(s): None
------- Chars present -------
guildmaster master(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the bar.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3022

Direction down . Keyword : (null)
Description:
  You can't see what is down there, it is too dark.  Looks like it would be
impossible to climb back up.

Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7048
*/
