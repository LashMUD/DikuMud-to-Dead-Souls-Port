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

    SetKeyName("key_3300");
    SetId( ({ "key", "metal key", "item_for_papi" }) );
    SetAdjectives( ({ "shiny", "metal" }) );
    SetShort("a metal key");
    SetLong("A small metal key with an inscription.");
    SetItems( ([
        ({"inscription"}) : "You notice 'My Cottage' has been inscribed on the key.",
        ]) );        
    SetMass(10);
    SetBaseCost("gold",10);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [key metal], R-number: [89], V-number: [3300] Item type: KEY
Short description: a metal key
Long description:
A small metal key has been dropped here.
Extra description keyword(s):
----------
key metal
item_for_papi
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 10, Cost/day: 100, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Keytype : 0
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
