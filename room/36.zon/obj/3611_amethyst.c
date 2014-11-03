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

void create(){
    ::create();

    SetKeyName("amethyst");
    SetId( ({"amethyst","item","gem"}) );
    SetAdjectives( ({"polished","purple","gem"}) );
    SetShort("an amethyst");
    SetLong("A large, beautifully polished amethyst has been left here.\n"+
            "It has a very deep purple colour.");
    SetMass(1);
    SetBaseCost("gold",200);
    SetVendorType(VT_TREASURE);
}

void init(){
    ::init();
}

/*Extra Information Original Diku Output
Object name: [amethyst gem], R-number: [121], V-number: [3611] Item type:
TREASURE
Short description: a amethyst
Long description:
A large, beautifully polished amethyst has been left here.
Extra description keyword(s):
----------
amethyst
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 200, Cost/day: 40, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
