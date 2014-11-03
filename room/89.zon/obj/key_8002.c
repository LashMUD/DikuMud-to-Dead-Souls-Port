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
    SetKeyName("key_8002");
    SetId( ({ "key", "red key", "red metal" }) );
    SetAdjectives( ({ "red", "metal", "small" }) );
    SetShort("a red key");
    SetLong("A small metal key with a red handle.");
    SetMass(0);
    SetBaseCost("gold",0);
    SetDisableChance(100);
}

void init(){
    ::init();
}

/*Extra Information Original Diku Output
Object name: [red key], R-number: [234], V-number: [8002]
Item type: KEY
Short description: a red key
Long description:
A small metal key with a red handle has been left here.
Extra description keyword(s): None
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 0, Value: 0, Cost/day: 400, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Keytype : 0
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
