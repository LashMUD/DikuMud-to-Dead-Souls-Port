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

inherit LIB_STORAGE;

static void create(){
    ::create();
    
    SetKeyName("fireplace");
    SetId(({"fireplace", "fire", "stone"}));
    SetShort("a fireplace");
    SetLong("A fireplace made from stone sits against the wall.");
    SetMaxCarry(100);
    SetInventory( ([
        "/domains/diku-alfa/room/60.zon/obj/key_6006" :1,
        ]) );
}

void init(){
    ::init();
}

mixed CanGet(object ob) { return "You can't take that";}

/* Extra Information Original Diku Output 
Object name: [fireplace], R-number: [154], V-number: [6003] Item type: CONTAINER
Short description: a fireplace
Long description:
A fireplace made from stone is set against the east wall.
Extra description keyword(s):
----------
fireplace
----------
Can be worn on :NOBITS
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 0, Value: 0, Cost/day: 0, Timer: 0
In room: 6010 ,In object: None ,Carried by:Nobody
Max-contains : 200
Locktype : 0
Corpse : No
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0

*/
