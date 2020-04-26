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
    
    SetKeyName("safe");
    SetId(({"safe"}));
    SetShort("a safe, placed in a dark corner of the room");
    SetLong("The safe is very heavy. It has a keyhole.");
    SetMass(1000);
    SetMaxCarry(52385);
    SetCanClose(1);
    SetClosed(1);
    SetCanLock(1);
    SetLocked(1);
    SetKey("key_3123");
    AddMoney("gold", 52385);
}

void init(){
    ::init();
}

mixed CanGet(object ob) { return "You can't take that";}

/* Extra Information Original Diku Output
Object name: [safe], R-number: [82], V-number: [3131] Item type: CONTAINER
Short description: the safe
Long description:
A safe is placed in a dark corner of the room.
Extra description keyword(s):
----------
safe
----------
Can be worn on :NOBITS
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 100, Value: 0, Cost/day: 100000, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Max-contains : 34
Locktype : 15
Corpse : No
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
