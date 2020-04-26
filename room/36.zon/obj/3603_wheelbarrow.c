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
#include <vendor_types.h>

inherit LIB_ITEM;

void create() {
    ::create();

    SetKeyName("wheelbarrow");
    SetId( ({"wheelbarrow"}) );
    SetAdjectives( ({ "generic"}) );
    SetShort("a wheelbarrow");
    SetLong("It is a heavy wheelbarrow made from solid oaken planks that have been painted\n"+
            "a dark, green colour.");
    SetBaseCost("gold",100);
    SetMass(100);
    SetVendorType(VT_TREASURE);
}

void init(){
    ::init();
}

/*Extra Information Original Diku Output
Object name: [wheelbarrow], R-number: [117], V-number: [3603] Item type: BOAT
Short description: a wheelbarrow
Long description:
A green-painted wheelbarrow is standing here.
Extra description keyword(s):
----------
wheelbarrow
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 100, Value: 100, Cost/day: 100, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
