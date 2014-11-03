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

    SetKeyName("key_3301");
    SetId( ({ "key", "brass key", "item_for_quifael" }) );
    SetAdjectives( ({ "dull", "metal", "brass" }) );
    SetShort("An old brass key");
    SetLong("It looks as if it is very old.  There are some small marks on it as if\n"+
            "somebody with tiny (but strong!) teeth has been biting a lot in it.");
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
Object name: [key brass], R-number: [90], V-number: [3301] Item type: KEY
Short description: a brass key
Long description:
An old brass key has been dropped here.
Extra description keyword(s):
----------
key brass
item_for_quifael
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
