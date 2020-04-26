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

    SetKeyName("key_3307");
    SetId( ({ "key", "mithral key", "item_for_gimli" }) );
    SetAdjectives( ({ "brilliant", "silver" }) );
    SetShort("a small mithral key");
    SetLong("A small mithral key with an inscription.");
    SetItems( ([
        ({"inscription"}) : "The small mithril key is a sample of exquisite workmanship.\n"+
                            "It has the letter \"G\" inscribed.",
        ]) );
    SetMass(10);
    SetBaseCost("gold",10);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [key mithril], R-number: [96], V-number: [3307] Item type: KEY
Short description: a mithril key
Long description:
A small mithril key has been dropped here.
Extra description keyword(s):
----------
key mithril
item_for_gimli
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
