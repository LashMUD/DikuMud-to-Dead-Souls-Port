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
    SetKeyName("key_3133");
    SetId( ({ "key", "City Key", "City" }) );
    SetAdjectives( ({ "gold", "metal", "large" }) );
    SetShort("the very big City Key");
    SetLong("It is probably the biggest key you have seen in your life. It is made from\n"+
            "polished gold and has various patterns on it along with the Midgaard Coat of\n"+
            "Arms.");
    SetMass(10);
    SetBaseCost("gold",10000);
    SetDisableChance(100);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [key brass], R-number: [79], V-number: [3123] Item type: KEY
Short description: a key
Long description:
A brass key has been left here.
Extra description keyword(s):
----------
key brass
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
