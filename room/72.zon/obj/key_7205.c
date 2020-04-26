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

inherit LIB_ITEM;

static void create() {
    item::create();
    SetKeyName("key_7205");
    SetId( ({ "key", "black key", "treasury_key" }) );
    SetAdjectives( ({ "black", "metal" }) );
    SetShort("a black key");
    SetLong("A black key has been left on the floor.");
    SetMass(2);
    SetBaseCost("gold",10);
    SetDisableChance(100);
}
void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [key black], R-number: [196], V-number: [7205] Item type: KEY
Short description: a black key
Long description:
A black key has been left on the floor.
Extra description keyword(s):
----------
black key
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 2, Value: 10, Cost/day: 1000, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Keytype : 0
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
