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
    SetShort("Quifael's monster pen");
    SetLong("You are in a big, subterranean room with heavy massive stone walls and no\n"+
        "windows whatsoever.  A virtual ladder leads upwards.");
    SetItems( ([ 
        "up" : "The ladder leads to the laboratory.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/69.zon/npc/6001_rabbit" : 1,
        "/domains/diku-alfa/room/69.zon/npc/6003_rabbit_ferocious" : 1,
        "/domains/diku-alfa/room/69.zon/npc/6900_bug_computer" : 1,
        "/domains/diku-alfa/room/69.zon/npc/6910_isha" : 1,
        ]) );
    SetExits( ([
        "up" : "/domains/diku-alfa/room/69.zon/rm_6902",
        ] ));
}

void init(){
   ::init();
}

/* Only ARCH's (private) and room inventory allowed in room*/
int CanReceive(object ob) {
    if(ob && !archp(ob) && 
             strcmp("the cute rabbit", ob->GetShort()) && 
             strcmp("the ferocious rabbit", ob->GetShort()) &&
             strcmp("the computer bug", ob->GetShort()) &&
             strcmp("Isha the Dark Elf", ob->GetShort())){
    tell_object(ob, "There's a private conversation going on in that room.");
    return 0;
    }else 
    return ::CanReceive(ob);
}

/* Extra Information Original Diku Output 
Room name: Quifael's monster pen, Of zone : 13. V-Number : 6900, R-number : 386
Sector type : Inside Special procedure : No
Room flags: INDOORS PRIVATE 
Description:
You are in a big, subterranean room with heavy massive stone walls and no
windows whatsoever.  A virtual ladder leads upwards.
Extra description keywords(s): None
------- Chars present -------
isha elf(MOB)
bug(MOB)
rabbit(MOB)

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : (null)
Description:
  The ladder leads to the laboratory.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6902
*/
