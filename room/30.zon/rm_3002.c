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
    SetShort("Cleric's Inner Sanctum");
    SetLong("  This is the inner sanctum. A picture of the mighty Thor, is hanging on\n"+
            "the wall, just above the altar which is set against the western wall. A well\n"+
            "in the middle of the floor leads down into darkness. Vile smells waft from\n"+
            "the depths."); 
    SetExits( ([
        "east" : "/domains/diku-alfa/room/30.zon/rm_3003",
        "down" : "/domains/diku-alfa/room/70.zon/rm_7026",
        ]) );
    SetItems( ([
       "east" : "You see your favorite place, the bar of divination.",
       "down" : "You can't see what is down there, it is too dark. Looks like it would be "+
                "impossible to climb back up.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3021_c_guildmaster" : 1,
        ]) );
}

void init(){
    ::init();
}

int CanReceive(object ob){
    if( ob && (base_name(ob)=="/domains/diku-alfa/room/30.zon/npc/3021_c_guildmaster" 
        || playerp(ob) || adminp(ob) || ob->GetLeader(this_player())) ){
        return 1;
    }
    else
        return 0;
}

/* Extra Information Original Diku Output 
Room name: Cleric's Inner Sanctum, Of zone : 1. V-Number : 3002, R-number : 8
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
   This is the inner sanctum.  A picture of the mighty Thor, is hanging on
the wall, just above the altar which is set against the western wall.  A well
in the middle of the floor leads down into darkness.  Vile smells waft from
the depths.

Extra description keywords(s): None
------- Chars present -------
guildmaster master(MOB)
--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see your favorite place, the bar of divination.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3003

Direction down . Keyword : (null)
Description:
  You can't see what is down there, it is too dark.  Looks like it would be
impossible to climb back up.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7026
*/
