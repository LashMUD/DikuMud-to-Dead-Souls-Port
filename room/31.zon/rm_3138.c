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
    SetShort("the Mayor's Office");
    SetLong("  You are in the not very big office of the Mayor of Midgaard. A large and\n"+
        "polished but completely empty desk is standing in front of an armchair that\n"+
        "looks so comfortable that it most of all resembles a bed with the head end\n"+
        "raised slightly.");
    SetItems( ([
        "west" : "The waiting room is to the west.",
        "desk" : "This desk is obviously very old. Nevertheless it looks as if has never been\n"+
        "used.",
        ]) );
    SetInventory(([
        "/domains/diku-alfa/room/31.zon/obj/mayors_chair" : 1,
        "/domains/diku-alfa/room/31.zon/npc/3143_mayor" : 1,
        ]));
    SetExits( ([
        "west" : "/domains/diku-alfa/room/31.zon/rm_3137",
        ]) );
}

int reset() {
    ::reset();
    if(present("the Mayor")) {
        present("the Mayor")->eventForce("lie in chair");
    return 0;
    }
    else return 1;
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Mayors Office, Of zone : 2. V-Number : 3138, R-number : 96
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are in the not very big office of the Mayor of Midgaard.  A large and
polished but completely empty desk is standing in front of an armchair that
looks so comfortable that it most of all resembles a bed with the head end
raised slightly.

Extra description keywords(s): 
chair armchair
desk

------- Chars present -------
mayor(MOB)

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  The waiting room is to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3137
*/
