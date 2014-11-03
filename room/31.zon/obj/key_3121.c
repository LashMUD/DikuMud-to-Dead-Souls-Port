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

    SetKeyName("key_3121");
    SetId( ({ "key", "rusty key", "rusty" }) );
    SetAdjectives( ({ "rusty", "metal" }) );
    SetShort("a rusty key");
    SetLong("The key is a fairly large rusty key. You notice some fresh dirt on it.");
    SetMass(10);
    SetBaseCost("gold",10);
    SetDisableChance(100);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [key iron], R-number: [76], V-number: [3120] Item type: KEY
Short description: a key
Long description:
An iron key has been left here.
Extra description keyword(s):
----------
key iron
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 0, Cost/day: 10, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Keytype : 0
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
