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

    SetKeyName("key_7911");
    SetId( ({ "key", "brass key", "item_for_redferne", "item_for_naoniel" }) );
    SetAdjectives( ({ "shiny", "metal", "brass" }) );
    SetShort("a small brass key");
    SetLong("It is a small, simple brass key with no inscriptions or marks of any kind.");
    SetMass(2);
    SetBaseCost("gold",10);
    SetDisableChance(100);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [key], R-number: [232], V-number: [7911]
Item type: KEY
Short description: a small brass key
Long description:
A small brass key lies here.
Extra description keyword(s):
----------
key
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 10, Cost/day: 4, Timer: 0
In room: Nowhere ,In object: None ,Carried by:Nobody
Keytype : 7910
Equipment Status: Inventory
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
