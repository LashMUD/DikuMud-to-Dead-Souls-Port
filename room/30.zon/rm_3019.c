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
    SetShort("Mage's Laboratory");
    SetLong(" This is the Magical Experiments Laboratory. Dark smoke-stained stones\n"+
        "arch over numerous huge oaken tables, most of these cluttered with strange-\n"+
        "looking pipes and flasks. The floor is covered with half-erased pentagrams\n"+
        "and even weirder symbols, and a blackboard in a dark corner has only been\n"+
        "partially cleaned, some painful-looking letters faintly visible.  A well in\n"+
        "the middle of the floor leads down into darkness. Vile smells waft from the\n"+
        "depths.");
    SetItems( ([
        "west" : "You see the bar.",
        "down" : "You can't see what is down there, it is too dark. Looks like it would be\n"+
                 "impossible to climb back up.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3020_m_guildmaster" : 1,
        ]) );
    SetExits( ([
        "west" : "/domains/diku-alfa/room/30.zon/rm_3018",
        "down" : "/domains/diku-alfa/room/70.zon/rm_7017",
        ]) );
}

void init(){
    ::init();
}

/* NO_NPC's allowed in Mage's Lab unless following a player*/
int CanReceive(object ob){
    if( ob && (base_name(ob)=="/domains/diku-alfa/room/30.zon/npc/3020_m_guildmaster" 
        || playerp(ob) || adminp(ob) || ob->GetLeader(this_player())) ){
        return 1;
    }
    else
        return 0;
}

/* Extra Information Original Diku Output 
Room name: Mage's Laboratory, Of zone : 1. V-Number : 3019, R-number : 25
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
   This is the Magical Experiments Laboratory.  Dark smoke-stained stones
arch over numerous huge oaken tables, most of these cluttered with strange-
looking pipes and flasks.  The floor is covered with half-erased pentagrams
and even weirder symbols, and a blackboard in a dark corner has only been
partially cleaned, some painful-looking letters faintly visible.  A well in
the middle of the floor leads down into darkness.  Vile smells waft from the
depths.

Extra description keywords(s): None
------- Chars present -------
guildmaster master(MOB)

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  You see the bar.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3018

Direction down . Keyword : (null)
Description:
  You can't see what is down there, it is too dark.  Looks like it would be
impossible to climb back up.

Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7017
*/
