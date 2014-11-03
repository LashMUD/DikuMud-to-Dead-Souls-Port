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
    
    SetKeyName("chest");
    SetId(({"chest", "wooden", "wooden chest"}));
    SetShort("a wooden chest");
    SetLong("A wooden chest stands in the corner.");
    SetMass(400);
    SetBaseCost(100);
    SetMaxCarry(100);
    SetCanClose(1);
    SetClosed(1);
    SetCanLock(1);
    SetLocked(1);
    SetKey("key_6006");
    AddMoney("gold", 100);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [chest], R-number: [156], V-number: [6005] Item type: CONTAINER
Short description: a wooden chest
Long description:
A wooden chest stands in the corner.
Extra description keyword(s):
----------
chest
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 40, Value: 100, Cost/day: 30, Timer: 0
In room: 6010 ,In object: None ,Carried by:Nobody
Max-contains : 100
Locktype : 8
Corpse : No
Equipment Status: NONE
Special procedure : No
Contains :
coins
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
